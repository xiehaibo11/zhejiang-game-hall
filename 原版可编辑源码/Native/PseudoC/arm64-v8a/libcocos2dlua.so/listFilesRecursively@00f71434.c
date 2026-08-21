
/* cocos2d::FileUtils::listFilesRecursively(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >*) const */

void __thiscall
cocos2d::FileUtils::listFilesRecursively(FileUtils *this,basic_string *param_1,vector *param_2)

{
  void *pvVar1;
  short *psVar2;
  ulong *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  int iVar8;
  void *pvVar9;
  ulong uVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_2290;
  undefined7 uStack_228f;
  ulong uStack_2288;
  void *local_2280;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_2278 [8];
  ulong local_2270;
  short *local_2268;
  ulong local_2260;
  ulong uStack_2258;
  void *local_2250;
  byte local_2240;
  undefined7 uStack_223f;
  ulong uStack_2238;
  void *local_2230;
  char acStack_2228 [4096];
  char acStack_1228 [264];
  int local_1120;
  undefined1 auStack_1098 [4096];
  int local_98;
  undefined8 local_90;
  void *local_88;
  DIR *local_80;
  dirent *local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  (**(code **)(*(long *)this + 0x208))(&local_2240);
  uVar6 = (**(code **)(*(long *)this + 0x148))(this,&local_2240);
  pvVar1 = local_2230;
  if ((uVar6 & 1) == 0) goto LAB_00f71870;
  uStack_2258 = 0;
  local_2250 = (void *)0x0;
  local_2260 = 0;
  if ((local_2240 & 1) == 0) {
    local_2260 = CONCAT71(uStack_223f,local_2240);
    uStack_2258 = uStack_2238;
    local_2250 = local_2230;
  }
  else {
    if (0xffffffffffffffef < uStack_2238) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_2238 < 0x17) {
      pvVar9 = (void *)((ulong)&local_2260 | 1);
      local_2260 = (ulong)(byte)((int)uStack_2238 << 1);
      if (uStack_2238 != 0) goto LAB_00f71508;
    }
    else {
      uVar6 = uStack_2238 + 0x10 & 0xfffffffffffffff0;
      pvVar9 = operator_new(uVar6);
      local_2260 = uVar6 | 1;
      uStack_2258 = uStack_2238;
      local_2250 = pvVar9;
LAB_00f71508:
      memcpy(pvVar9,pvVar1,uStack_2238);
    }
    *(undefined1 *)((long)pvVar9 + uStack_2238) = 0;
  }
  pvVar1 = (void *)((ulong)&local_2260 | 1);
  if ((local_2260 & 1) != 0) {
    pvVar1 = local_2250;
  }
  iVar5 = FUN_00f71180(auStack_1098,pvVar1);
  if (iVar5 != -1) {
    if (local_98 != 0) {
      while (iVar5 = FUN_00f712dc(auStack_1098,acStack_2228), iVar5 != -1) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_2278,acStack_1228);
        uVar6 = (ulong)((byte)local_2278[0] >> 1);
        if (((byte)local_2278[0] & 1) != 0) {
          uVar6 = local_2270;
        }
        if (uVar6 == 2) {
          psVar2 = (short *)((ulong)local_2278 | 1);
          if (((byte)local_2278[0] & 1) != 0) {
            psVar2 = local_2268;
          }
          if (*psVar2 != 0x2e2e) goto LAB_00f715fc;
        }
        else {
          if (uVar6 == 1) {
            psVar2 = (short *)((ulong)local_2278 | 1);
            if (((byte)local_2278[0] & 1) != 0) {
              psVar2 = local_2268;
            }
            if ((char)*psVar2 == '.') goto LAB_00f7176c;
          }
LAB_00f715fc:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(&local_2290,acStack_2228);
          pvVar1 = local_2280;
          uVar6 = uStack_2288;
          if (local_1120 == 0) {
            puVar3 = *(ulong **)(param_2 + 8);
            if (puVar3 == *(ulong **)(param_2 + 0x10)) {
              std::__ndk1::
              vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ::
              __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                        ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                          *)param_2,(basic_string *)&local_2290);
            }
            else {
              *puVar3 = 0;
              puVar3[1] = 0;
              puVar3[2] = 0;
              if (((byte)local_2290 & 1) == 0) {
                puVar3[2] = (ulong)local_2280;
                puVar3[1] = uStack_2288;
                *puVar3 = CONCAT71(uStack_228f,local_2290);
              }
              else {
                if (0xffffffffffffffef < uStack_2288) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (uStack_2288 < 0x17) {
                  pvVar9 = (void *)((long)puVar3 + 1);
                  *(char *)puVar3 = (char)((int)uStack_2288 << 1);
                  if (uStack_2288 != 0) goto LAB_00f717e8;
                }
                else {
                  uVar10 = uStack_2288 + 0x10 & 0xfffffffffffffff0;
                  pvVar9 = operator_new(uVar10);
                  puVar3[1] = uVar6;
                  puVar3[2] = (ulong)pvVar9;
                  *puVar3 = uVar10 | 1;
LAB_00f717e8:
                  memcpy(pvVar9,pvVar1,uVar6);
                }
                *(undefined1 *)((long)pvVar9 + uVar6) = 0;
              }
              *(ulong **)(param_2 + 8) = puVar3 + 3;
            }
          }
          else {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      (&local_2290,"/",1);
            pvVar1 = local_2280;
            uVar6 = uStack_2288;
            puVar3 = *(ulong **)(param_2 + 8);
            if (puVar3 == *(ulong **)(param_2 + 0x10)) {
              std::__ndk1::
              vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ::
              __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                        ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                          *)param_2,(basic_string *)&local_2290);
            }
            else {
              *puVar3 = 0;
              puVar3[1] = 0;
              puVar3[2] = 0;
              if (((byte)local_2290 & 1) == 0) {
                puVar3[2] = (ulong)local_2280;
                puVar3[1] = uStack_2288;
                *puVar3 = CONCAT71(uStack_228f,local_2290);
              }
              else {
                if (0xffffffffffffffef < uStack_2288) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (uStack_2288 < 0x17) {
                  pvVar9 = (void *)((long)puVar3 + 1);
                  *(char *)puVar3 = (char)((int)uStack_2288 << 1);
                  if (uStack_2288 != 0) goto LAB_00f7171c;
                }
                else {
                  uVar10 = uStack_2288 + 0x10 & 0xfffffffffffffff0;
                  pvVar9 = operator_new(uVar10);
                  puVar3[1] = uVar6;
                  puVar3[2] = (ulong)pvVar9;
                  *puVar3 = uVar10 | 1;
LAB_00f7171c:
                  memcpy(pvVar9,pvVar1,uVar6);
                }
                *(undefined1 *)((long)pvVar9 + uVar6) = 0;
              }
              *(ulong **)(param_2 + 8) = puVar3 + 3;
            }
            (**(code **)(*(long *)this + 0x1c8))(this,&local_2290,param_2);
          }
          if (((byte)local_2290 & 1) != 0) {
            operator_delete(local_2280);
          }
        }
LAB_00f7176c:
        if (local_98 == 0) {
          puVar7 = (undefined4 *)__errno();
          iVar8 = 3;
          iVar5 = 3;
          *puVar7 = 2;
        }
        else {
          local_78 = readdir(local_80);
          iVar8 = 0;
          iVar5 = 0;
          if (local_78 == (dirent *)0x0) {
            local_98 = 0;
          }
        }
        if (((byte)local_2278[0] & 1) != 0) {
          operator_delete(local_2268);
          iVar5 = iVar8;
        }
        if ((iVar5 != 0) || (local_98 == 0)) break;
      }
    }
  }
  local_90 = 0;
  memset(auStack_1098,0,0x1004);
  free(local_88);
  local_88 = (void *)0x0;
  if (local_80 != (DIR *)0x0) {
    closedir(local_80);
  }
  local_80 = (DIR *)0x0;
  local_78 = (dirent *)0x0;
  if ((local_2260 & 1) != 0) {
    operator_delete(local_2250);
  }
LAB_00f71870:
  if ((local_2240 & 1) != 0) {
    operator_delete(local_2230);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

