
long FUN_010f0c9c(long *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  
                    /* catch() { ... } // from try @ 010f0c0c with catch @ 010f0c9c */
                    /* catch() { ... } // from try @ 010f0bb4 with catch @ 010f0ca0 */
                    /* catch() { ... } // from try @ 010f0ba0 with catch @ 010f0ca4
                       catch() { ... } // from try @ 010f0c24 with catch @ 010f0ca4 */
  lVar7 = param_1[1];
                    /* try { // try from 010f0cc0 to 011f0cf3 has its CatchHandler @ 010f0cc0
                       catch() { ... } // from try @ 010f0cc0 with catch @ 010f0cc0
                       catch() { ... } // from try @ 010f0d68 with catch @ 010f0cc0 */
  uVar8 = (ulong)param_3;
  uVar3 = 0;
  if (uVar8 != 0) {
    uVar3 = 0x3b9ac9e8 / uVar8;
  }
  if (0x3b9ac9e8 < param_3) {
    puVar6 = (undefined8 *)*param_1;
                    /* try { // try from 010f0cf4 to 011f0cff has its CatchHandler @ 010f0dc4 */
    *(undefined4 *)(puVar6 + 5) = 0x48;
    (*(code *)*puVar6)(param_1);
  }
                    /* try { // try from 010f0d04 to 011f0d1b has its CatchHandler @ 010f0dc0 */
  uVar10 = (uint)uVar3;
  if (param_4 <= uVar3) {
    uVar10 = param_4;
  }
  *(uint *)(lVar7 + 0xa0) = uVar10;
  lVar7 = FUN_010f0a10(param_1,param_2,(ulong)param_4 << 3);
  if (param_4 != 0) {
    uVar9 = 0;
    do {
      uVar2 = uVar10;
      if (param_4 - uVar9 <= uVar10) {
        uVar2 = param_4 - uVar9;
      }
      lVar4 = FUN_010f0ba8(param_1,param_2,uVar2 * uVar8);
      if (uVar2 != 0) {
        uVar1 = ~param_4 + uVar9;
                    /* try { // try from 010f0d5c to 011f0d67 has its CatchHandler @ 010f0dbc */
        if (uVar1 <= ~uVar10) {
          uVar1 = ~uVar10;
        }
        iVar5 = uVar1 + 1;
        uVar10 = uVar9;
        do {
          uVar9 = uVar10 + 1;
                    /* try { // try from 010f0d68 to 011f0ddf has its CatchHandler @ 010f0cc0 */
          *(long *)(lVar7 + (ulong)uVar10 * 8) = lVar4;
          iVar5 = iVar5 + 1;
          lVar4 = lVar4 + uVar8;
          uVar10 = uVar9;
        } while (iVar5 != 0);
      }
      uVar10 = uVar2;
    } while (uVar9 < param_4);
  }
  return lVar7;
}

