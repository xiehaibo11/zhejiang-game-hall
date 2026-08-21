
/* WARNING: Type propagation algorithm not settling */

DSO * DSO_load(DSO *dso,char *filename,DSO_METHOD *meth,int flags)

{
  undefined1 uVar1;
  int iVar2;
  DSO_MERGER_FUNC pDVar3;
  
  if (dso == (DSO *)0x0) {
    dso = (DSO *)FUN_00b08e84();
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
    goto joined_r0x00b0928c;
  }
  if (filename != (char *)0x0) {
    iVar2 = DSO_set_filename(dso,filename);
    if (iVar2 == 0) {
      ERR_put_error(0x25,0x70,0x70,"crypto/dso/dso_lib.c",0x94);
      goto joined_r0x00b0928c;
    }
    if (*(DSO_MERGER_FUNC *)((long)dso + 0x30) != (DSO_MERGER_FUNC)0x0) {
      if (dso->meth->dso_load == (_func_3874 *)0x0) {
        ERR_put_error(0x25,0x70,0x6c,"crypto/dso/dso_lib.c",0x9d);
      }
      else {
                    /* try { // try from 00b091d8 to 00c0932b has its CatchHandler @ 00b091d8
                       catch() { ... } // from try @ 00b091d8 with catch @ 00b091d8
                       catch() { ... } // from try @ 00b09338 with catch @ 00b091d8
                       catch() { ... } // from try @ 00b098c8 with catch @ 00b091d8
                       catch() { ... } // from try @ 00b09948 with catch @ 00b091d8
                       catch() { ... } // from try @ 00b09a44 with catch @ 00b091d8 */
        iVar2 = (*dso->meth->dso_load)(dso);
        if (iVar2 != 0) {
          return dso;
        }
        ERR_put_error(0x25,0x70,0x67,"crypto/dso/dso_lib.c",0xa1);
      }
      goto joined_r0x00b0928c;
    }
  }
  ERR_put_error(0x25,0x70,0x6f,"crypto/dso/dso_lib.c",0x99);
joined_r0x00b0928c:
  if ((bool)uVar1) {
    DSO_free(dso);
  }
  return (DSO *)0x0;
}

