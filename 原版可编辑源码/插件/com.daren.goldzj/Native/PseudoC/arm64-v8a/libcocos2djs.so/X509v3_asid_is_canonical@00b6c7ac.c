
ulong X509v3_asid_is_canonical(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6c20c with catch @ 00b6c7b8
                        */
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_00b6c7f0(*param_1);
    if ((int)uVar2 != 0) {
      iVar1 = FUN_00b6c7f0(param_1[1]);
      uVar2 = (ulong)(iVar1 != 0);
    }
  }
  return uVar2;
}

