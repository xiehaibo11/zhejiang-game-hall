
void FUN_009a2f1c(undefined8 param_1,undefined4 param_2,byte *param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined *puVar15;
  uint uVar16;
  undefined8 uVar17;
  uint local_80;
  undefined4 uStack_7c;
  uint local_78;
  byte local_70;
  byte local_6f;
  byte local_6e;
  byte local_6d;
  byte local_6c;
  byte local_6b;
  long local_68;
  
                    /* try { // try from 009a2f34 to 00aa2f3f has its CatchHandler @ 009a3118 */
  lVar8 = tpidr_el0;
                    /* try { // try from 009a2f40 to 00aa2f4b has its CatchHandler @ 009a3114 */
  local_68 = *(long *)(lVar8 + 0x28);
  uVar11 = param_5 & 1;
                    /* try { // try from 009a2f4c to 00aa309f has its CatchHandler @ 009a312c */
  *param_4 = uVar11;
  param_4[1] = 0;
  param_4[2] = 0xffffffff;
  uVar16 = (uint)*param_3 * 0x1f;
  uVar13 = (uint)param_3[1] * 0x1f;
  uVar9 = (uint)param_3[3] * 0x1f;
  uVar1 = (uint)param_3[4] * 0x1f;
  uVar2 = (uint)param_3[2] * 0x1f;
  uVar14 = (uint)param_3[5] * 0x1f;
  uVar16 = uVar16 + (uVar16 >> 8) + 0x80;
  uVar13 = uVar13 + (uVar13 >> 8) + 0x80;
  uVar9 = uVar9 + (uVar9 >> 8) + 0x80;
  uVar1 = uVar1 + (uVar1 >> 8) + 0x80;
  uVar2 = uVar2 + (uVar2 >> 8) + 0x80;
  uVar14 = uVar14 + (uVar14 >> 8) + 0x80;
  uVar3 = uVar16 >> 8;
  uVar4 = uVar13 >> 8;
  uVar10 = uVar2 >> 8;
  uVar12 = (uVar9 >> 8) - uVar3;
  uVar5 = (uVar1 >> 8) - uVar4;
  uVar6 = (uVar14 >> 8) - uVar10;
  if ((uVar5 + 4 | uVar12 + 4 | uVar6 + 4) < 8) {
    uVar16 = uVar16 >> 8 & 0x1f;
    uVar7 = uVar13 >> 8 & 0x1f;
    uVar2 = uVar2 >> 8 & 0x1f;
    local_6d = (byte)(uVar9 >> 10) & 7 | (byte)((uVar9 >> 8 & 0x1f) << 3);
    uVar9 = (uVar12 & 7) << 0x18;
    uVar12 = (uVar5 & 7) << 0x10;
    uVar10 = uVar10 << 0xb;
    uVar13 = (uVar6 & 7) << 8;
    local_6c = (byte)(uVar1 >> 10) & 7 | (byte)((uVar1 >> 8 & 0x1f) << 3);
    local_6b = (byte)(uVar14 >> 10) & 7 | (byte)((uVar14 >> 8 & 0x1f) << 3);
    uVar11 = uVar11 | uVar3 << 0x1b | uVar4 << 0x13;
    local_6e = (byte)(uVar2 >> 2) | (byte)(uVar2 << 3);
    local_6f = (byte)(uVar7 >> 2) | (byte)(uVar7 << 3);
    local_70 = (byte)(uVar16 >> 2) | (byte)(uVar16 << 3);
    uVar14 = 2;
  }
  else {
                    /* try { // try from 009a30a0 to 00aa3183 has its CatchHandler @ 009a2ec0 */
    uVar16 = (uint)*param_3 * 0xf;
    uVar13 = (uint)param_3[1] * 0xf;
    uVar9 = (uint)param_3[2] * 0xf;
    uVar1 = (uint)param_3[3] * 0xf;
    uVar2 = (uint)param_3[4] * 0xf;
    uVar14 = (uint)param_3[5] * 0xf;
    uVar16 = uVar16 + (uVar16 >> 8) + 0x80;
    uVar13 = uVar13 + (uVar13 >> 8) + 0x80;
    uVar9 = uVar9 + (uVar9 >> 8) + 0x80;
    uVar1 = uVar1 + (uVar1 >> 8) + 0x80;
    uVar2 = uVar2 + (uVar2 >> 8) + 0x80;
    uVar14 = uVar14 + (uVar14 >> 8) + 0x80;
    uVar10 = uVar16 >> 8 & 0xf;
    uVar3 = uVar13 >> 8 & 0xf;
    uVar4 = uVar9 >> 8 & 0xf;
    uVar12 = uVar1 >> 8 & 0xf;
    uVar5 = uVar2 >> 8 & 0xf;
    uVar6 = uVar14 >> 8 & 0xf;
                    /* catch() { ... } // from try @ 009a2f40 with catch @ 009a3114 */
    uVar14 = uVar14 & 0x3f00;
                    /* catch() { ... } // from try @ 009a2f34 with catch @ 009a3118 */
    local_70 = (byte)uVar10 | (byte)(uVar10 << 4);
                    /* catch() { ... } // from try @ 009a2f14 with catch @ 009a311c */
    local_6f = (byte)uVar3 | (byte)(uVar3 << 4);
    local_6e = (byte)uVar4 | (byte)(uVar4 << 4);
    local_6d = (byte)uVar12 | (byte)(uVar12 << 4);
    local_6c = (byte)uVar5 | (byte)(uVar5 << 4);
                    /* catch() { ... } // from try @ 009a2f4c with catch @ 009a312c */
    local_6b = (byte)uVar6 | (byte)(uVar6 << 4);
    uVar12 = (uVar1 >> 8) << 0x18;
    uVar10 = (uVar13 >> 8) << 0x14;
    uVar13 = (uVar2 >> 8) << 0x10;
    uVar9 = (uVar9 >> 8) << 0xc;
    uVar11 = uVar11 | (uVar16 >> 8) << 0x1c;
  }
  uVar16 = 0;
  uVar14 = uVar11 | uVar10 | uVar9 | uVar12 | uVar13 | uVar14;
  puVar15 = &DAT_01889cf8;
  *param_4 = uVar14;
                    /* try { // try from 009a3184 to 00aa31d7 has its CatchHandler @ 009a3184
                       catch() { ... } // from try @ 009a3184 with catch @ 009a3184
                       catch() { ... } // from try @ 009a32e4 with catch @ 009a3184 */
  do {
    local_80 = uVar16 | uVar14;
    uStack_7c = 0;
    local_78 = 0;
    FUN_009a3854(param_1,param_2,&local_80,param_5 & 1,0,&local_70,puVar15);
    if (local_78 < param_4[2]) {
      param_4[2] = local_78;
      *(ulong *)param_4 = CONCAT44(uStack_7c,local_80);
    }
    uVar16 = uVar16 + 0x20;
                    /* try { // try from 009a31d8 to 00aa31ef has its CatchHandler @ 009a3360 */
    puVar15 = puVar15 + 0x10;
  } while (uVar16 != 0x100);
  uVar13 = *param_4;
  uVar17 = *(undefined8 *)(param_4 + 1);
  uVar16 = 0;
  puVar15 = &DAT_01889cf8;
  do {
                    /* try { // try from 009a31f8 to 00aa3203 has its CatchHandler @ 009a335c */
    local_80 = uVar16 | uVar13;
                    /* try { // try from 009a3204 to 00aa320f has its CatchHandler @ 009a3358 */
                    /* try { // try from 009a3210 to 00aa32e3 has its CatchHandler @ 009a3370 */
    uStack_7c = (undefined4)uVar17;
    local_78 = (uint)((ulong)uVar17 >> 0x20);
    FUN_009a3854(param_1,param_2,&local_80,param_5 & 1,1,(ulong)&local_70 | 3,puVar15);
    if ((uVar16 == 0) || (local_78 < param_4[2])) {
      param_4[2] = local_78;
      *(ulong *)param_4 = CONCAT44(uStack_7c,local_80);
    }
    uVar16 = uVar16 + 4;
    puVar15 = puVar15 + 0x10;
  } while (uVar16 != 0x20);
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

