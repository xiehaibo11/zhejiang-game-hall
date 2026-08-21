
EC_KEY * o2i_ECPublicKey(EC_KEY **key,uchar **in,long len)

{
  int iVar1;
  int line;
  EC_KEY *pEVar2;
  
  if (((key == (EC_KEY **)0x0) || (pEVar2 = *key, pEVar2 == (EC_KEY *)0x0)) ||
     (*(long *)(pEVar2 + 0x18) == 0)) {
    iVar1 = 0x43;
    line = 0x459;
  }
  else {
    iVar1 = EC_KEY_oct2key(pEVar2,*in,len,0);
    if (iVar1 != 0) {
      *in = *in + len;
      return pEVar2;
    }
    iVar1 = 0x10;
    line = 0x45e;
  }
  ERR_put_error(0x10,0x98,iVar1,"crypto/ec/ec_asn1.c",line);
  return (EC_KEY *)0x0;
}

