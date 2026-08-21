
void * ASN1_d2i_bio(xnew *xnew,undefined1 *d2i,BIO *in,void **x)

{
  BUF_MEM *a;
  int iVar1;
  void *pvVar2;
  char *local_38;
  BUF_MEM *local_28;
  
  local_28 = (BUF_MEM *)0x0;
  iVar1 = FUN_00b894c4(in,&local_28);
  a = local_28;
  if (iVar1 < 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    local_38 = local_28->data;
    pvVar2 = (void *)(*(code *)d2i)(x,&local_38,(long)iVar1);
  }
  BUF_MEM_free(a);
  return pvVar2;
}

