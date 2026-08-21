
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
  basic_string *pbVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  undefined8 *puVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  byte *__s1;
  byte *__s2;
  byte *pbVar15;
  void *pvVar16;
  byte *pbVar17;
  basic_string *pbVar18;
  void *__dest;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_00;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  std::__ndk1::recursive_mutex::lock((recursive_mutex *)(this + 8));
  this_00 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(this + 0x58);
  pbVar15 = *(byte **)this_00;
  pbVar2 = *(byte **)param_1;
  pbVar17 = *(byte **)(this + 0x60);
  if ((long)pbVar17 - (long)pbVar15 == *(long *)(param_1 + 8) - (long)pbVar2) {
    for (; pbVar15 != pbVar17; pbVar15 = pbVar15 + 0x18) {
      bVar5 = *pbVar15;
      bVar6 = *pbVar2;
      __n = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        __n = *(size_t *)(pbVar15 + 8);
      }
      sVar1 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar2 + 8);
      }
      if (__n != sVar1) goto LAB_00f6b28c;
      __s1 = *(byte **)(pbVar15 + 0x10);
      __s2 = *(byte **)(pbVar2 + 0x10);
      if ((bVar5 & 1) == 0) {
        __s1 = pbVar15 + 1;
      }
      if ((bVar6 & 1) == 0) {
        __s2 = pbVar2 + 1;
      }
      if ((bVar5 & 1) == 0) {
        if (__n != 0) {
          uVar12 = 0;
          do {
            if (pbVar15[uVar12 + 1] != __s2[uVar12]) goto LAB_00f6b28c;
            uVar12 = uVar12 + 1;
          } while (bVar5 >> 1 != uVar12);
        }
      }
      else if ((__n != 0) && (iVar10 = memcmp(__s1,__s2,__n), iVar10 != 0)) goto LAB_00f6b28c;
      pbVar2 = pbVar2 + 0x18;
    }
  }
  else {
LAB_00f6b28c:
    if (*(long *)(this + 0xd0) != 0) {
      puVar8 = *(void **)(this + 200);
      while (puVar8 != (void *)0x0) {
        pvVar16 = (void *)*puVar8;
        if ((*(byte *)(puVar8 + 5) & 1) != 0) {
          operator_delete((void *)puVar8[7]);
        }
        if ((*(byte *)(puVar8 + 2) & 1) != 0) {
          operator_delete((void *)puVar8[4]);
        }
        operator_delete(puVar8);
        puVar8 = pvVar16;
      }
      lVar11 = *(long *)(this + 0xc0);
      *(undefined8 *)(this + 200) = 0;
      if (lVar11 != 0) {
        lVar13 = 0;
        do {
          *(undefined8 *)(*(long *)(this + 0xb8) + lVar13 * 8) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar11 != lVar13);
      }
      *(undefined8 *)(this + 0xd0) = 0;
    }
    if (*(long *)(this + 0xf8) != 0) {
      puVar8 = *(void **)(this + 0xf0);
      while (puVar8 != (void *)0x0) {
        pvVar16 = (void *)*puVar8;
        if ((*(byte *)(puVar8 + 5) & 1) != 0) {
          operator_delete((void *)puVar8[7]);
        }
        if ((*(byte *)(puVar8 + 2) & 1) != 0) {
          operator_delete((void *)puVar8[4]);
        }
        operator_delete(puVar8);
        puVar8 = pvVar16;
      }
      lVar11 = *(long *)(this + 0xe8);
      *(undefined8 *)(this + 0xf0) = 0;
      if (lVar11 != 0) {
        lVar13 = 0;
        do {
          *(undefined8 *)(*(long *)(this + 0xe0) + lVar13 * 8) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar11 != lVar13);
      }
      *(undefined8 *)(this + 0xf8) = 0;
    }
    pbVar15 = *(byte **)(this + 0x58);
    pbVar2 = *(byte **)(this + 0x60);
    if (pbVar2 != pbVar15) {
      bVar5 = pbVar2[-0x18];
      pbVar17 = pbVar2 + -0x18;
      while( true ) {
        if ((bVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        if (pbVar15 == pbVar17) break;
        bVar5 = pbVar17[-0x18];
        pbVar2 = pbVar17;
        pbVar17 = pbVar17 + -0x18;
      }
    }
    *(byte **)(this + 0x60) = pbVar15;
    pbVar18 = *(basic_string **)param_1;
    pbVar4 = *(basic_string **)(param_1 + 8);
    if (pbVar18 != pbVar4) {
      bVar9 = false;
      do {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_80,pbVar18);
        if (bVar9) {
          uVar14 = (ulong)((byte)local_80._0_1_ >> 1);
          bVar9 = true;
        }
        else {
          uVar14 = (ulong)((byte)local_80._0_1_ >> 1);
          uVar12 = uVar14;
          if ((local_80 & 1) != 0) {
            uVar12 = uStack_78;
          }
          bVar9 = uVar12 == 0;
        }
        if ((local_80 & 1) != 0) {
          uVar14 = uStack_78;
        }
        if (uVar14 != 0) {
          pvVar16 = (void *)((ulong)&local_80 | 1);
          if ((local_80 & 1) != 0) {
            pvVar16 = local_70;
          }
          if (*(char *)((long)pvVar16 + (uVar14 - 1)) != '/') {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_80,"/",1);
          }
        }
        pvVar16 = local_70;
        uVar12 = uStack_78;
        puVar3 = *(ulong **)(this + 0x60);
        if (puVar3 == *(ulong **)(this + 0x68)) {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    (this_00,(basic_string *)&local_80);
        }
        else {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
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
              __dest = (void *)((long)puVar3 + 1);
              *(char *)puVar3 = (char)((int)uStack_78 << 1);
              if (uStack_78 != 0) goto LAB_00f6b50c;
            }
            else {
              uVar14 = uStack_78 + 0x10 & 0xfffffffffffffff0;
              __dest = operator_new(uVar14);
              puVar3[1] = uVar12;
              puVar3[2] = (ulong)__dest;
              *puVar3 = uVar14 | 1;
LAB_00f6b50c:
              memcpy(__dest,pvVar16,uVar12);
            }
            *(undefined1 *)((long)__dest + uVar12) = 0;
          }
          *(ulong **)(this + 0x60) = puVar3 + 3;
        }
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        pbVar18 = pbVar18 + 0x18;
      } while (pbVar4 != pbVar18);
      if (bVar9) goto LAB_00f6b59c;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_80,"");
    puVar3 = *(ulong **)(this + 0x60);
    if (puVar3 < *(ulong **)(this + 0x68)) {
      puVar3[2] = (ulong)local_70;
      puVar3[1] = uStack_78;
      *puVar3 = local_80;
      uStack_78 = 0;
      local_70 = (void *)0x0;
      local_80 = 0;
      *(ulong **)(this + 0x60) = puVar3 + 3;
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
LAB_00f6b59c:
  std::__ndk1::recursive_mutex::unlock((recursive_mutex *)(this + 8));
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

