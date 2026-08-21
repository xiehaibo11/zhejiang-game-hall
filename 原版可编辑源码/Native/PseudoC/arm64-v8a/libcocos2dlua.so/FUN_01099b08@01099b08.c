
ulong FUN_01099b08(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  uVar6 = *param_2;
  if (uVar6 < 0xffff) {
                    /* try { // try from 01099b48 to 01199b53 has its CatchHandler @ 01099b98 */
    if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
                    /* try { // try from 01099bfc to 01199c03 has its CatchHandler @ 01099d10 */
                    /* try { // try from 01099c04 to 01199c0f has its CatchHandler @ 01099d08 */
      uVar3 = FUN_0109be34(param_1,param_2,1);
      return uVar3;
    }
                    /* try { // try from 01099b54 to 01199bb3 has its CatchHandler @ 01099adc */
    if (uVar6 != *(uint *)(param_1 + 0x28)) {
                    /* try { // try from 01099c20 to 01199c2f has its CatchHandler @ 01099d18 */
      uVar3 = FUN_0109bfdc(param_1,param_2,1);
      return uVar3;
    }
    uVar4 = *(uint *)(param_1 + 0x38);
    uVar1 = uVar4;
    if (uVar4 <= uVar6 + 1) {
      uVar1 = uVar6 + 1;
    }
LAB_01099b8c:
    uVar6 = uVar1;
    uVar1 = *(uint *)(param_1 + 0x3c);
    if (uVar6 <= uVar1) {
                    /* catch() { ... } // from try @ 01099b48 with catch @ 01099b98 */
      if (*(long *)(param_1 + 0x48) == 0) {
        do {
          uVar4 = *(int *)(param_1 + 0x40) + uVar6 & 0xffff;
          if (uVar4 != 0) goto LAB_01099c34;
          uVar6 = uVar6 + 1;
        } while (uVar6 <= uVar1);
      }
      else {
        puVar5 = (undefined1 *)(*(long *)(param_1 + 0x48) + (ulong)((uVar6 - uVar4) * 2));
        do {
                    /* try { // try from 01099bc4 to 01199bfb has its CatchHandler @ 01099bc4
                       catch() { ... } // from try @ 01099bc4 with catch @ 01099bc4
                       catch() { ... } // from try @ 01099c80 with catch @ 01099bc4 */
          if ((CONCAT11(*puVar5,puVar5[1]) != 0) &&
             (uVar4 = (uint)CONCAT11(*puVar5,puVar5[1]) + *(int *)(param_1 + 0x40) & 0xffff,
             uVar4 != 0)) {
LAB_01099c34:
            *(uint *)(param_1 + 0x28) = uVar6;
            *(uint *)(param_1 + 0x2c) = uVar4;
            *param_2 = uVar6;
            return (ulong)uVar4;
          }
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 2;
        } while (uVar6 <= uVar1);
      }
    }
    iVar2 = FUN_0109c494(param_1,*(int *)(param_1 + 0x34) + 1);
    if (-1 < iVar2) {
      uVar4 = *(uint *)(param_1 + 0x38);
      uVar1 = uVar4;
      if (uVar4 <= uVar6) {
        uVar1 = uVar6;
      }
      goto LAB_01099b8c;
    }
    *(undefined8 *)(param_1 + 0x28) = 0xffffffff;
  }
  return 0;
}

