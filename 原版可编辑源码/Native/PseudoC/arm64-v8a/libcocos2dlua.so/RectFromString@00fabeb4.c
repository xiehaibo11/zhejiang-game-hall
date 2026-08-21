
/* cocos2d::RectFromString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::RectFromString(cocos2d *this,basic_string *param_1)

{
  undefined1 *puVar1;
  size_t __n;
  size_t sVar2;
  long lVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  void *pvVar8;
  ulong uVar9;
  byte *pbVar10;
  Rect *in_x8;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  uint uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  byte bVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  Rect aRStack_120 [16];
  byte *local_110;
  byte *local_108;
  undefined8 uStack_100;
  byte *local_f8;
  byte *local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  ulong local_d8;
  void *local_d0;
  ulong local_c8;
  ulong uStack_c0;
  undefined1 *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  undefined1 *local_a0;
  long local_90;
  
  lVar3 = tpidr_el0;
  local_90 = *(long *)(lVar3 + 0x28);
  Rect::Rect(in_x8,(Rect *)Rect::ZERO);
  uVar9 = (ulong)((byte)*this >> 1);
  if (((byte)*this & 1) != 0) {
    uVar9 = *(ulong *)(this + 8);
  }
  if (uVar9 == 0) goto LAB_00fac3bc;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b0,(basic_string *)this);
  uVar9 = local_b0;
  puVar19 = (undefined1 *)((ulong)&local_b0 | 1);
  bVar20 = (byte)local_b0._0_1_ & 1;
  puVar1 = puVar19;
  sVar2 = (ulong)((byte)local_b0._0_1_ >> 1);
  if ((local_b0 & 1) != 0) {
    puVar1 = local_a0;
    sVar2 = uStack_a8;
  }
  if (sVar2 != 0) {
    pvVar8 = memchr(puVar1,0x7b,sVar2);
    uVar11 = (long)pvVar8 - (long)puVar1;
    if (pvVar8 == (void *)0x0) {
      uVar11 = 0xffffffffffffffff;
    }
    pvVar8 = memchr(puVar1,0x7d,sVar2);
    if ((pvVar8 != (void *)0x0) && (lVar12 = (long)pvVar8 - (long)puVar1, lVar12 != -1)) {
      uVar17 = 1;
      do {
        uVar14 = lVar12 + 1;
        __n = sVar2 - uVar14;
        if (sVar2 < uVar14 || __n == 0) goto LAB_00fac3b0;
        if (__n == 0) {
          pvVar8 = (void *)0x0;
        }
        else {
          pvVar8 = memchr(puVar1 + uVar14,0x7d,__n);
        }
        lVar12 = (long)pvVar8 - (long)puVar1;
        if (pvVar8 == (void *)0x0) {
          lVar12 = -1;
        }
      } while ((uVar17 < 2) && (uVar17 = uVar17 + 1, lVar12 != -1));
      if ((uVar11 != 0xffffffffffffffff) && (lVar12 != -1)) {
        uStack_c0 = 0;
        local_b8 = (undefined1 *)0x0;
        local_c8 = 0;
        if (sVar2 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        uVar14 = sVar2 - (uVar11 + 1);
        if (lVar12 + ~uVar11 <= uVar14) {
          uVar14 = lVar12 + ~uVar11;
        }
        if (0xffffffffffffffef < uVar14) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (uVar14 < 0x17) {
          puVar16 = (undefined1 *)((ulong)&local_c8 | 1);
          local_c8 = (ulong)(byte)((int)uVar14 << 1);
          if (uVar14 != 0) goto LAB_00fac050;
        }
        else {
          uVar18 = uVar14 + 0x10 & 0xfffffffffffffff0;
          puVar16 = operator_new(uVar18);
          local_c8 = uVar18 | 1;
          uStack_c0 = uVar14;
          local_b8 = puVar16;
LAB_00fac050:
          memcpy(puVar16,puVar1 + uVar11 + 1,uVar14);
        }
        puVar16[uVar14] = 0;
        if ((uVar9 & 1) != 0) {
          *local_a0 = 0;
          uStack_a8 = 0;
          if ((local_b0 & 1) != 0) {
            operator_delete(local_a0);
          }
        }
        uVar18 = uStack_c0;
        uStack_a8 = uStack_c0;
        local_b0 = local_c8;
        uVar13 = local_b0;
        local_b0._0_1_ = SUB81(local_c8,0);
        local_a0 = local_b8;
        bVar4 = (byte)local_b0._0_1_ >> 1;
        uVar11 = local_c8 & 1;
        uVar14 = local_c8 & 1;
        bVar20 = (byte)local_b0._0_1_ & 1;
        puVar1 = puVar19;
        uVar9 = (ulong)bVar4;
        if ((local_c8 & 1) != 0) {
          puVar1 = local_b8;
          uVar9 = uStack_c0;
        }
        local_b0 = uVar13;
        if (uVar9 != 0) {
          pvVar8 = memchr(puVar1,0x7d,uVar9);
          uVar13 = (long)pvVar8 - (long)puVar1;
          if ((uVar13 != 0xffffffffffffffff) && (pvVar8 != (void *)0x0)) {
            sVar2 = uVar9 - uVar13;
            if ((uVar13 <= uVar9 && sVar2 != 0) &&
               (((sVar2 != 0 && (pvVar8 = memchr(pvVar8,0x2c,sVar2), pvVar8 != (void *)0x0)) &&
                (uVar13 = (long)pvVar8 - (long)puVar1, uVar13 != 0xffffffffffffffff)))) {
              if (uVar13 <= uVar9) {
                uVar9 = uVar13;
              }
              uStack_c0 = 0;
              local_b8 = (undefined1 *)0x0;
              local_c8 = 0;
              if (0xffffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              if (uVar9 < 0x17) {
                puVar16 = (undefined1 *)((ulong)&local_c8 | 1);
                local_c8 = (ulong)(byte)((int)uVar9 << 1);
                if (uVar9 != 0) goto LAB_00fac160;
              }
              else {
                uVar15 = uVar9 + 0x10 & 0xfffffffffffffff0;
                puVar16 = operator_new(uVar15);
                local_c8 = uVar15 | 1;
                uStack_c0 = uVar9;
                local_b8 = puVar16;
LAB_00fac160:
                memcpy(puVar16,puVar1,uVar9);
              }
              uVar15 = (ulong)bVar4;
              if (uVar11 != 0) {
                uVar15 = uVar18;
              }
              uVar11 = uVar15 - uVar13;
              puVar16[uVar9] = 0;
              local_d8 = 0;
              local_d0 = (void *)0x0;
              local_e0 = 0;
              if (uVar15 < uVar13 || uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
              }
              uVar15 = uVar15 - (uVar13 + 1);
              if (uVar14 != 0) {
                puVar19 = local_a0;
              }
              if (uVar11 <= uVar15) {
                uVar15 = uVar11;
              }
              if (0xffffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              if (uVar15 < 0x17) {
                pvVar8 = (void *)((ulong)&local_e0 | 1);
                local_e0 = (ulong)(byte)((int)uVar15 << 1);
                if (uVar15 != 0) goto LAB_00fac1f0;
              }
              else {
                uVar9 = uVar15 + 0x10 & 0xfffffffffffffff0;
                pvVar8 = operator_new(uVar9);
                local_e0 = uVar9 | 1;
                local_d8 = uVar15;
                local_d0 = pvVar8;
LAB_00fac1f0:
                memcpy(pvVar8,puVar19 + uVar13 + 1,uVar15);
              }
              *(undefined1 *)((long)pvVar8 + uVar15) = 0;
              local_f0 = (byte *)0x0;
              uStack_e8 = 0;
              local_f8 = (byte *)0x0;
              uVar9 = FUN_00fac564(&local_c8,&local_f8);
              if ((uVar9 & 1) != 0) {
                local_108 = (byte *)0x0;
                uStack_100 = 0;
                local_110 = (byte *)0x0;
                uVar9 = FUN_00fac564(&local_e0,&local_110);
                if ((uVar9 & 1) != 0) {
                  if ((*local_f8 & 1) == 0) {
                    pbVar10 = local_f8 + 1;
                  }
                  else {
                    pbVar10 = *(byte **)(local_f8 + 0x10);
                  }
                  dVar21 = (double)utils::atof((char *)pbVar10);
                  if ((local_f8[0x18] & 1) == 0) {
                    pbVar10 = local_f8 + 0x19;
                  }
                  else {
                    pbVar10 = *(byte **)(local_f8 + 0x28);
                  }
                  dVar22 = (double)utils::atof((char *)pbVar10);
                  if ((*local_110 & 1) == 0) {
                    pbVar10 = local_110 + 1;
                  }
                  else {
                    pbVar10 = *(byte **)(local_110 + 0x10);
                  }
                  dVar23 = (double)utils::atof((char *)pbVar10);
                  if ((local_110[0x18] & 1) == 0) {
                    pbVar10 = local_110 + 0x19;
                  }
                  else {
                    pbVar10 = *(byte **)(local_110 + 0x28);
                  }
                  dVar24 = (double)utils::atof((char *)pbVar10);
                  Rect::Rect(aRStack_120,(float)dVar21,(float)dVar22,(float)dVar23,(float)dVar24);
                  Rect::operator=(in_x8,aRStack_120);
                }
                pbVar10 = local_110;
                if (local_110 != (byte *)0x0) {
                  if (local_108 != local_110) {
                    bVar20 = local_108[-0x18];
                    pbVar7 = local_108 + -0x18;
                    pbVar6 = local_108;
                    while( true ) {
                      pbVar5 = pbVar7;
                      if ((bVar20 & 1) != 0) {
                        operator_delete(*(void **)(pbVar6 + -8));
                      }
                      if (pbVar10 == pbVar5) break;
                      bVar20 = pbVar5[-0x18];
                      pbVar7 = pbVar5 + -0x18;
                      pbVar6 = pbVar5;
                    }
                  }
                  local_108 = pbVar10;
                  operator_delete(local_110);
                }
              }
              pbVar10 = local_f8;
              if (local_f8 != (byte *)0x0) {
                if (local_f0 != local_f8) {
                  bVar20 = local_f0[-0x18];
                  pbVar7 = local_f0 + -0x18;
                  pbVar6 = local_f0;
                  while( true ) {
                    pbVar5 = pbVar7;
                    if ((bVar20 & 1) != 0) {
                      operator_delete(*(void **)(pbVar6 + -8));
                    }
                    if (pbVar10 == pbVar5) break;
                    bVar20 = pbVar5[-0x18];
                    pbVar7 = pbVar5 + -0x18;
                    pbVar6 = pbVar5;
                  }
                }
                local_f0 = pbVar10;
                operator_delete(local_f8);
              }
              if ((local_e0 & 1) != 0) {
                operator_delete(local_d0);
              }
              if ((local_c8 & 1) != 0) {
                operator_delete(local_b8);
              }
              bVar20 = (byte)local_b0._0_1_ & 1;
            }
          }
        }
      }
    }
  }
LAB_00fac3b0:
  if (bVar20 != 0) {
    operator_delete(local_a0);
  }
LAB_00fac3bc:
  if (*(long *)(lVar3 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

