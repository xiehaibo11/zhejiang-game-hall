
int BIO_indent(BIO *b,int indent,int max)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = ~(indent & (indent >> 0x1f ^ 0xffffffffU));
  if ((int)uVar2 < ~max) {
    uVar2 = ~max;
  }
  do {
    uVar2 = uVar2 + 1;
    if (uVar2 == 0) {
      return 1;
    }
    iVar1 = BIO_puts(b," ");
  } while (iVar1 == 1);
  return 0;
}

