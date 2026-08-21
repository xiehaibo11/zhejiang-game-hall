
undefined8
FUN_015c5c48(uint param_1,ulong param_2,int param_3,long *param_4,
            vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *param_5)

{
  int iVar1;
  byte *pbVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  ushort *puVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 uVar19;
  uint uVar20;
  ushort local_80 [2];
  undefined1 local_7c [4];
  ulong local_78;
  undefined2 local_6c;
  char local_6a;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  uVar19 = 1;
  if ((int)param_1 < param_3) {
    do {
      iVar4 = *(int *)((long)param_4 + 0xc);
      if (iVar4 == 1) {
        lVar12 = *param_4;
        local_80[0] = (ushort)*(byte *)(lVar12 + (int)param_1);
      }
      else {
        lVar12 = *param_4;
        local_80[0] = *(ushort *)(lVar12 + (long)(int)param_1 * 2);
      }
      if (local_80[0] == 0x25) {
        uVar20 = param_1 + 2;
        if ((int)uVar20 < param_3) {
          lVar14 = (long)(int)param_1 + 1;
          if (iVar4 == 1) {
            uVar13 = (uint)*(byte *)(lVar12 + lVar14);
            uVar9 = (uint)*(byte *)(lVar12 + (int)uVar20);
            if (*(byte *)(lVar12 + lVar14) < 0x67) {
LAB_015c5d4c:
              uVar13 = uVar13 - 0x30;
              if ((9 < uVar13) &&
                 (uVar18 = uVar13 | 0x20, uVar13 = uVar18 - 0x27, 5 < uVar18 - 0x31)) {
                uVar13 = 0xffffffff;
              }
              if ((((uVar9 < 0x67) && (uVar13 != 0xffffffff)) &&
                  ((uVar9 = uVar9 - 0x30, uVar9 < 10 ||
                   (((uVar9 | 0x20) - 0x31 < 6 &&
                    (uVar9 = (uVar9 | 0x20) - 0x27, uVar9 != 0xffffffff)))))) &&
                 (uVar9 = uVar9 + uVar13 * 0x10, -1 < (int)uVar9)) {
                param_1 = uVar20;
                if ((uVar9 & 0xffff) < 0x80) {
                  local_78 = CONCAT62(local_78._2_6_,(short)uVar9);
                  if ((((param_2 & 1) == 0) || (uVar13 = (uVar9 & 0xffff) - 0x23, 0x1d < uVar13)) ||
                     ((1 << (ulong)(uVar13 & 0x1f) & 0x3580130bU) == 0)) {
                    if (*(undefined2 **)(param_5 + 8) == *(undefined2 **)(param_5 + 0x10)) {
                      puVar10 = &local_78;
                      goto LAB_015c605c;
                    }
                    **(undefined2 **)(param_5 + 8) = (short)uVar9;
                  }
                  else {
                    local_6c = 0x25;
                    if (*(undefined2 **)(param_5 + 8) < *(undefined2 **)(param_5 + 0x10)) {
                      **(undefined2 **)(param_5 + 8) = 0x25;
                      *(long *)(param_5 + 8) = *(long *)(param_5 + 8) + 2;
                    }
                    else {
                      std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
                      __push_back_slow_path<unsigned_short>(param_5,&local_6c);
                    }
                    if (*(int *)((long)param_4 + 0xc) == 1) {
                      local_6c = (ushort)*(byte *)(*param_4 + lVar14);
                      local_7c._0_2_ = ZEXT12(*(byte *)(*param_4 + (long)(int)uVar20));
                    }
                    else {
                      local_6c = *(ushort *)(*param_4 + (long)(int)lVar14 * 2);
                      local_7c._0_2_ = *(ushort *)(*param_4 + (long)(int)uVar20 * 2);
                    }
                    if (*(ushort **)(param_5 + 8) == *(ushort **)(param_5 + 0x10)) {
                      std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
                      __push_back_slow_path<unsigned_short_const&>(param_5,&local_6c);
                      puVar11 = *(ushort **)(param_5 + 8);
                    }
                    else {
                      **(ushort **)(param_5 + 8) = local_6c;
                      puVar11 = (ushort *)(*(long *)(param_5 + 8) + 2);
                      *(ushort **)(param_5 + 8) = puVar11;
                    }
                    if (puVar11 == *(ushort **)(param_5 + 0x10)) {
                      puVar10 = (ulong *)local_7c;
LAB_015c605c:
                      std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
                      __push_back_slow_path<unsigned_short_const&>(param_5,(ushort *)puVar10);
                      goto LAB_015c5cd4;
                    }
                    *puVar11 = local_7c._0_2_;
                  }
                  lVar12 = *(long *)(param_5 + 8);
                }
                else {
                  local_6c = CONCAT11(local_6c._1_1_,(char)uVar9);
                  if ((uVar9 >> 6 & 1) == 0) {
                    uVar20 = 1;
                  }
                  else {
                    lVar16 = (long)(int)uVar20;
                    lVar14 = 0;
                    lVar15 = 0;
                    uVar17 = -(ulong)(uVar20 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar20 << 1;
                    do {
                      if ((2 < (uint)lVar14) || ((long)param_3 <= lVar16 + lVar15 + 3))
                      goto LAB_015c615c;
                      if (iVar4 == 1) {
                        if (*(char *)(lVar12 + lVar16 + lVar15 + 1) != '%') goto LAB_015c615c;
                      }
                      else if (*(short *)(lVar12 + uVar17 + lVar15 * 2 + 2) != 0x25)
                      goto LAB_015c615c;
                      if (iVar4 == 1) {
                        pbVar2 = (byte *)(lVar12 + lVar16 + 2 + lVar15);
                        bVar5 = *pbVar2;
                        uVar13 = (uint)bVar5;
                        uVar18 = (uint)pbVar2[1];
                        if (0x66 < bVar5) goto LAB_015c615c;
                      }
                      else {
                        lVar3 = lVar12 + uVar17 + lVar15 * 2;
                        uVar6 = *(ushort *)(lVar3 + 4);
                        uVar13 = (uint)uVar6;
                        uVar18 = (uint)*(ushort *)(lVar3 + 6);
                        if (0x66 < uVar6) goto LAB_015c615c;
                      }
                      uVar13 = uVar13 - 0x30;
                      if ((9 < uVar13) &&
                         (uVar7 = uVar13 | 0x20, uVar13 = uVar7 - 0x27, 5 < uVar7 - 0x31)) {
                        uVar13 = 0xffffffff;
                      }
                      if ((((0x66 < uVar18) || (uVar13 == 0xffffffff)) ||
                          ((uVar18 = uVar18 - 0x30, 9 < uVar18 &&
                           ((5 < (uVar18 | 0x20) - 0x31 ||
                            (uVar18 = (uVar18 | 0x20) - 0x27, uVar18 == 0xffffffff)))))) ||
                         (iVar1 = uVar18 + uVar13 * 0x10, iVar1 < 0)) goto LAB_015c615c;
                      *(char *)(((ulong)&local_6c | 1) + lVar14) = (char)iVar1;
                      lVar14 = lVar14 + 1;
                      lVar15 = lVar15 + 3;
                    } while ((((uVar9 & 0xffff) << (ulong)((uint)lVar14 & 0x1f)) >> 6 & 1) != 0);
                    param_1 = uVar20 + (int)lVar15;
                    uVar20 = (uint)lVar14 + 1;
                  }
                  local_78 = 0;
                  if ((char)uVar9 < '\0') {
                    uVar9 = unibrow::Utf8::CalculateValue
                                      ((uchar *)&local_6c,(ulong)uVar20,&local_78);
                    if (uVar9 == 0xfffd) {
                      if ((((uVar20 != 3) || ((uchar)local_6c != 0xef)) || (local_6c._1_1_ != -0x41)
                          ) || (local_6a != -0x43)) goto LAB_015c615c;
                      uVar9 = 0xfffd;
                    }
                    else if (0xffff < (int)uVar9) {
                      local_7c._0_2_ = (ushort)(uVar9 + 0xf0000 >> 10) & 0x3ff | 0xd800;
                      if (*(ushort **)(param_5 + 8) < *(ushort **)(param_5 + 0x10)) {
                        **(ushort **)(param_5 + 8) = local_7c._0_2_;
                        puVar11 = (ushort *)(*(long *)(param_5 + 8) + 2);
                        *(ushort **)(param_5 + 8) = puVar11;
                      }
                      else {
                        std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
                        __push_back_slow_path<unsigned_short>(param_5,(ushort *)local_7c);
                        puVar11 = *(ushort **)(param_5 + 8);
                      }
                      local_7c._0_2_ = (ushort)uVar9 & 0x3ff | 0xdc00;
                      if (puVar11 < *(ushort **)(param_5 + 0x10)) {
                        *puVar11 = local_7c._0_2_;
                        *(long *)(param_5 + 8) = *(long *)(param_5 + 8) + 2;
                      }
                      else {
                        std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
                        __push_back_slow_path<unsigned_short>(param_5,(ushort *)local_7c);
                      }
                      goto LAB_015c5cd4;
                    }
                  }
                  else {
                    uVar9 = uVar9 & 0xff;
                    local_78 = 1;
                  }
                  local_7c._0_2_ = (undefined2)uVar9;
                  if (*(ushort **)(param_5 + 0x10) <= *(ushort **)(param_5 + 8)) {
                    std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
                    __push_back_slow_path<unsigned_short>(param_5,(ushort *)local_7c);
                    goto LAB_015c5cd4;
                  }
                  **(ushort **)(param_5 + 8) = local_7c._0_2_;
                  lVar12 = *(long *)(param_5 + 8);
                  uVar20 = param_1;
                }
                *(long *)(param_5 + 8) = lVar12 + 2;
                param_1 = uVar20;
                goto LAB_015c5cd4;
              }
            }
          }
          else {
            uVar6 = *(ushort *)(lVar12 + lVar14 * 2);
            uVar13 = (uint)uVar6;
            uVar9 = (uint)*(ushort *)(lVar12 + (long)(int)uVar20 * 2);
            if (uVar6 < 0x67) goto LAB_015c5d4c;
          }
        }
LAB_015c615c:
        uVar19 = 0;
        goto LAB_015c6160;
      }
      if (*(ushort **)(param_5 + 8) == *(ushort **)(param_5 + 0x10)) {
        std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
        __push_back_slow_path<unsigned_short_const&>(param_5,local_80);
      }
      else {
        **(ushort **)(param_5 + 8) = local_80[0];
        *(long *)(param_5 + 8) = *(long *)(param_5 + 8) + 2;
      }
LAB_015c5cd4:
      param_1 = param_1 + 1;
    } while ((int)param_1 < param_3);
    uVar19 = 1;
  }
LAB_015c6160:
  if (*(long *)(lVar8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar19;
}

