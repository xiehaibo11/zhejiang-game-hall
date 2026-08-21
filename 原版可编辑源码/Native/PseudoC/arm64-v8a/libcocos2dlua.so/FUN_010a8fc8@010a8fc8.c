
undefined8 FUN_010a8fc8(long param_1,char *param_2,long *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long local_38;
  
                    /* catch() { ... } // from try @ 010a9020 with catch @ 010a8fd8 */
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  iVar3 = strcmp(param_2,"glyph-to-script-map");
  if (iVar3 == 0) {
    lVar5 = *param_3;
    if (lVar5 != 0) {
      local_38 = *(long *)(lVar5 + 0xd8);
      if (local_38 == 0) {
        uVar4 = FUN_010a8a28(lVar5,&local_38,param_1);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        *(long *)(lVar5 + 0xd8) = local_38;
        *(code **)(lVar5 + 0xe0) = FUN_010a8dec;
      }
      param_3[1] = *(long *)(local_38 + 0x10);
      return 0;
    }
  }
  else {
                    /* try { // try from 010a900c to 011a901f has its CatchHandler @ 010a9078 */
    iVar3 = strcmp(param_2,"fallback-script");
    if (iVar3 == 0) {
                    /* catch() { ... } // from try @ 010a900c with catch @ 010a9078 */
      *(undefined4 *)param_3 = *(undefined4 *)((&af_style_classes)[uVar1] + 8);
      return 0;
    }
                    /* try { // try from 010a9020 to 011a90af has its CatchHandler @ 010a8fd8 */
    iVar3 = strcmp(param_2,"default-script");
    if (iVar3 == 0) {
      *(undefined4 *)param_3 = uVar2;
      return 0;
    }
    iVar3 = strcmp(param_2,"increase-x-height");
    if (iVar3 != 0) {
      return 0xc;
    }
    lVar5 = *param_3;
    if (lVar5 != 0) {
      local_38 = *(long *)(lVar5 + 0xd8);
      if (local_38 == 0) {
        uVar4 = FUN_010a8a28(lVar5,&local_38,param_1);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        *(long *)(lVar5 + 0xd8) = local_38;
        *(code **)(lVar5 + 0xe0) = FUN_010a8dec;
      }
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(local_38 + 0x18);
      return 0;
    }
  }
                    /* try { // try from 010a90f0 to 011a90f7 has its CatchHandler @ 010a9270 */
  return 0x23;
}

