
/* cocos2d::FileUtils::setSearchResolutionsOrder(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > const&) */

void __thiscall cocos2d::FileUtils::setSearchResolutionsOrder(FileUtils *this,vector *param_1)

{
  size_t __n;
  size_t sVar1;
  byte *pbVar2;
  ulong *puVar3;
  ulong *puVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  byte *__s1;
  byte *__s2;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_00;
  byte *pbVar17;
  void *pvVar18;
  byte *pbVar19;
  void *pvVar20;
  void *pvVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  this_00 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(this + 0x30);
  pbVar17 = *(byte **)this_00;
  pbVar2 = *(byte **)param_1;
  pbVar19 = *(byte **)(this + 0x38);
  pbVar9 = pbVar17;
  if ((long)pbVar19 - (long)pbVar17 == *(long *)(param_1 + 8) - (long)pbVar2) {
    for (; pbVar9 != pbVar19; pbVar9 = pbVar9 + 0x18) {
      bVar5 = *pbVar9;
      bVar6 = *pbVar2;
      __n = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        __n = *(size_t *)(pbVar9 + 8);
      }
      sVar1 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar2 + 8);
      }
      if (__n != sVar1) goto LAB_008739a8;
      __s1 = *(byte **)(pbVar9 + 0x10);
      __s2 = *(byte **)(pbVar2 + 0x10);
      if ((bVar5 & 1) == 0) {
        __s1 = pbVar9 + 1;
      }
      if ((bVar6 & 1) == 0) {
        __s2 = pbVar2 + 1;
      }
      if ((bVar5 & 1) == 0) {
        if (__n != 0) {
          uVar13 = 0;
          do {
            if (pbVar9[uVar13 + 1] != __s2[uVar13]) goto LAB_008739a8;
            uVar13 = uVar13 + 1;
          } while (bVar5 >> 1 != uVar13);
        }
      }
      else if ((__n != 0) && (iVar11 = memcmp(__s1,__s2,__n), iVar11 != 0)) goto LAB_008739a8;
      pbVar2 = pbVar2 + 0x18;
    }
  }
  else {
LAB_008739a8:
    if (*(long *)(this + 0xa8) != 0) {
      puVar8 = *(void **)(this + 0xa0);
      while (puVar8 != (void *)0x0) {
        pvVar20 = (void *)*puVar8;
        if ((*(byte *)(puVar8 + 5) & 1) != 0) {
          operator_delete((void *)puVar8[7]);
        }
        if ((*(byte *)(puVar8 + 2) & 1) != 0) {
          operator_delete((void *)puVar8[4]);
        }
        operator_delete(puVar8);
        puVar8 = pvVar20;
      }
      lVar12 = *(long *)(this + 0x98);
      *(undefined8 *)(this + 0xa0) = 0;
      if (lVar12 != 0) {
        lVar14 = 0;
        do {
          *(undefined8 *)(*(long *)(this + 0x90) + lVar14 * 8) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar12 != lVar14);
      }
      pbVar17 = *(byte **)(this + 0x30);
      *(undefined8 *)(this + 0xa8) = 0;
      pbVar19 = *(byte **)(this + 0x38);
    }
    while (pbVar2 = pbVar19, pbVar2 != pbVar17) {
      pbVar19 = pbVar2 + -0x18;
      if ((*pbVar19 & 1) != 0) {
        operator_delete(*(void **)(pbVar2 + -8));
      }
    }
    *(byte **)(this + 0x38) = pbVar17;
    puVar23 = *(ulong **)param_1;
    puVar4 = *(ulong **)(param_1 + 8);
    if (puVar23 != puVar4) {
      bVar10 = false;
      pvVar20 = (void *)((ulong)&local_80 | 1);
      do {
        uStack_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0;
        if ((*puVar23 & 1) == 0) {
          local_70 = (void *)puVar23[2];
          uStack_78 = puVar23[1];
          local_80 = *puVar23;
          uVar13 = local_80 & 0xff;
          if (bVar10) goto LAB_00873b00;
LAB_00873b7c:
          uVar15 = uVar13 >> 1;
          uVar16 = (uint)uVar13;
          uVar22 = uVar15;
          if ((uVar13 & 1) != 0) {
            uVar22 = uStack_78;
          }
          bVar10 = uVar22 == 0;
        }
        else {
          uVar13 = puVar23[1];
          if (0xffffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          pvVar21 = (void *)puVar23[2];
          if (uVar13 < 0x17) {
            local_80 = (ulong)(byte)((int)uVar13 << 1);
            pvVar18 = pvVar20;
            if (uVar13 != 0) goto LAB_00873b60;
          }
          else {
            uVar22 = uVar13 + 0x10 & 0xfffffffffffffff0;
            pvVar18 = operator_new(uVar22);
            local_80 = uVar22 | 1;
            uStack_78 = uVar13;
            local_70 = pvVar18;
LAB_00873b60:
            memcpy(pvVar18,pvVar21,uVar13);
          }
          *(undefined1 *)((long)pvVar18 + uVar13) = 0;
          uVar13 = local_80 & 0xff;
          if (!bVar10) goto LAB_00873b7c;
LAB_00873b00:
          uVar16 = (uint)uVar13;
          uVar15 = uVar13 >> 1;
          bVar10 = true;
        }
        if ((uVar16 & 1) != 0) {
          uVar15 = uStack_78;
        }
        if (uVar15 != 0) {
          pvVar21 = pvVar20;
          if ((uVar16 & 1) != 0) {
            pvVar21 = local_70;
          }
          if (*(char *)((long)pvVar21 + (uVar15 - 1)) != '/') {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_80,"/",1);
          }
        }
        pvVar21 = local_70;
        uVar13 = uStack_78;
        puVar3 = *(ulong **)(this + 0x38);
        if (puVar3 == *(ulong **)(this + 0x40)) {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    (this_00,(basic_string *)&local_80);
        }
        else {
          puVar3[1] = 0;
          puVar3[2] = 0;
          *puVar3 = 0;
          if ((local_80 & 1) == 0) {
            puVar3[2] = (ulong)local_70;
            puVar3[1] = uStack_78;
            *puVar3 = local_80;
          }
          else {
            if (0xffffffffffffffef < uStack_78) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (uStack_78 < 0x17) {
              pvVar18 = (void *)((long)puVar3 + 1);
              *(char *)puVar3 = (char)((int)uStack_78 << 1);
              if (uStack_78 != 0) goto LAB_00873aac;
            }
            else {
              uVar22 = uStack_78 + 0x10 & 0xfffffffffffffff0;
              pvVar18 = operator_new(uVar22);
              puVar3[1] = uVar13;
              puVar3[2] = (ulong)pvVar18;
              *puVar3 = uVar22 | 1;
LAB_00873aac:
              memcpy(pvVar18,pvVar21,uVar13);
            }
            *(undefined1 *)((long)pvVar18 + uVar13) = 0;
          }
          *(long *)(this + 0x38) = *(long *)(this + 0x38) + 0x18;
        }
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        puVar23 = puVar23 + 3;
      } while (puVar4 != puVar23);
      if (bVar10) goto LAB_00873c90;
      pbVar17 = *(byte **)(this + 0x38);
    }
    uStack_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
    if (pbVar17 < *(byte **)(this + 0x40)) {
      pbVar17[0x10] = 0;
      pbVar17[0x11] = 0;
      pbVar17[0x12] = 0;
      pbVar17[0x13] = 0;
      pbVar17[0x14] = 0;
      pbVar17[0x15] = 0;
      pbVar17[0x16] = 0;
      pbVar17[0x17] = 0;
      pbVar17[8] = 0;
      pbVar17[9] = 0;
      pbVar17[10] = 0;
      pbVar17[0xb] = 0;
      pbVar17[0xc] = 0;
      pbVar17[0xd] = 0;
      pbVar17[0xe] = 0;
      pbVar17[0xf] = 0;
      pbVar17[0] = 0;
      pbVar17[1] = 0;
      pbVar17[2] = 0;
      pbVar17[3] = 0;
      pbVar17[4] = 0;
      pbVar17[5] = 0;
      pbVar17[6] = 0;
      pbVar17[7] = 0;
      uStack_78 = 0;
      local_70 = (void *)0x0;
      local_80 = 0;
      *(long *)(this + 0x38) = *(long *)(this + 0x38) + 0x18;
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                (this_00,(basic_string *)&local_80);
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
    }
  }
LAB_00873c90:
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

