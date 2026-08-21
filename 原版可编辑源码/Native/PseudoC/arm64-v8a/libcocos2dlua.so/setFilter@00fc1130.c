
/* cocos2d::ZipFile::setFilter(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::ZipFile::setFilter(ZipFile *this,basic_string *param_1)

{
  size_t __n;
  ulong uVar1;
  basic_string bVar2;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  basic_string *pbVar8;
  undefined8 uVar9;
  basic_string *__s2;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  basic_string *pbVar14;
  ulong uVar15;
  ulong local_250;
  ulong uStack_248;
  basic_string *local_240;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_238 [8];
  ulong local_230;
  void *local_228;
  ulong local_220;
  ulong uStack_218;
  unz_file_info64_s auStack_210 [56];
  undefined8 local_1d8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_180;
  char acStack_174 [260];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  plVar13 = *(long **)(this + 8);
  if (plVar13 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    pvVar7 = (void *)*plVar13;
    uVar9 = 0;
    if (pvVar7 != (void *)0x0) {
      if (plVar13[4] != 0) {
        puVar4 = (void *)plVar13[3];
        while (puVar4 != (void *)0x0) {
          pvVar7 = (void *)*puVar4;
          if ((*(byte *)(puVar4 + 2) & 1) != 0) {
            operator_delete((void *)puVar4[4]);
          }
          operator_delete(puVar4);
          puVar4 = pvVar7;
        }
        lVar10 = plVar13[2];
        plVar13[3] = 0;
        if (lVar10 != 0) {
          lVar11 = 0;
          do {
            *(undefined8 *)(plVar13[1] + lVar11 * 8) = 0;
            lVar11 = lVar11 + 1;
          } while (lVar10 != lVar11);
        }
        plVar13[4] = 0;
        pvVar7 = (void *)**(undefined8 **)(this + 8);
      }
      iVar6 = unzGoToFirstFile64(pvVar7,auStack_210,acStack_174,0x100);
      if (iVar6 == 0) {
        pbVar14 = (basic_string *)((ulong)&local_250 | 1);
        do {
          iVar6 = unzGetFilePos((void *)**(undefined8 **)(this + 8),(unz_file_pos_s *)&local_220);
          if (iVar6 == 0) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_238,acStack_174);
            bVar2 = *param_1;
            uVar15 = *(ulong *)(param_1 + 8);
            uVar12 = (ulong)((byte)bVar2 >> 1);
            if (((byte)bVar2 & 1) != 0) {
              uVar12 = uVar15;
            }
            if (uVar12 == 0) goto LAB_00fc13b8;
            uStack_248 = 0;
            local_240 = (basic_string *)0x0;
            local_250 = 0;
            pvVar7 = (void *)((ulong)local_238 | 1);
            uVar1 = (ulong)((byte)local_238[0] >> 1);
            if (((byte)local_238[0] & 1) != 0) {
              pvVar7 = local_228;
              uVar1 = local_230;
            }
            if (uVar12 <= uVar1) {
              uVar1 = uVar12;
            }
            if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (uVar1 < 0x17) {
              local_250 = (ulong)(byte)((int)uVar1 << 1);
              pbVar8 = pbVar14;
              if (uVar1 != 0) goto LAB_00fc12e0;
            }
            else {
              uVar12 = uVar1 + 0x10 & 0xfffffffffffffff0;
              pbVar8 = operator_new(uVar12);
              local_250 = uVar12 | 1;
              uStack_248 = uVar1;
              local_240 = pbVar8;
LAB_00fc12e0:
              memcpy(pbVar8,pvVar7,uVar1);
            }
            pbVar8[uVar1] = (basic_string)0x0;
            uVar12 = local_250 >> 1 & 0x7f;
            __n = uVar12;
            if ((local_250 & 1) != 0) {
              __n = uStack_248;
            }
            uVar1 = (ulong)((byte)bVar2 >> 1);
            if (((byte)bVar2 & 1) != 0) {
              uVar1 = uVar15;
            }
            bVar5 = false;
            if (__n == uVar1) {
              pbVar8 = pbVar14;
              if ((local_250 & 1) != 0) {
                pbVar8 = local_240;
              }
              __s2 = param_1 + 1;
              if (((byte)bVar2 & 1) != 0) {
                __s2 = *(basic_string **)(param_1 + 0x10);
              }
              if ((local_250 & 1) == 0) {
                pbVar8 = pbVar14;
                if (__n != 0) {
                  do {
                    if (*pbVar8 != *__s2) {
                      bVar5 = false;
                      goto joined_r0x00fc13a8;
                    }
                    uVar12 = uVar12 - 1;
                    pbVar8 = pbVar8 + 1;
                    __s2 = __s2 + 1;
                  } while (uVar12 != 0);
                  bVar5 = true;
                  goto joined_r0x00fc13a8;
                }
              }
              else {
                if (__n != 0) {
                  iVar6 = memcmp(pbVar8,__s2,__n);
                  bVar5 = iVar6 == 0;
                  goto LAB_00fc13ac;
                }
                operator_delete(local_240);
              }
LAB_00fc13b8:
              uVar9 = local_1d8;
              local_180 = local_238;
              uStack_248 = uStack_218;
              local_250 = local_220;
              lVar10 = std::__ndk1::
                       __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>>>
                       ::
                       __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                 ((basic_string *)(*(long *)(this + 8) + 8),
                                  (piecewise_construct_t *)local_238,(tuple *)&DAT_0144b9cb,
                                  (tuple *)&local_180);
              *(undefined8 *)(lVar10 + 0x38) = uVar9;
              *(ulong *)(lVar10 + 0x30) = uStack_248;
              *(ulong *)(lVar10 + 0x28) = local_250;
            }
            else {
joined_r0x00fc13a8:
              if ((local_250 & 1) == 0) {
                if (bVar5) goto LAB_00fc13b8;
              }
              else {
LAB_00fc13ac:
                operator_delete(local_240);
                if (bVar5) goto LAB_00fc13b8;
              }
            }
            if (((byte)local_238[0] & 1) != 0) {
              operator_delete(local_228);
            }
          }
          iVar6 = unzGoToNextFile64((void *)**(undefined8 **)(this + 8),auStack_210,acStack_174,
                                    0x100);
        } while (iVar6 == 0);
      }
      uVar9 = 1;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

