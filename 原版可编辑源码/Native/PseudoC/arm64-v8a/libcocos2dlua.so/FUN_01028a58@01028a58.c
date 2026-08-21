
int FUN_01028a58(zlib_filefunc64_32_def_s *param_1,ulong *param_2,ulong *param_3,long param_4,
                ulong param_5,long param_6,ulong param_7,long param_8,ulong param_9)

{
  ulonglong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  bool bVar4;
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
  ulonglong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ulong local_118;
  long local_110;
  byte local_108 [8];
  ulong local_100;
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
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (param_1 == (zlib_filefunc64_32_def_s *)0x0) {
    iVar5 = -0x66;
    goto LAB_0102951c;
  }
  lVar10 = cocos2d::call_zseek64
                     (param_1,*(void **)(param_1 + 0x60),
                      *(long *)(param_1 + 0x78) + *(long *)(param_1 + 0x88),0);
  if ((lVar10 == 0) &&
     (iVar5 = FUN_0102a978(param_1,*(undefined8 *)(param_1 + 0x60),&local_110), iVar5 == 0)) {
    iVar5 = 0;
    if (local_110 != 0x2014b50) {
      iVar5 = -0x67;
    }
  }
  else {
    iVar5 = -1;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_f8,1);
  if (iVar6 == 1) {
    uVar16 = local_f8 & 0xff;
LAB_01028b2c:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_f8,1);
    if (iVar6 == 1) {
      uVar14 = local_f8 & 0xff;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
      uVar14 = uVar16;
      if (iVar6 != 0) goto LAB_01028b6c;
    }
    local_f8 = uVar16 | uVar14 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
    uVar16 = 0;
    if (iVar6 == 0) goto LAB_01028b2c;
LAB_01028b6c:
    local_f8 = 0;
    iVar5 = -1;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
  if (iVar6 == 1) {
    uVar16 = local_100 & 0xff;
LAB_01028bbc:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
    if (iVar6 == 1) {
      uVar14 = local_100 & 0xff;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
      uVar14 = uVar16;
      if (iVar6 != 0) goto LAB_01028bfc;
    }
    uStack_f0 = uVar16 | uVar14 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
                    /* catch() { ... } // from try @ 01028cb8 with catch @ 01028bb4
                       catch() { ... } // from try @ 01028f20 with catch @ 01028bb4
                       catch() { ... } // from try @ 01029010 with catch @ 01028bb4 */
    uVar16 = 0;
    if (iVar6 == 0) goto LAB_01028bbc;
LAB_01028bfc:
    uStack_f0 = 0;
    iVar5 = -1;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
  if (iVar6 == 1) {
    uVar16 = local_100 & 0xff;
LAB_01028c4c:
                    /* try { // try from 01028c54 to 01128c77 has its CatchHandler @ 01029094 */
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
    if (iVar6 == 1) {
      uVar14 = local_100 & 0xff;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
      uVar14 = uVar16;
      if (iVar6 != 0) goto LAB_01028c8c;
    }
    local_e8 = uVar16 | uVar14 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
    uVar16 = 0;
    if (iVar6 == 0) goto LAB_01028c4c;
LAB_01028c8c:
    local_e8 = 0;
    iVar5 = -1;
  }
                    /* try { // try from 01028c98 to 01128ca3 has its CatchHandler @ 01029040 */
  uVar17 = *(undefined8 *)(param_1 + 0x60);
                    /* try { // try from 01028cb0 to 01128cb7 has its CatchHandler @ 01029014 */
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
                    /* try { // try from 01028cb8 to 01128ebb has its CatchHandler @ 01028bb4 */
  if (iVar6 == 1) {
    uVar16 = local_100 & 0xff;
LAB_01028cdc:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
    if (iVar6 == 1) {
      uVar14 = local_100 & 0xff;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
      uVar14 = uVar16;
      if (iVar6 != 0) goto LAB_01028d1c;
    }
    uStack_e0 = uVar16 | uVar14 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
    uVar16 = 0;
    if (iVar6 == 0) goto LAB_01028cdc;
LAB_01028d1c:
    uStack_e0 = 0;
    iVar5 = -1;
  }
  iVar6 = FUN_0102a978(param_1,*(undefined8 *)(param_1 + 0x60),&local_d8);
  auVar18._8_8_ = 0xffffffffffffffe7;
  auVar18._0_8_ = 0xffffffffffffffeb;
  auVar19._8_8_ = local_d8;
  auVar19._0_8_ = local_d8;
  auVar19 = NEON_ushl(auVar19,auVar18,8);
  uVar16 = CONCAT44(auVar19._8_4_,auVar19._0_4_) & 0x7f0000000f;
  uVar12 = (uint)local_d8;
  uStack_7c = uVar12 >> 0x10 & 0x1f;
  uStack_80 = uVar12 >> 0xb & 0x1f;
  uStack_84 = uVar12 >> 5 & 0x3f;
  local_88 = (uVar12 & 0x1f) << 1;
  local_78 = CONCAT44((int)(uVar16 >> 0x20) + 0x7bc,(int)uVar16 + -1);
  iVar7 = FUN_0102a978(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_d0);
  iVar8 = FUN_0102a978(param_1,*(undefined8 *)(param_1 + 0x60),&local_118);
  local_c8 = local_118;
  iVar9 = FUN_0102a978(param_1,*(undefined8 *)(param_1 + 0x60),&local_118);
  uStack_c0 = local_118;
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  if (((iVar7 != 0 || iVar6 != 0) || iVar8 != 0) || iVar9 != 0) {
    iVar5 = -1;
  }
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
  if (iVar6 == 1) {
    uVar16 = local_100 & 0xff;
LAB_01028e2c:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
    if (iVar6 == 1) {
      uVar14 = local_100 & 0xff;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
      uVar14 = uVar16;
      if (iVar6 != 0) goto LAB_01028e6c;
    }
    local_b8 = uVar16 | uVar14 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
    uVar16 = 0;
    if (iVar6 == 0) goto LAB_01028e2c;
LAB_01028e6c:
    local_b8 = 0;
    iVar5 = -1;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
  if (iVar6 == 1) {
    uVar16 = local_100 & 0xff;
LAB_01028ebc:
                    /* try { // try from 01028ebc to 01128edf has its CatchHandler @ 01029090 */
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
    if (iVar6 == 1) {
      uVar14 = local_100 & 0xff;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
      uVar14 = uVar16;
      if (iVar6 != 0) goto LAB_01028efc;
    }
    uStack_b0 = uVar16 | uVar14 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
    uVar16 = 0;
    if (iVar6 == 0) goto LAB_01028ebc;
LAB_01028efc:
    uStack_b0 = 0;
    iVar5 = -1;
                    /* try { // try from 01028f00 to 01128f0b has its CatchHandler @ 01029018 */
  }
  uVar17 = *(undefined8 *)(param_1 + 0x60);
                    /* try { // try from 01028f18 to 01128f1f has its CatchHandler @ 01029010 */
                    /* try { // try from 01028f20 to 01129007 has its CatchHandler @ 01028bb4 */
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
  if (iVar6 == 1) {
    uVar16 = local_100 & 0xff;
LAB_01028f4c:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
    if (iVar6 == 1) {
      uVar14 = local_100 & 0xff;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
      uVar14 = uVar16;
      if (iVar6 != 0) goto LAB_01028f8c;
    }
    local_a8 = uVar16 | uVar14 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
    uVar16 = 0;
    if (iVar6 == 0) goto LAB_01028f4c;
LAB_01028f8c:
    local_a8 = 0;
    iVar5 = -1;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
  if (iVar6 == 1) {
    uVar16 = local_100 & 0xff;
LAB_01028fdc:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
    if (iVar6 == 1) {
      uVar14 = local_100 & 0xff;
    }
    else {
                    /* try { // try from 01029008 to 0112900b has its CatchHandler @ 01029014 */
                    /* try { // try from 0102900c to 0112900f has its CatchHandler @ 01029010 */
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
                    /* catch() { ... } // from try @ 01028f18 with catch @ 01029010
                       catch() { ... } // from try @ 0102900c with catch @ 01029010
                       try { // try from 01029010 to 011290a7 has its CatchHandler @ 01028bb4 */
                    /* catch() { ... } // from try @ 01028cb0 with catch @ 01029014
                       catch() { ... } // from try @ 01029008 with catch @ 01029014 */
      uVar14 = uVar16;
      if (iVar6 != 0) goto LAB_0102901c;
    }
    uStack_a0 = uVar16 | uVar14 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
    uVar16 = 0;
    if (iVar6 == 0) goto LAB_01028fdc;
LAB_0102901c:
    uStack_a0 = 0;
    iVar5 = -1;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x60);
                    /* catch() { ... } // from try @ 01028c98 with catch @ 01029040 */
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
  if (iVar6 == 1) {
    uVar16 = local_100 & 0xff;
LAB_0102906c:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
    if (iVar6 == 1) {
      uVar14 = local_100 & 0xff;
                    /* catch() { ... } // from try @ 01028ebc with catch @ 01029090 */
    }
    else {
                    /* catch() { ... } // from try @ 01028c54 with catch @ 01029094 */
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
      uVar14 = uVar16;
      if (iVar6 != 0) goto LAB_010290ac;
    }
    local_98 = uVar16 | uVar14 << 8;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
    uVar16 = 0;
    if (iVar6 == 0) goto LAB_0102906c;
LAB_010290ac:
    local_98 = 0;
    iVar5 = -1;
  }
  iVar6 = FUN_0102a978(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_90);
  iVar7 = FUN_0102a978(param_1,*(undefined8 *)(param_1 + 0x60),&local_118);
  uVar16 = local_b8;
  if (iVar7 != 0 || iVar6 != 0) {
    iVar5 = -1;
  }
  local_100 = local_118;
  if ((param_4 != 0) && (iVar5 == 0)) {
    uVar14 = param_5;
    if (local_b8 < param_5) {
      *(undefined1 *)(param_4 + local_b8) = 0;
      uVar14 = local_b8;
    }
    iVar5 = 0;
    if ((param_5 != 0) && (local_b8 != 0)) {
      uVar11 = (**(code **)(param_1 + 8))
                         (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x60),param_4,
                          uVar14);
      iVar5 = -(uint)(uVar11 != uVar14);
    }
    uVar16 = uVar16 - uVar14;
  }
  uVar14 = uStack_b0;
  if ((param_6 == 0) || (iVar5 != 0)) {
    uVar15 = uStack_b0 + uVar16;
  }
  else {
    uVar11 = uStack_b0;
    if (param_7 <= uStack_b0) {
      uVar11 = param_7;
    }
    if (uVar16 == 0) {
      iVar5 = 0;
      uVar15 = 0;
    }
    else {
      lVar10 = cocos2d::call_zseek64(param_1,*(void **)(param_1 + 0x60),uVar16,1);
      iVar5 = -(uint)(lVar10 != 0);
      uVar15 = 0;
      if (lVar10 != 0) {
        uVar15 = uVar16;
      }
    }
    if (((param_7 != 0) && (uVar14 != 0)) &&
       (uVar16 = (**(code **)(param_1 + 8))
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x60),param_6,
                            uVar11), uVar16 != uVar11)) {
      iVar5 = -1;
    }
    uVar15 = (uVar14 - uVar11) + uVar15;
  }
  if (iVar5 == 0) {
    if (uVar14 == 0) {
      iVar5 = 0;
    }
    else {
      uVar1 = uVar15 - uVar14;
      if (uVar1 == 0) {
        iVar5 = 0;
        uVar15 = 0;
      }
      else {
        lVar10 = cocos2d::call_zseek64(param_1,*(void **)(param_1 + 0x60),uVar1,1);
        iVar5 = -(uint)(lVar10 != 0);
        uVar15 = 0;
        if (lVar10 != 0) {
          uVar15 = uVar1;
        }
      }
      if (uStack_b0 != 0) {
        uVar16 = 0;
        do {
          uVar17 = *(undefined8 *)(param_1 + 0x60);
          iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,local_108,1);
          if (iVar6 == 1) {
            uVar14 = (ulong)local_108[0];
LAB_010292c0:
            iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,local_108,1);
            if (iVar6 == 1) {
              uVar11 = (ulong)local_108[0];
            }
            else {
              iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
              uVar11 = uVar14;
              if (iVar6 != 0) goto LAB_01029300;
            }
            uVar14 = uVar14 | uVar11 << 8;
          }
          else {
            iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
            uVar14 = 0;
            if (iVar6 == 0) goto LAB_010292c0;
LAB_01029300:
            uVar14 = 0;
            iVar5 = -1;
          }
          uVar17 = *(undefined8 *)(param_1 + 0x60);
          iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,local_108,1);
          if (iVar6 == 1) {
            uVar11 = (ulong)local_108[0];
LAB_0102934c:
            iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,local_108,1);
            if (iVar6 == 1) {
              uVar13 = (ulong)local_108[0];
            }
            else {
              iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
              uVar13 = uVar11;
              if (iVar6 != 0) goto LAB_0102938c;
            }
            uVar11 = uVar11 | uVar13 << 8;
            if (uVar14 != 1) goto LAB_01029250;
LAB_010293a8:
            if ((uStack_c0 == 0xffffffffffffffff) &&
               (iVar6 = FUN_0102aafc(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_c0), iVar6 != 0
               )) {
              iVar5 = -1;
            }
            if ((local_c8 == 0xffffffffffffffff) &&
               (iVar6 = FUN_0102aafc(param_1,*(undefined8 *)(param_1 + 0x60),&local_c8), iVar6 != 0)
               ) {
              iVar5 = -1;
            }
            if ((local_100 == 0xffffffffffffffff) &&
               (iVar6 = FUN_0102aafc(param_1,*(undefined8 *)(param_1 + 0x60),&local_100), iVar6 != 0
               )) {
              iVar5 = -1;
            }
            if (uStack_a0 == 0xffffffffffffffff) {
              iVar6 = FUN_0102a978(param_1,*(undefined8 *)(param_1 + 0x60),local_108);
              bVar4 = iVar6 == 0;
              goto LAB_01029268;
            }
          }
          else {
            iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
            uVar11 = 0;
            if (iVar6 == 0) goto LAB_0102934c;
LAB_0102938c:
            uVar11 = 0;
            iVar5 = -1;
            if (uVar14 == 1) goto LAB_010293a8;
LAB_01029250:
            lVar10 = cocos2d::call_zseek64(param_1,*(void **)(param_1 + 0x60),uVar11,1);
            bVar4 = lVar10 == 0;
LAB_01029268:
            if (!bVar4) {
              iVar5 = -1;
            }
          }
          uVar16 = uVar16 + uVar11 + 4;
        } while (uVar16 < uStack_b0);
      }
    }
    uVar16 = local_a8;
    if ((param_8 != 0) && (iVar5 == 0)) {
      uVar14 = param_9;
      if (local_a8 < param_9) {
        *(undefined1 *)(param_8 + local_a8) = 0;
        uVar14 = local_a8;
      }
      if (uVar15 == 0) {
        iVar5 = 0;
      }
      else {
        lVar10 = cocos2d::call_zseek64(param_1,*(void **)(param_1 + 0x60),uVar15,1);
        iVar5 = -(uint)(lVar10 != 0);
      }
      if (((param_9 != 0) && (uVar16 != 0)) &&
         (uVar16 = (**(code **)(param_1 + 8))
                             (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x60),
                              param_8,uVar14), uVar16 != uVar14)) {
        iVar5 = -1;
      }
    }
    bVar4 = iVar5 == 0;
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
      param_2[0x10] = local_78;
      bVar4 = true;
      param_2[0xb] = uStack_a0;
      param_2[10] = local_a8;
      param_2[0xd] = uStack_90;
      param_2[0xc] = local_98;
      param_2[0xf] = auVar3._8_8_;
      param_2[0xe] = CONCAT44(uStack_84,local_88);
    }
    if ((param_3 != (ulong *)0x0) && (bVar4)) {
      *param_3 = local_100;
    }
  }
LAB_0102951c:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}

