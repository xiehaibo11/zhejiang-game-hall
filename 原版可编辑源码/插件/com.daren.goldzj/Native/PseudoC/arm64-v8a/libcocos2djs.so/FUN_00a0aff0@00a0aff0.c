
int FUN_00a0aff0(long param_1,ulong *param_2,undefined8 *param_3,long param_4,ulong param_5,
                long param_6,ulong param_7,long param_8,ulong param_9)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long local_108;
  byte local_100;
  undefined7 uStack_ff;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  int local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  ulong local_78;
  long local_70;
  
                    /* try { // try from 00a0b008 to 00b0b017 has its CatchHandler @ 00a0b158 */
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (param_1 == 0) {
    iVar5 = -0x66;
    goto LAB_00a0b854;
  }
                    /* try { // try from 00a0b038 to 00b0b057 has its CatchHandler @ 00a0b1d4 */
  lVar10 = (**(code **)(param_1 + 0x20))
                     (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x68),0);
  if ((lVar10 == 0) &&
     (iVar5 = FUN_00a0ac94(param_1,*(undefined8 *)(param_1 + 0x40),&local_108), iVar5 == 0)) {
    iVar5 = 0;
    if (local_108 != 0x2014b50) {
      iVar5 = -0x67;
    }
  }
  else {
                    /* try { // try from 00a0b07c to 00b0b07f has its CatchHandler @ 00a0b1d8 */
    iVar5 = -1;
  }
                    /* try { // try from 00a0b080 to 00b0b14b has its CatchHandler @ 00a0ab58 */
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_f8,1);
  if (iVar6 == 1) {
    uVar14 = local_f8 & 0xff;
LAB_00a0b0c4:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_f8,1);
    if (iVar6 == 1) {
      uVar13 = local_f8 & 0xff;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
      uVar13 = uVar14;
      if (iVar6 != 0) goto LAB_00a0b104;
    }
    local_f8 = uVar14 | uVar13 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
    uVar14 = 0;
    if (iVar6 == 0) goto LAB_00a0b0c4;
