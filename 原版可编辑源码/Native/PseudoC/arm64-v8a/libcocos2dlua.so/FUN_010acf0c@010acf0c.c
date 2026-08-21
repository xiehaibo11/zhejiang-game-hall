
undefined8 FUN_010acf0c(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  short *psVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) || (param_1[1] == 0)) {
    return 0x60;
  }
  psVar4 = (short *)param_2[1];
  if (psVar4 == (short *)0x0) {
    return 0x14;
  }
  if (psVar4[1] == 0) {
    return 0;
  }
  if ((long)*psVar4 < 1) {
    return 0;
  }
  if (*(long *)(psVar4 + 0xc) == 0) {
    return 0x14;
  }
  if (*(long *)(psVar4 + 4) == 0) {
    return 0x14;
  }
  if (*(short *)(*(long *)(psVar4 + 0xc) + (long)*psVar4 * 2 + -2) + 1 != (int)psVar4[1]) {
    return 0x14;
  }
  if ((*(byte *)(param_2 + 2) >> 1 & 1) != 0) {
    return 0x13;
  }
  piVar8 = (int *)*param_2;
  if (piVar8 == (int *)0x0) {
    return 0x14;
  }
  if (piVar8[1] == 0) {
    return 0;
  }
  if (*piVar8 == 0) {
    return 0;
  }
  if (*(long *)(piVar8 + 4) == 0) {
    return 0x14;
  }
  puVar11 = (uint *)param_1[3];
  *(undefined8 *)(puVar11 + 0x3e) = *(undefined8 *)(psVar4 + 0x10);
  uVar3 = *(undefined8 *)(psVar4 + 8);
  *(undefined8 *)(puVar11 + 0x3c) = *(undefined8 *)(psVar4 + 0xc);
  *(undefined8 *)(puVar11 + 0x3a) = uVar3;
  uVar3 = *(undefined8 *)psVar4;
  *(undefined8 *)(puVar11 + 0x38) = *(undefined8 *)(psVar4 + 4);
  *(undefined8 *)(puVar11 + 0x36) = uVar3;
  *(undefined8 *)(puVar11 + 0x34) = *(undefined8 *)(piVar8 + 8);
  uVar3 = *(undefined8 *)(piVar8 + 4);
  *(undefined8 *)(puVar11 + 0x32) = *(undefined8 *)(piVar8 + 6);
  *(undefined8 *)(puVar11 + 0x30) = uVar3;
  uVar3 = *(undefined8 *)piVar8;
  *(undefined8 *)(puVar11 + 0x2e) = *(undefined8 *)(piVar8 + 2);
  *(undefined8 *)(puVar11 + 0x2c) = uVar3;
  lVar5 = *param_1;
  *(long *)(puVar11 + 8) = lVar5;
  *(ulong *)(puVar11 + 10) = lVar5 + (param_1[1] & 0xfffffffffffffff8U);
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    return 0x13;
  }
  uVar1 = puVar11[0x3e];
  uVar9 = 6;
  bVar2 = (uVar1 & 0x100) != 0;
  if (bVar2) {
    uVar9 = 0xc;
  }
  bVar6 = 2;
  uVar10 = 0x20;
  if (bVar2) {
    uVar10 = 0x100;
  }
  uVar7 = 2;
  if (bVar2) {
    uVar7 = 0x1e;
  }
  puVar11[4] = uVar10;
  puVar11[5] = uVar7;
  *puVar11 = uVar9;
  puVar11[1] = 1 << (ulong)uVar9;
  puVar11[2] = (uint)(1 << (ulong)uVar9) >> 1;
  puVar11[3] = uVar9 - 6;
  puVar11[6] = uVar9 - 6;
  if ((uVar1 >> 3 & 1) == 0) {
    bVar6 = (byte)(uVar1 >> 2) & 4;
    *(byte *)(puVar11 + 0x4e) = bVar6;
    if ((uVar1 >> 5 & 1) != 0) goto LAB_010ad050;
    bVar6 = bVar6 | 1;
  }
  *(byte *)(puVar11 + 0x4e) = bVar6;
LAB_010ad050:
  *(code **)(puVar11 + 0x4c) = FUN_010ad7e0;
  *(byte *)((long)puVar11 + 0x139) = ((byte)(uVar1 >> 9) ^ 0xff) & 1;
  *(code **)(puVar11 + 0x46) = FUN_010ad454;
                    /* try { // try from 010ad088 to 011ad0db has its CatchHandler @ 010ad088
                       catch() { ... } // from try @ 010ad088 with catch @ 010ad088
                       catch() { ... } // from try @ 010ad1a0 with catch @ 010ad088 */
  *(short *)(puVar11 + 0x14) = (short)puVar11[0x2d];
  puVar11[0x1e4] = 0;
  *(undefined2 *)(puVar11 + 0x1d4) = 0;
  *(code **)(puVar11 + 0x4a) = FUN_010ad63c;
  *(code **)(puVar11 + 0x48) = FUN_010ad490;
  *(short *)((long)puVar11 + 0x752) = (short)puVar11[0x2c] + -1;
  *(undefined8 *)(puVar11 + 0x16) = *(undefined8 *)(puVar11 + 0x30);
  uVar3 = FUN_010ad7f4(puVar11,0);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if ((*(char *)((long)puVar11 + 0x139) != '\0') && ((char)puVar11[0x4e] != '\x02')) {
                    /* try { // try from 010ad0dc to 011ad0eb has its CatchHandler @ 010ad204 */
                    /* try { // try from 010ad0f4 to 011ad0fb has its CatchHandler @ 010ad1f4 */
    *(code **)(puVar11 + 0x46) = FUN_010ae764;
                    /* try { // try from 010ad104 to 011ad10f has its CatchHandler @ 010ad1ec */
    puVar11[0x1e4] = 0;
    *(undefined2 *)(puVar11 + 0x1d4) = 0;
    *(code **)(puVar11 + 0x4c) = FUN_010ae9c0;
    *(code **)(puVar11 + 0x4a) = FUN_010ae7fc;
    *(code **)(puVar11 + 0x48) = FUN_010ae768;
    *(short *)((long)puVar11 + 0x752) = (short)puVar11[0x2d] + -1;
                    /* try { // try from 010ad12c to 011ad133 has its CatchHandler @ 010ad1e8 */
    uVar3 = FUN_010ad7f4(puVar11,1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  return 0;
}

