
int DH_size(DH *dh)

{
  int iVar1;
  int iVar2;
  
  iVar2 = BN_num_bits(dh->p);
  iVar1 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar1 = iVar2 + 7;
  }
  return iVar1 >> 3;
}

