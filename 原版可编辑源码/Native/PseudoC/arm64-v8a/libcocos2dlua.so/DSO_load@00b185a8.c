
/* WARNING: Type propagation algorithm not settling */

DSO * DSO_load(DSO *dso,char *filename,DSO_METHOD *meth,int flags)

{
  undefined1 uVar1;
  int iVar2;
  DSO_MERGER_FUNC pDVar3;
  
  if (dso == (DSO *)0x0) {
    dso = (DSO *)FUN_00b18304();
    if (dso == (DSO *)0x0) {
      ERR_put_error(0x25,0x70,0x41,"crypto/dso/dso_lib.c",0x7e);
      return (DSO *)0x0;
    }
    dso->flags = flags;
    uVar1 = true;
    pDVar3 = dso->merger;
  }
  else {
    uVar1 = false;
    pDVar3 = dso->merger;
  }
  if (pDVar3 != (DSO_MERGER_FUNC)0x0) {
    ERR_put_error(0x25,0x70,0x6e,"crypto/dso/dso_lib.c",0x8b);
    goto joined_r0x00b1870c;
  }
  if (filename != (char *)0x0) {
    iVar2 = DSO_set_filename(dso,filename);
    if (iVar2 == 0) {
      ERR_put_error(0x25,0x70,0x70,"crypto/dso/dso_lib.c",0x94);
      goto joined_r0x00b1870c;
    }
    if (*(DSO_MERGER_FUNC *)((long)dso + 0x30) != (DSO_MERGER_FUNC)0x0) {
      if (dso->meth->dso_load == (_func_3874 *)0x0) {
        ERR_put_error(0x25,0x70,0x6c,"crypto/dso/dso_lib.c",0x9d);
      }
      else {
        iVar2 = (*dso->meth->dso_load)(dso);
        if (iVar2 != 0) {
          return dso;
        }
        ERR_put_error(0x25,0x70,0x67,"crypto/dso/dso_lib.c",0xa1);
      }
      goto joined_r0x00b1870c;
    }
  }
  ERR_put_error(0x25,0x70,0x6f,"crypto/dso/dso_lib.c",0x99);
joined_r0x00b1870c:
  if ((bool)uVar1) {
    DSO_free(dso);
  }
  return (DSO *)0x0;
}

