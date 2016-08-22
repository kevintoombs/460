int prints(char *s){
  while (*s) {
    putc(*s++);
  }
}

int printf(char *fmt, ...)
{
  char *cp = fmt;
  u16 *ip = (u16 *)&fmt + 1;
  u32 *up;
  while (*cp) {
    if (*cp != '%') {
      putc(*cp);
      if(*cp=='\n')
        putc('\r');
      cp++; continue;
    }
    cp++;
    switch(*cp) {
      case 'c' :   putc(*ip); break;
      case 's' : prints(*ip); break;
      case 'u' : printu(*ip); break;
      case 'd' : printd(*ip); break;
      case 'x' : printx(*ip); break;
      case 'l' : printl(*(u32*)ip++); break;
      case 'X' : printX(*(u32*)ip++); break;
    }
    cp++; ip++;
  }
}

int gets(char s[]){
  while (*s){
    getc(*s++);
  }
}

char *ctable = "0123456789ABCDEF";
u16 BASE = 10;
int rpu(u16 x){
  char c;
  if(x){
    c = ctable[x % BASE];
    rpu(x/ BASE);
    putc(c);
  }
}
int printu(u16 x){
  (x==0) ? putc('0') : rpu(x);
  putc(' ');
}
int printd(u16 x){
  if (x==0) {
    putc('0');
  } else {

  }
}
int printx(u16 x){}
int printl(u32 x){}
int printX(u32 x){}
