
int Camellia_set_key(uchar *userKey,int bits,CAMELLIA_KEY *key)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if ((userKey != (uchar *)0x0) && (key != (CAMELLIA_KEY *)0x0)) {
    if ((bits == 0x80) || ((bits == 0x100 || (bits == 0xc0)))) {
      iVar1 = Camellia_Ekeygen(bits,userKey,key);
      iVar2 = 0;
      key->grand_rounds = iVar1;
    }
    else {
      iVar2 = -2;
    }
  }
  return iVar2;
}

