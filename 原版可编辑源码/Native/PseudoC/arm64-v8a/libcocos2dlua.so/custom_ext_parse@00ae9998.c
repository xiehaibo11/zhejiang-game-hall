
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
                    /* try { // try from 00ae99bc to 00be99c3 has its CatchHandler @ 00aea198 */
                    /* try { // try from 00ae99c4 to 00be99cf has its CatchHandler @ 00aea19c */
      if (*puVar4 == param_3) {
        if (puVar4 == (ushort *)0x0) {
          return 1;
        }
        uVar2 = *(uint *)(puVar4 + 2);
                    /* try { // try from 00ae99e4 to 00be99eb has its CatchHandler @ 00aea128 */
        if ((uVar2 & 2) == 0 && param_2 == 0) {
          *param_6 = 0x6e;
          return 0;
        }
        if ((uVar2 & 1) != 0) {
          *param_6 = 0x32;
          return 0;
        }
        *(uint *)(puVar4 + 2) = uVar2 | 1;
        if (*(code **)(puVar4 + 0x10) == (code *)0x0) {
          return 1;
        }
                    /* try { // try from 00ae9a1c to 00be9a27 has its CatchHandler @ 00aea114 */
                    /* WARNING: Could not recover jumptable at 0x00ae9a2c. Too many branches */
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

