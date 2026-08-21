
void FUN_00b0582c(long param_1,long param_2)

{
  DH *pDVar1;
  
  pDVar1 = *(DH **)(param_1 + 0x20);
  if (pDVar1 == (DH *)0x0) {
    pDVar1 = DH_new();
    *(DH **)(param_1 + 0x20) = pDVar1;
    if (pDVar1 == (DH *)0x0) {
      return;
    }
  }
  FUN_00b04c10(pDVar1,*(undefined8 *)(param_2 + 0x20),
               *(undefined1 **)(param_2 + 0x10) == dhx_asn1_meth);
  return;
}

