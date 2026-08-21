
int ASN1_INTEGER_cmp(ASN1_INTEGER *x,ASN1_INTEGER *y)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
                    /* try { // try from 00b8a900 to 00c8a917 has its CatchHandler @ 00b8aa5c */
  uVar1 = x->type & 0x100;
                    /* try { // try from 00b8a918 to 00c8a96b has its CatchHandler @ 00b8a6a0 */
  if (uVar1 == (y->type & 0x100U)) {
    iVar2 = ASN1_STRING_cmp(x,y);
    iVar3 = -iVar2;
    if (uVar1 == 0) {
      iVar3 = iVar2;
    }
  }
  else {
    iVar3 = (uVar1 >> 7 ^ 2) - 1;
  }
  return iVar3;
}