LAB_00a0b104:
    local_f8 = 0;
    iVar5 = -1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
  if (iVar6 == 1) {
    uVar14 = (ulong)local_100;
LAB_00a0b150:
                    /* try { // try from 00a0b150 to 00b0b22b has its CatchHandler @ 00a0ab58 */
                    /* catch() { ... } // from try @ 00a0b14c with catch @ 00a0b154 */
                    /* catch() { ... } // from try @ 00a0b008 with catch @ 00a0b158 */
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
    if (iVar6 == 1) {
                    /* catch() { ... } // from try @ 00a0af44 with catch @ 00a0b170 */
      uVar13 = (ulong)local_100;
    }
    else {
                    /* catch() { ... } // from try @ 00a0af34 with catch @ 00a0b180 */
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
                    /* catch() { ... } // from try @ 00a0adb4 with catch @ 00a0b184 */
      uVar13 = uVar14;
      if (iVar6 != 0) goto LAB_00a0b190;
    }
                    /* catch() { ... } // from try @ 00a0ad88 with catch @ 00a0b198 */
    uStack_f0 = uVar14 | uVar13 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
    uVar14 = 0;
                    /* try { // try from 00a0b14c to 00b0b14f has its CatchHandler @ 00a0b154 */
    if (iVar6 == 0) goto LAB_00a0b150;
LAB_00a0b190:
    uStack_f0 = 0;
    iVar5 = -1;
  }
                    /* catch() { ... } // from try @ 00a0ac58 with catch @ 00a0b1a0 */
  uVar1 = *(undefined8 *)(param_1 + 0x40);
                    /* catch() { ... } // from try @ 00a0ad20 with catch @ 00a0b1a4 */
                    /* catch() { ... } // from try @ 00a0ac40 with catch @ 00a0b1ac */
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
                    /* catch() { ... } // from try @ 00a0accc with catch @ 00a0b1bc */
  if (iVar6 == 1) {
    uVar14 = (ulong)local_100;
                    /* catch() { ... } // from try @ 00a0ad60 with catch @ 00a0b1c4 */
LAB_00a0b1dc:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
    if (iVar6 == 1) {
      uVar13 = (ulong)local_100;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
      uVar13 = uVar14;
      if (iVar6 != 0) goto LAB_00a0b21c;
    }
    local_e8 = uVar14 | uVar13 << 8;
  }
  else {
                    /* catch() { ... } // from try @ 00a0ac64 with catch @ 00a0b1cc
                       catch() { ... } // from try @ 00a0ad34 with catch @ 00a0b1cc
                       catch() { ... } // from try @ 00a0ad80 with catch @ 00a0b1cc */
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
                    /* catch() { ... } // from try @ 00a0adc0 with catch @ 00a0b1d4
                       catch() { ... } // from try @ 00a0af64 with catch @ 00a0b1d4
                       catch() { ... } // from try @ 00a0b038 with catch @ 00a0b1d4 */
    uVar14 = 0;
                    /* catch() { ... } // from try @ 00a0b07c with catch @ 00a0b1d8 */
    if (iVar6 == 0) goto LAB_00a0b1dc;
LAB_00a0b21c:
    local_e8 = 0;
    iVar5 = -1;
  }
                    /* try { // try from 00a0b22c to 00b0b27f has its CatchHandler @ 00a0b22c
                       catch() { ... } // from try @ 00a0b22c with catch @ 00a0b22c
                       catch() { ... } // from try @ 00a0b314 with catch @ 00a0b22c */
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
  if (iVar6 == 1) {
    uVar14 = (ulong)local_100;
LAB_00a0b268:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
                    /* try { // try from 00a0b280 to 00b0b297 has its CatchHandler @ 00a0b390 */
    if (iVar6 == 1) {
      uVar13 = (ulong)local_100;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
                    /* try { // try from 00a0b2a0 to 00b0b2ab has its CatchHandler @ 00a0b38c */
      uVar13 = uVar14;
      if (iVar6 != 0) goto LAB_00a0b2a8;
    }
    uStack_e0 = uVar14 | uVar13 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
    uVar14 = 0;
    if (iVar6 == 0) goto LAB_00a0b268;
LAB_00a0b2a8:
    uStack_e0 = 0;
    iVar5 = -1;
                    /* try { // try from 00a0b2ac to 00b0b2b7 has its CatchHandler @ 00a0b388 */
  }
                    /* try { // try from 00a0b2b8 to 00b0b313 has its CatchHandler @ 00a0b3a0 */
  iVar6 = FUN_00a0ac94(param_1,*(undefined8 *)(param_1 + 0x40),&local_d8);
  auVar15._8_8_ = 0xffffffffffffffe7;
  auVar15._0_8_ = 0xffffffffffffffeb;
  auVar16._8_8_ = local_d8;
  auVar16._0_8_ = local_d8;
  auVar16 = NEON_ushl(auVar16,auVar15,8);
  uVar14 = CONCAT44(auVar16._8_4_,auVar16._0_4_) & 0x7f0000000f;
  uVar12 = (uint)local_d8;
  uStack_7c = uVar12 >> 0x10 & 0x1f;
  uStack_80 = uVar12 >> 0xb & 0x1f;
  local_78 = CONCAT44((int)(uVar14 >> 0x20) + 0x7bc,(int)uVar14 + -1);
  uStack_84 = uVar12 >> 5 & 0x3f;
                    /* try { // try from 00a0b314 to 00b0b3f7 has its CatchHandler @ 00a0b22c */
  local_88 = (uVar12 & 0x1f) << 1;
  iVar7 = FUN_00a0ac94(param_1,*(undefined8 *)(param_1 + 0x40),&uStack_d0);
  iVar8 = FUN_00a0ac94(param_1,*(undefined8 *)(param_1 + 0x40),&local_c8);
  iVar9 = FUN_00a0ac94(param_1,*(undefined8 *)(param_1 + 0x40),&uStack_c0);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  if (((iVar7 != 0 || iVar6 != 0) || iVar8 != 0) || iVar9 != 0) {
    iVar5 = -1;
  }
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
                    /* catch() { ... } // from try @ 00a0b2ac with catch @ 00a0b388 */
  if (iVar6 == 1) {
                    /* catch() { ... } // from try @ 00a0b2a0 with catch @ 00a0b38c */
    uVar14 = (ulong)local_100;
                    /* catch() { ... } // from try @ 00a0b280 with catch @ 00a0b390 */
LAB_00a0b3a8:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
    if (iVar6 == 1) {
      uVar13 = (ulong)local_100;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
      uVar13 = uVar14;
      if (iVar6 != 0) goto LAB_00a0b3e8;
    }
    local_b8 = uVar14 | uVar13 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
                    /* catch() { ... } // from try @ 00a0b2b8 with catch @ 00a0b3a0 */
    uVar14 = 0;
    if (iVar6 == 0) goto LAB_00a0b3a8;
LAB_00a0b3e8:
    local_b8 = 0;
    iVar5 = -1;
  }
                    /* try { // try from 00a0b3f8 to 00b0b44b has its CatchHandler @ 00a0b3f8
                       catch() { ... } // from try @ 00a0b3f8 with catch @ 00a0b3f8
                       catch() { ... } // from try @ 00a0b4e0 with catch @ 00a0b3f8 */
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
  if (iVar6 == 1) {
    uVar14 = (ulong)local_100;
LAB_00a0b434:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
                    /* try { // try from 00a0b44c to 00b0b463 has its CatchHandler @ 00a0b55c */
    if (iVar6 == 1) {
      uVar13 = (ulong)local_100;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
                    /* try { // try from 00a0b46c to 00b0b477 has its CatchHandler @ 00a0b558 */
      uVar13 = uVar14;
      if (iVar6 != 0) goto LAB_00a0b474;
    }
    uStack_b0 = uVar14 | uVar13 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
    uVar14 = 0;
    if (iVar6 == 0) goto LAB_00a0b434;
LAB_00a0b474:
    uStack_b0 = 0;
    iVar5 = -1;
                    /* try { // try from 00a0b478 to 00b0b483 has its CatchHandler @ 00a0b554 */
  }
                    /* try { // try from 00a0b484 to 00b0b4df has its CatchHandler @ 00a0b56c */
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
  if (iVar6 == 1) {
    uVar14 = (ulong)local_100;
LAB_00a0b4c0:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
    if (iVar6 == 1) {
                    /* try { // try from 00a0b4e0 to 00b0b5c3 has its CatchHandler @ 00a0b3f8 */
      uVar13 = (ulong)local_100;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
      uVar13 = uVar14;
      if (iVar6 != 0) goto LAB_00a0b500;
    }
    local_a8 = uVar14 | uVar13 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
    uVar14 = 0;
    if (iVar6 == 0) goto LAB_00a0b4c0;
LAB_00a0b500:
    local_a8 = 0;
    iVar5 = -1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
  if (iVar6 == 1) {
    uVar14 = (ulong)local_100;
LAB_00a0b558:
                    /* catch() { ... } // from try @ 00a0b46c with catch @ 00a0b558 */
                    /* catch() { ... } // from try @ 00a0b44c with catch @ 00a0b55c */
                    /* catch() { ... } // from try @ 00a0b484 with catch @ 00a0b56c */
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
    if (iVar6 == 1) {
      uVar13 = (ulong)local_100;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
      uVar13 = uVar14;
      if (iVar6 != 0) goto LAB_00a0b59c;
    }
    uStack_a0 = uVar14 | uVar13 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
    uVar14 = 0;
    if (iVar6 == 0) goto LAB_00a0b558;
LAB_00a0b59c:
    uStack_a0 = 0;
    iVar5 = -1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
                    /* try { // try from 00a0b5c4 to 00b0b617 has its CatchHandler @ 00a0b5c4
                       catch() { ... } // from try @ 00a0b5c4 with catch @ 00a0b5c4
                       catch() { ... } // from try @ 00a0b6ac with catch @ 00a0b5c4 */
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
  if (iVar6 == 1) {
    uVar14 = (ulong)local_100;
LAB_00a0b5f8:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_100,1);
    if (iVar6 == 1) {
                    /* try { // try from 00a0b618 to 00b0b62f has its CatchHandler @ 00a0b728 */
      uVar13 = (ulong)local_100;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
      uVar13 = uVar14;
      if (iVar6 != 0) goto LAB_00a0b63c;
    }
                    /* try { // try from 00a0b644 to 00b0b64f has its CatchHandler @ 00a0b720 */
    local_98 = uVar14 | uVar13 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar1);
    uVar14 = 0;
    if (iVar6 == 0) goto LAB_00a0b5f8;
LAB_00a0b63c:
    local_98 = 0;
    iVar5 = -1;
  }
                    /* try { // try from 00a0b650 to 00b0b6ab has its CatchHandler @ 00a0b738 */
  iVar6 = FUN_00a0ac94(param_1,*(undefined8 *)(param_1 + 0x40),&uStack_90);
  iVar7 = FUN_00a0ac94(param_1,*(undefined8 *)(param_1 + 0x40),&local_100);
  uVar14 = local_b8;
  if (iVar7 != 0 || iVar6 != 0) {
    iVar5 = -1;
  }
  if (param_4 == 0) {
                    /* try { // try from 00a0b804 to 00b0b80f has its CatchHandler @ 00a0b8f0 */
    if (param_6 != 0) goto LAB_00a0b6dc;
LAB_00a0b808:
    lVar10 = uStack_b0 + uVar14;
    uVar14 = local_a8;
                    /* try { // try from 00a0b810 to 00b0b81b has its CatchHandler @ 00a0b8ec */
  }
  else {
    if (iVar5 == 0) {
      uVar13 = param_5;
      if (local_b8 < param_5) {
        *(undefined1 *)(param_4 + local_b8) = 0;
        uVar13 = local_b8;
      }
      iVar5 = 0;
                    /* try { // try from 00a0b6ac to 00b0b78f has its CatchHandler @ 00a0b5c4 */
      if ((param_5 != 0) && (local_b8 != 0)) {
        uVar11 = (**(code **)(param_1 + 8))
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),param_4,
                            uVar13);
        iVar5 = -(uint)(uVar11 != uVar13);
      }
      uVar14 = uVar14 - uVar13;
    }
    if (param_6 == 0) goto LAB_00a0b808;
