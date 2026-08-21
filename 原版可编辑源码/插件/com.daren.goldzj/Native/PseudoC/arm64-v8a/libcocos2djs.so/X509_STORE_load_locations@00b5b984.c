
int X509_STORE_load_locations(X509_STORE *ctx,char *file,char *dir)

{
  int iVar1;
  uint uVar2;
  X509_LOOKUP_METHOD *pXVar3;
  X509_LOOKUP *pXVar4;
  
  if (file == (char *)0x0) {
LAB_00b5b9d4:
    if (dir != (char *)0x0) {
      pXVar3 = X509_LOOKUP_hash_dir();
      pXVar4 = X509_STORE_add_lookup(ctx,pXVar3);
      if (pXVar4 == (X509_LOOKUP *)0x0) {
        return 0;
      }
      iVar1 = X509_LOOKUP_ctrl(pXVar4,2,dir,1,(char **)0x0);
      if (iVar1 != 1) goto LAB_00b5ba18;
    }
    uVar2 = (uint)(file != (char *)0x0 || dir != (char *)0x0);
  }
  else {
    pXVar3 = X509_LOOKUP_file();
    pXVar4 = X509_STORE_add_lookup(ctx,pXVar3);
    if (pXVar4 == (X509_LOOKUP *)0x0) {
      return 0;
    }
    iVar1 = X509_LOOKUP_ctrl(pXVar4,1,file,1,(char **)0x0);
    if (iVar1 == 1) goto LAB_00b5b9d4;
LAB_00b5ba18:
    uVar2 = 0;
  }
  return uVar2;
}

