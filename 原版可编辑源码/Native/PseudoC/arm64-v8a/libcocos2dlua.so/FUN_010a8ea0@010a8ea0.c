
undefined8 FUN_010a8ea0(long param_1,char *param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long local_28;
  
                    /* try { // try from 010a8ec0 to 011a8ec7 has its CatchHandler @ 010a8fbc */
  iVar1 = strcmp(param_2,"fallback-script");
  if (iVar1 == 0) {
                    /* try { // try from 010a8f08 to 011a8fd7 has its CatchHandler @ 010a8e88 */
    puVar3 = af_cyrl_c2cp_style_class;
    lVar4 = 0;
    do {
      if ((*(int *)(puVar3 + 8) == (int)*param_3) && (*(int *)(puVar3 + 0x10) == 10)) {
        *(int *)(param_1 + 0x18) = (int)lVar4;
        return 0;
                    /* catch() { ... } // from try @ 010a8ef0 with catch @ 010a8f84 */
      }
      puVar3 = (&PTR_af_cyrl_c2sc_style_class_0172bf20)[lVar4];
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x2f);
    uVar2 = 6;
  }
  else {
    iVar1 = strcmp(param_2,"default-script");
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x1c) = (int)*param_3;
      uVar2 = 0;
    }
    else {
                    /* try { // try from 010a8ef0 to 011a8f07 has its CatchHandler @ 010a8f84 */
      iVar1 = strcmp(param_2,"increase-x-height");
      if (iVar1 == 0) {
        lVar4 = *param_3;
        if (lVar4 == 0) {
          uVar2 = 0x23;
        }
        else {
          local_28 = *(long *)(lVar4 + 0xd8);
          if (local_28 == 0) {
            uVar2 = FUN_010a8a28(lVar4,&local_28,param_1);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
                    /* catch() { ... } // from try @ 010a8ec0 with catch @ 010a8fbc */
            *(long *)(lVar4 + 0xd8) = local_28;
            *(code **)(lVar4 + 0xe0) = FUN_010a8dec;
          }
          uVar2 = 0;
          *(int *)(local_28 + 0x18) = (int)param_3[1];
        }
      }
      else {
        uVar2 = 0xc;
      }
    }
  }
  return uVar2;
}