LAB_00a0b6dc:
    uVar13 = uStack_b0;
    if (iVar5 != 0) goto LAB_00a0b808;
    uVar11 = uStack_b0;
    if (param_7 <= uStack_b0) {
      uVar11 = param_7;
    }
    if (uVar14 == 0) {
      iVar5 = 0;
      uVar4 = 0;
    }
    else {
      lVar10 = (**(code **)(param_1 + 0x20))
                         (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),uVar14,1);
      iVar5 = -(uint)(lVar10 != 0);
      uVar4 = 0;
      if (lVar10 != 0) {
        uVar4 = uVar14;
      }
    }
                    /* catch() { ... } // from try @ 00a0b644 with catch @ 00a0b720 */
                    /* catch() { ... } // from try @ 00a0b638 with catch @ 00a0b724 */
                    /* catch() { ... } // from try @ 00a0b618 with catch @ 00a0b728 */
    if (((param_7 != 0) && (uVar13 != 0)) &&
       (uVar14 = (**(code **)(param_1 + 8))
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),param_6,
                            uVar11), uVar14 != uVar11)) {
      iVar5 = -1;
    }
                    /* catch() { ... } // from try @ 00a0b650 with catch @ 00a0b738 */
    lVar10 = (uVar13 - uVar11) + uVar4;
    uVar14 = local_a8;
  }
                    /* try { // try from 00a0b81c to 00b0b877 has its CatchHandler @ 00a0b904 */
  local_a8 = uVar14;
  if ((param_8 != 0) && (iVar5 == 0)) {
    uVar13 = param_9;
    if (uVar14 < param_9) {
      *(undefined1 *)(param_8 + uVar14) = 0;
      uVar13 = uVar14;
    }
    if (lVar10 == 0) {
      iVar5 = 0;
    }
    else {
      lVar10 = (**(code **)(param_1 + 0x20))
                         (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),lVar10,1);
      iVar5 = -(uint)(lVar10 != 0);
    }
                    /* try { // try from 00a0b790 to 00b0b7e3 has its CatchHandler @ 00a0b790
                       catch() { ... } // from try @ 00a0b790 with catch @ 00a0b790
                       catch() { ... } // from try @ 00a0b878 with catch @ 00a0b790 */
    if (((param_9 != 0) && (uVar14 != 0)) &&
       (uVar14 = (**(code **)(param_1 + 8))
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),param_8,
                            uVar13), uVar14 != uVar13)) {
      iVar5 = -1;
    }
  }
  if ((param_2 != (ulong *)0x0) && (iVar5 == 0)) {
    param_2[1] = uStack_f0;
    *param_2 = local_f8;
    param_2[7] = uStack_c0;
    param_2[6] = local_c8;
    param_2[9] = uStack_b0;
    param_2[8] = local_b8;
    param_2[3] = uStack_e0;
    param_2[2] = local_e8;
    param_2[5] = uStack_d0;
    param_2[4] = local_d8;
    auVar3._8_4_ = uStack_80;
    auVar3._0_8_ = CONCAT44(uStack_84,local_88);
    auVar3._12_4_ = uStack_7c;
                    /* try { // try from 00a0b7e4 to 00b0b7fb has its CatchHandler @ 00a0b8f4 */
    param_2[0x10] = local_78;
    param_2[0xb] = uStack_a0;
    param_2[10] = local_a8;
    param_2[0xd] = uStack_90;
    param_2[0xc] = local_98;
    param_2[0xf] = auVar3._8_8_;
    param_2[0xe] = CONCAT44(uStack_84,local_88);
  }
  if ((param_3 != (undefined8 *)0x0) && (iVar5 == 0)) {
    *param_3 = CONCAT71(uStack_ff,local_100);
  }
LAB_00a0b854:
  if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 00a0b878 to 00b0b95b has its CatchHandler @ 00a0b790 */
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

