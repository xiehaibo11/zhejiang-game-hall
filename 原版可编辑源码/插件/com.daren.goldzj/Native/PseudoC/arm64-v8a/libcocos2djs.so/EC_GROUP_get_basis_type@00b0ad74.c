
int EC_GROUP_get_basis_type(EC_GROUP *param_1)

{
  long lVar1;
  int iVar2;
  EC_METHOD *meth;
  long lVar3;
  int iVar4;
  
  meth = EC_GROUP_method_of(param_1);
  iVar2 = EC_METHOD_get_field_type(meth);
  if (iVar2 == 0x197) {
    lVar3 = 0;
    do {
      lVar1 = lVar3 * 4;
      lVar3 = lVar3 + 1;
    } while (*(int *)(param_1 + lVar1 + 0x48) != 0);
    iVar4 = 0x2aa;
    if ((int)lVar3 != 3) {
      iVar4 = 0;
    }
    iVar2 = 0x2ab;
    if ((int)lVar3 != 5) {
      iVar2 = iVar4;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

