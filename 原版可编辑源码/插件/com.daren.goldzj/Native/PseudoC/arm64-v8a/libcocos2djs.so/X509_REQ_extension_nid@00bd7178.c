
int X509_REQ_extension_nid(int nid)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)PTR_DAT_01d23db0;
  piVar1 = (int *)PTR_DAT_01d23db0;
  if (iVar2 == 0) {
    return 0;
  }
  do {
    if (iVar2 == nid) {
      return 1;
    }
    iVar2 = piVar1[1];
    piVar1 = piVar1 + 1;
  } while (iVar2 != 0);
  return 0;
}

