
int FUN_009190b0(zlib_filefunc64_32_def_s *param_1,ulong *param_2,ulong *param_3,long param_4,
                ulong param_5,long param_6,ulong param_7,long param_8,ulong param_9)

{
  ulonglong uVar1;
  ulonglong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte local_118 [8];
  ulong local_110;
  long local_108;
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
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (param_1 == (zlib_filefunc64_32_def_s *)0x0) {
    iVar6 = -0x66;
    goto LAB_00919b78;
  }
  lVar11 = cocos2d::call_zseek64
                     (param_1,*(void **)(param_1 + 0x60),
                      *(long *)(param_1 + 0x78) + *(long *)(param_1 + 0x88),0);
  if ((lVar11 == 0) &&
     (iVar6 = FUN_0091aff8(param_1,*(undefined8 *)(param_1 + 0x60),&local_108), iVar6 == 0)) {
    iVar6 = 0;
    if (local_108 != 0x2014b50) {
      iVar6 = -0x67;
    }
  }
  else {
    iVar6 = -1;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_f8,1);
  if (iVar7 == 1) {
    uVar16 = local_f8 & 0xff;
LAB_00919184:
    iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_f8,1);
    if (iVar7 == 1) {
      uVar15 = local_f8 & 0xff;
    }
    else {
      iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
      uVar15 = uVar16;
      if (iVar7 != 0) goto LAB_009191c4;
    }
    local_f8 = uVar16 | uVar15 << 8;
  }
  else {
    iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
    uVar16 = 0;
    if (iVar7 == 0) goto LAB_00919184;
LAB_009191c4:
    local_f8 = 0;
    iVar6 = -1;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
  if (iVar7 == 1) {
    uVar16 = local_100 & 0xff;
LAB_00919214:
    iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
    if (iVar7 == 1) {
      uVar15 = local_100 & 0xff;
    }
    else {
      iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
      uVar15 = uVar16;
      if (iVar7 != 0) goto LAB_00919254;
    }
    uStack_f0 = uVar16 | uVar15 << 8;
  }
  else {
    iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
    uVar16 = 0;
    if (iVar7 == 0) goto LAB_00919214;
LAB_00919254:
    uStack_f0 = 0;
    iVar6 = -1;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
  if (iVar7 == 1) {
    uVar16 = local_100 & 0xff;
LAB_009192a4:
    iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
    if (iVar7 == 1) {
      uVar15 = local_100 & 0xff;
    }
    else {
      iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
      uVar15 = uVar16;
      if (iVar7 != 0) goto LAB_009192e4;
    }
    local_e8 = uVar16 | uVar15 << 8;
  }
  else {
    iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
    uVar16 = 0;
    if (iVar7 == 0) goto LAB_009192a4;
LAB_009192e4:
    local_e8 = 0;
    iVar6 = -1;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
  if (iVar7 == 1) {
    uVar16 = local_100 & 0xff;
LAB_00919334:
    iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
    if (iVar7 == 1) {
      uVar15 = local_100 & 0xff;
    }
    else {
      iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
      uVar15 = uVar16;
      if (iVar7 != 0) goto LAB_00919374;
    }
    uStack_e0 = uVar16 | uVar15 << 8;
  }
  else {
    iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
    uVar16 = 0;
    if (iVar7 == 0) goto LAB_00919334;
LAB_00919374:
    uStack_e0 = 0;
    iVar6 = -1;
  }
  iVar7 = FUN_0091aff8(param_1,*(undefined8 *)(param_1 + 0x60),&local_d8);
  auVar18._8_8_ = 0xffffffffffffffe7;
  auVar18._0_8_ = 0xffffffffffffffeb;
  auVar19._8_8_ = local_d8;
  auVar19._0_8_ = local_d8;
  auVar19 = NEON_ushl(auVar19,auVar18,8);
  uVar16 = CONCAT44(auVar19._8_4_,auVar19._0_4_) & 0x7f0000000f;
  uVar13 = (uint)local_d8;
  uStack_7c = uVar13 >> 0x10 & 0x1f;
  uStack_80 = uVar13 >> 0xb & 0x1f;
  local_78 = CONCAT44((int)(uVar16 >> 0x20) + 0x7bc,(int)uVar16 + -1);
  uStack_84 = uVar13 >> 5 & 0x3f;
  local_88 = (uVar13 & 0x1f) << 1;
  iVar8 = FUN_0091aff8(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_d0);
  iVar9 = FUN_0091aff8(param_1,*(undefined8 *)(param_1 + 0x60),&local_110);
  local_c8 = local_110;
  iVar10 = FUN_0091aff8(param_1,*(undefined8 *)(param_1 + 0x60),&local_110);
  uStack_c0 = local_110;
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  if (((iVar8 != 0 || iVar7 != 0) || iVar9 != 0) || iVar10 != 0) {
    iVar6 = -1;
  }
  iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
  if (iVar7 == 1) {
    uVar16 = local_100 & 0xff;
LAB_00919488:
    iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
    if (iVar7 == 1) {
      uVar15 = local_100 & 0xff;
    }
    else {
      iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
      uVar15 = uVar16;
      if (iVar7 != 0) goto LAB_009194c8;
    }
    local_b8 = uVar16 | uVar15 << 8;
  }
  else {
    iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
    uVar16 = 0;
    if (iVar7 == 0) goto LAB_00919488;
LAB_009194c8:
    local_b8 = 0;
    iVar6 = -1;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
  if (iVar7 == 1) {
    uVar16 = local_100 & 0xff;
LAB_00919518:
    iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
    if (iVar7 == 1) {
      uVar15 = local_100 & 0xff;
    }
    else {
      iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
      uVar15 = uVar16;
      if (iVar7 != 0) goto LAB_00919558;
    }
    uStack_b0 = uVar16 | uVar15 << 8;
  }
  else {
    iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
    uVar16 = 0;
    if (iVar7 == 0) goto LAB_00919518;
LAB_00919558:
    uStack_b0 = 0;
    iVar6 = -1;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
  if (iVar7 == 1) {
    uVar16 = local_100 & 0xff;
LAB_009195a8:
    iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
    if (iVar7 == 1) {
      uVar15 = local_100 & 0xff;
    }
    else {
      iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
      uVar15 = uVar16;
      if (iVar7 != 0) goto LAB_009195e8;
    }
    local_a8 = uVar16 | uVar15 << 8;
  }
  else {
    iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
    uVar16 = 0;
    if (iVar7 == 0) goto LAB_009195a8;
LAB_009195e8:
    local_a8 = 0;
    iVar6 = -1;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
  if (iVar7 == 1) {
    uVar16 = local_100 & 0xff;
LAB_00919638:
    iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
    if (iVar7 == 1) {
      uVar15 = local_100 & 0xff;
    }
    else {
      iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
      uVar15 = uVar16;
      if (iVar7 != 0) goto LAB_00919678;
    }
    uStack_a0 = uVar16 | uVar15 << 8;
  }
  else {
    iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
    uVar16 = 0;
    if (iVar7 == 0) goto LAB_00919638;
LAB_00919678:
    uStack_a0 = 0;
    iVar6 = -1;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
  if (iVar7 == 1) {
    uVar16 = local_100 & 0xff;
LAB_009196c8:
    iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,&local_100,1);
    if (iVar7 == 1) {
      uVar15 = local_100 & 0xff;
    }
    else {
      iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
      uVar15 = uVar16;
      if (iVar7 != 0) goto LAB_00919708;
    }
    local_98 = uVar16 | uVar15 << 8;
  }
  else {
    iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
    uVar16 = 0;
    if (iVar7 == 0) goto LAB_009196c8;
LAB_00919708:
    local_98 = 0;
    iVar6 = -1;
  }
  iVar7 = FUN_0091aff8(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_90);
  iVar8 = FUN_0091aff8(param_1,*(undefined8 *)(param_1 + 0x60),&local_110);
  uVar16 = local_b8;
  if (iVar8 != 0 || iVar7 != 0) {
    iVar6 = -1;
  }
  local_100 = local_110;
  if ((param_4 != 0) && (iVar6 == 0)) {
    uVar15 = param_5;
    if (local_b8 < param_5) {
      *(undefined1 *)(param_4 + local_b8) = 0;
      uVar15 = local_b8;
    }
    iVar6 = 0;
    if ((param_5 != 0) && (local_b8 != 0)) {
      uVar12 = (**(code **)(param_1 + 8))
                         (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x60),param_4,
                          uVar15);
      iVar6 = -(uint)(uVar12 != uVar15);
    }
    uVar16 = uVar16 - uVar15;
  }
  uVar15 = uStack_b0;
  if ((param_6 == 0) || (iVar6 != 0)) {
    uVar1 = uStack_b0 + uVar16;
  }
  else {
    uVar12 = uStack_b0;
    if (param_7 <= uStack_b0) {
      uVar12 = param_7;
    }
    if (uVar16 == 0) {
      iVar6 = 0;
      uVar1 = 0;
    }
    else {
      lVar11 = cocos2d::call_zseek64(param_1,*(void **)(param_1 + 0x60),uVar16,1);
      iVar6 = -(uint)(lVar11 != 0);
      uVar1 = 0;
      if (lVar11 != 0) {
        uVar1 = uVar16;
      }
    }
    if (((param_7 != 0) && (uVar15 != 0)) &&
       (uVar16 = (**(code **)(param_1 + 8))
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x60),param_6,
                            uVar12), uVar16 != uVar12)) {
      iVar6 = -1;
    }
    uVar1 = (uVar15 - uVar12) + uVar1;
  }
  if (iVar6 == 0) {
    if (uVar15 == 0) {
      iVar6 = 0;
      uVar16 = local_a8;
    }
    else {
      uVar2 = uVar1 - uVar15;
      if (uVar2 == 0) {
        iVar6 = 0;
        uVar1 = 0;
      }
      else {
        lVar11 = cocos2d::call_zseek64(param_1,*(void **)(param_1 + 0x60),uVar2,1);
        iVar6 = -(uint)(lVar11 != 0);
        uVar1 = 0;
        if (lVar11 != 0) {
          uVar1 = uVar2;
        }
      }
      uVar16 = local_a8;
      if (uStack_b0 != 0) {
        uVar15 = 0;
        do {
          uVar17 = *(undefined8 *)(param_1 + 0x60);
          iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,local_118,1);
          if (iVar7 == 1) {
            uVar16 = (ulong)local_118[0];
LAB_0091995c:
            iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,local_118,1);
            if (iVar7 == 1) {
              uVar12 = (ulong)local_118[0];
            }
            else {
              iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
              uVar12 = uVar16;
              if (iVar7 != 0) goto LAB_0091999c;
            }
            uVar16 = uVar16 | uVar12 << 8;
          }
          else {
            iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
            uVar16 = 0;
            if (iVar7 == 0) goto LAB_0091995c;
LAB_0091999c:
            uVar16 = 0;
            iVar6 = -1;
          }
          uVar17 = *(undefined8 *)(param_1 + 0x60);
          iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,local_118,1);
          if (iVar7 == 1) {
            uVar12 = (ulong)local_118[0];
LAB_009199e8:
            iVar7 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar17,local_118,1);
            if (iVar7 == 1) {
              uVar14 = (ulong)local_118[0];
            }
            else {
              iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
              uVar14 = uVar12;
              if (iVar7 != 0) goto LAB_00919a28;
            }
            uVar12 = uVar12 | uVar14 << 8;
            if (uVar16 != 1) goto LAB_00919ad0;
LAB_00919a34:
            if ((uStack_c0 == 0xffffffffffffffff) &&
               (iVar7 = FUN_0091b17c(param_1,*(undefined8 *)(param_1 + 0x60),&uStack_c0), iVar7 != 0
               )) {
              iVar6 = -1;
            }
            if ((local_c8 == 0xffffffffffffffff) &&
               (iVar7 = FUN_0091b17c(param_1,*(undefined8 *)(param_1 + 0x60),&local_c8), iVar7 != 0)
               ) {
              iVar6 = -1;
            }
            if ((local_100 == 0xffffffffffffffff) &&
               (iVar7 = FUN_0091b17c(param_1,*(undefined8 *)(param_1 + 0x60),&local_100), iVar7 != 0
               )) {
              iVar6 = -1;
            }
            if (uStack_a0 == 0xffffffffffffffff) {
              iVar7 = FUN_0091aff8(param_1,*(undefined8 *)(param_1 + 0x60),local_118);
              bVar5 = iVar7 == 0;
              goto LAB_00919ae8;
            }
          }
          else {
            iVar7 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar17);
            uVar12 = 0;
            if (iVar7 == 0) goto LAB_009199e8;
LAB_00919a28:
            uVar12 = 0;
            iVar6 = -1;
            if (uVar16 == 1) goto LAB_00919a34;
LAB_00919ad0:
            lVar11 = cocos2d::call_zseek64(param_1,*(void **)(param_1 + 0x60),uVar12,1);
            bVar5 = lVar11 == 0;
LAB_00919ae8:
            if (!bVar5) {
              iVar6 = -1;
            }
          }
          uVar15 = uVar15 + uVar12 + 4;
          uVar16 = local_a8;
        } while (uVar15 < uStack_b0);
      }
    }
    local_a8 = uVar16;
    if ((param_8 != 0) && (iVar6 == 0)) {
      uVar15 = param_9;
      if (uVar16 < param_9) {
        *(undefined1 *)(param_8 + uVar16) = 0;
        uVar15 = uVar16;
      }
      if (uVar1 == 0) {
        iVar6 = 0;
      }
      else {
        lVar11 = cocos2d::call_zseek64(param_1,*(void **)(param_1 + 0x60),uVar1,1);
        iVar6 = -(uint)(lVar11 != 0);
      }
      if (((param_9 != 0) && (uVar16 != 0)) &&
         (uVar16 = (**(code **)(param_1 + 8))
                             (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x60),
                              param_8,uVar15), uVar16 != uVar15)) {
        iVar6 = -1;
      }
    }
    bVar5 = iVar6 == 0;
    if ((param_2 != (ulong *)0x0) && (iVar6 == 0)) {
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
      auVar4._8_4_ = uStack_80;
      auVar4._0_8_ = CONCAT44(uStack_84,local_88);
      auVar4._12_4_ = uStack_7c;
      param_2[0x10] = local_78;
      bVar5 = true;
      param_2[0xb] = uStack_a0;
      param_2[10] = local_a8;
      param_2[0xd] = uStack_90;
      param_2[0xc] = local_98;
      param_2[0xf] = auVar4._8_8_;
      param_2[0xe] = CONCAT44(uStack_84,local_88);
    }
    if ((param_3 != (ulong *)0x0) && (bVar5)) {
      *param_3 = local_100;
    }
  }
LAB_00919b78:
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

