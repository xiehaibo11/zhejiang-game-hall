
/* cocos2d::ZipFile::setFilter(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::ZipFile::setFilter(ZipFile *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  size_t __n;
  void *pvVar7;
  basic_string *pbVar8;
  undefined8 uVar9;
  long lVar10;
  basic_string *pbVar11;
  long lVar12;
  ulong uVar13;
  basic_string *pbVar14;
  undefined8 *puVar15;
  void *pvVar16;
  ulong uVar17;
  ulong local_250;
  ulong uStack_248;
  basic_string *local_240;
  ulong local_238;
  ulong local_230;
  void *local_228;
  ulong local_220;
  ulong uStack_218;
  unz_file_info64_s auStack_210 [56];
  undefined8 local_1d8;
  tuple atStack_188 [8];
  ulong *local_180;
  char acStack_174 [260];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if ((*(long **)(this + 8) == (long *)0x0) || (**(long **)(this + 8) == 0)) {
    uVar9 = 0;
  }
  else {
    std::__ndk1::mutex::lock((mutex *)(this + 0x10));
    puVar15 = *(undefined8 **)(this + 8);
    if (puVar15[4] != 0) {
      puVar4 = (void *)puVar15[3];
      while (puVar4 != (void *)0x0) {
        pvVar16 = (void *)*puVar4;
        if ((*(byte *)(puVar4 + 2) & 1) != 0) {
          operator_delete((void *)puVar4[4]);
        }
        operator_delete(puVar4);
        puVar4 = pvVar16;
      }
      lVar10 = puVar15[2];
      puVar15[3] = 0;
      if (lVar10 != 0) {
        lVar12 = 0;
        do {
          *(undefined8 *)(puVar15[1] + lVar12 * 8) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar10 != lVar12);
      }
      puVar15[4] = 0;
      puVar15 = *(undefined8 **)(this + 8);
    }
    iVar6 = unzGoToFirstFile64((void *)*puVar15,auStack_210,acStack_174,0x100);
    if (iVar6 == 0) {
      pvVar16 = (void *)((ulong)&local_238 | 1);
      pbVar11 = (basic_string *)((ulong)&local_250 | 1);
      do {
        iVar6 = unzGetFilePos((void *)**(undefined8 **)(this + 8),(unz_file_pos_s *)&local_220);
        if (iVar6 == 0) {
          local_238 = 0;
          local_230 = 0;
          local_228 = (void *)0x0;
          __n = strlen(acStack_174);
          if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (__n < 0x17) {
            local_238 = CONCAT71(local_238._1_7_,(char)((int)__n << 1));
            pvVar7 = pvVar16;
            if (__n != 0) goto LAB_00888f50;
          }
          else {
            uVar17 = __n + 0x10 & 0xfffffffffffffff0;
            pvVar7 = operator_new(uVar17);
            local_238 = uVar17 | 1;
            local_230 = __n;
            local_228 = pvVar7;
LAB_00888f50:
            memcpy(pvVar7,acStack_174,__n);
          }
          *(undefined1 *)((long)pvVar7 + __n) = 0;
          bVar2 = *param_1;
          uVar17 = (ulong)((byte)bVar2 >> 1);
          if (((byte)bVar2 & 1) != 0) {
            uVar17 = *(ulong *)(param_1 + 8);
          }
          if (uVar17 == 0) {
LAB_00889098:
            uVar9 = local_1d8;
            local_180 = &local_238;
            uStack_248 = uStack_218;
            local_250 = local_220;
            lVar10 = std::__ndk1::
                     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>>>
                     ::
                     __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                               ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>>>
                                 *)(*(long *)(this + 8) + 8),(basic_string *)&local_238,
                                (piecewise_construct_t *)&DAT_01854581,(tuple *)&local_180,
                                atStack_188);
            *(undefined8 *)(lVar10 + 0x38) = uVar9;
            *(ulong *)(lVar10 + 0x30) = uStack_248;
            *(ulong *)(lVar10 + 0x28) = local_250;
          }
          else {
            local_250 = 0;
            uStack_248 = 0;
            local_240 = (basic_string *)0x0;
            pvVar7 = pvVar16;
            uVar1 = local_238 >> 1 & 0x7f;
            if ((local_238 & 1) != 0) {
              pvVar7 = local_228;
              uVar1 = local_230;
            }
            if (uVar17 <= uVar1) {
              uVar1 = uVar17;
            }
            if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (uVar1 < 0x17) {
              local_250 = (ulong)(byte)((int)uVar1 << 1);
              pbVar8 = pbVar11;
              if (uVar1 != 0) goto LAB_00888fec;
            }
            else {
              uVar13 = uVar1 + 0x10 & 0xfffffffffffffff0;
              pbVar8 = operator_new(uVar13);
              local_250 = uVar13 | 1;
              uStack_248 = uVar1;
              local_240 = pbVar8;
LAB_00888fec:
              memcpy(pbVar8,pvVar7,uVar1);
            }
            pbVar8[uVar1] = (basic_string)0x0;
            bVar5 = false;
            uVar13 = local_250 >> 1 & 0x7f;
            uVar1 = uVar13;
            if ((local_250 & 1) != 0) {
              uVar1 = uStack_248;
            }
            if (uVar1 == uVar17) {
              pbVar8 = param_1 + 1;
              if (((byte)bVar2 & 1) != 0) {
                pbVar8 = *(basic_string **)(param_1 + 0x10);
              }
              if ((local_250 & 1) == 0) {
                lVar10 = -uVar13;
                pbVar14 = pbVar11;
                do {
                  if (*pbVar14 != *pbVar8) {
                    bVar5 = false;
                    goto joined_r0x00889088;
                  }
                  pbVar14 = pbVar14 + 1;
                  lVar10 = lVar10 + 1;
                  pbVar8 = pbVar8 + 1;
                } while (lVar10 != 0);
                bVar5 = true;
                goto joined_r0x00889088;
              }
              iVar6 = memcmp(local_240,pbVar8,uVar17);
              bVar5 = iVar6 == 0;
LAB_0088908c:
              operator_delete(local_240);
              if (bVar5) goto LAB_00889098;
            }
            else {
joined_r0x00889088:
              if ((local_250 & 1) != 0) goto LAB_0088908c;
              if (bVar5) goto LAB_00889098;
            }
          }
          if ((local_238 & 1) != 0) {
            operator_delete(local_228);
          }
        }
        iVar6 = unzGoToNextFile64((void *)**(undefined8 **)(this + 8),auStack_210,acStack_174,0x100)
        ;
      } while (iVar6 == 0);
    }
    std::__ndk1::mutex::unlock((mutex *)(this + 0x10));
    uVar9 = 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

