
undefined8
custom_ext_parse(long param_1,int param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                undefined4 *param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ushort *puVar4;
  ulong uVar5;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x148) + 0x1a8);
  if (param_2 == 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x148) + 0x198);
  }
  if (puVar1[1] != 0) {
    puVar4 = (ushort *)*puVar1;
    uVar5 = 0;
    do {
      if (*puVar4 == param_3) {
        if (puVar4 == (ushort *)0x0) {
          return 1;
        }
        uVar2 = *(uint *)(puVar4 + 2);
        if ((uVar2 & 2) == 0 && param_2 == 0) {
                    /* try { // try from 00adab3c to 00bdab43 has its CatchHandler @ 00adac08 */
                    /* try { // try from 00adab44 to 00bdab67 has its CatchHandler @ 00adaa00 */
          *param_6 = 0x6e;
          return 0;
        }
        if ((uVar2 & 1) != 0) {
                    /* try { // try from 00adab84 to 00bdabf7 has its CatchHandler @ 00adaa00 */
          *param_6 = 0x32;
          return 0;
        }
        *(uint *)(puVar4 + 2) = uVar2 | 1;
        if (*(code **)(puVar4 + 0x10) == (code *)0x0) {
          return 1;
        }
                    /* try { // try from 00adab68 to 00bdab83 has its CatchHandler @ 00adac28 */
                    /* WARNING: Could not recover jumptable at 0x00adab78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(puVar4 + 0x10))
                          (param_1,param_3,param_4,param_5,param_6,*(undefined8 *)(puVar4 + 0x14));
        return uVar3;
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 0x18;
    } while (uVar5 < (ulong)puVar1[1]);
  }
  return 1;
}

