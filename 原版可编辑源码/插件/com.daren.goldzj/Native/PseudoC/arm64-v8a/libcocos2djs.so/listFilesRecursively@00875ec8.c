
/* cocos2d::FileUtils::listFilesRecursively(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >*) const */

void __thiscall
cocos2d::FileUtils::listFilesRecursively(FileUtils *this,basic_string *param_1,vector *param_2)

{
  ulong *puVar1;
  long lVar2;
  size_t __n;
  int iVar3;
  ulong uVar4;
  size_t sVar5;
  undefined4 *puVar6;
  void *pvVar7;
  void *pvVar8;
  ulong local_2278;
  size_t sStack_2270;
  void *local_2268;
  ulong local_2260;
  ulong uStack_2258;
  void *local_2250;
  byte local_2240;
  undefined7 uStack_223f;
  ulong uStack_2238;
  void *local_2230;
  char acStack_2228 [4096];
  char local_1228;
  int local_1120;
  undefined1 auStack_1098 [4096];
  int local_98;
  undefined8 local_90;
  void *local_88;
  DIR *local_80;
  dirent *local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  (**(code **)(*(long *)this + 0x40))(&local_2240);
  uVar4 = (**(code **)(*(long *)this + 0x110))(this,&local_2240);
  pvVar8 = local_2230;
  if ((uVar4 & 1) == 0) goto LAB_008762d8;
  local_2260 = 0;
  uStack_2258 = 0;
  local_2250 = (void *)0x0;
  if ((local_2240 & 1) == 0) {
    local_2260 = CONCAT71(uStack_223f,local_2240);
    local_2250 = local_2230;
    uStack_2258 = uStack_2238;
  }
  else {
    if (0xffffffffffffffef < uStack_2238) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_2238 < 0x17) {
      pvVar7 = (void *)((ulong)&local_2260 | 1);
      local_2260 = (ulong)(byte)((int)uStack_2238 << 1);
      if (uStack_2238 != 0) goto LAB_00875f9c;
    }
    else {
      uVar4 = uStack_2238 + 0x10 & 0xfffffffffffffff0;
      pvVar7 = operator_new(uVar4);
      local_2260 = uVar4 | 1;
      uStack_2258 = uStack_2238;
      local_2250 = pvVar7;
LAB_00875f9c:
      memcpy(pvVar7,pvVar8,uStack_2238);
    }
    *(undefined1 *)((long)pvVar7 + uStack_2238) = 0;
  }
  pvVar8 = (void *)((ulong)&local_2260 | 1);
  if ((local_2260 & 1) != 0) {
    pvVar8 = local_2250;
  }
  iVar3 = FUN_00875c60(auStack_1098,pvVar8);
  if (iVar3 != -1) {
LAB_00875ffc:
    do {
      if ((local_98 == 0) || (iVar3 = FUN_00875d98(auStack_1098,acStack_2228), iVar3 == -1)) break;
      local_2278 = 0;
      sStack_2270 = 0;
      local_2268 = (void *)0x0;
      sVar5 = strlen(acStack_2228);
      if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar5 < 0x17) {
        local_2278 = CONCAT71(local_2278._1_7_,(char)((int)sVar5 << 1));
        pvVar8 = (void *)((ulong)&local_2278 | 1);
        if (sVar5 != 0) goto LAB_00876074;
      }
      else {
        uVar4 = sVar5 + 0x10 & 0xfffffffffffffff0;
        pvVar8 = operator_new(uVar4);
        local_2278 = uVar4 | 1;
        sStack_2270 = sVar5;
        local_2268 = pvVar8;
LAB_00876074:
        memcpy(pvVar8,acStack_2228,sVar5);
      }
      pvVar7 = local_2268;
      __n = sStack_2270;
      *(undefined1 *)((long)pvVar8 + sVar5) = 0;
      if (local_1228 != '.') {
        if (local_1120 != 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_2278,"/",1);
          pvVar8 = local_2268;
          sVar5 = sStack_2270;
          puVar1 = *(ulong **)(param_2 + 8);
          if (puVar1 == *(ulong **)(param_2 + 0x10)) {
            std::__ndk1::
            vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            ::
            __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                      ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                        *)param_2,(basic_string *)&local_2278);
          }
          else {
            puVar1[1] = 0;
            puVar1[2] = 0;
            *puVar1 = 0;
            if ((local_2278 & 1) == 0) {
              puVar1[2] = (ulong)local_2268;
              puVar1[1] = sStack_2270;
              *puVar1 = local_2278;
            }
            else {
              if (0xffffffffffffffef < sStack_2270) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              if (sStack_2270 < 0x17) {
                pvVar7 = (void *)((long)puVar1 + 1);
                *(char *)puVar1 = (char)((int)sStack_2270 << 1);
                if (sStack_2270 != 0) goto LAB_008761a0;
              }
              else {
                uVar4 = sStack_2270 + 0x10 & 0xfffffffffffffff0;
                pvVar7 = operator_new(uVar4);
                puVar1[1] = sVar5;
                puVar1[2] = (ulong)pvVar7;
                *puVar1 = uVar4 | 1;
LAB_008761a0:
                memcpy(pvVar7,pvVar8,sVar5);
              }
              *(undefined1 *)((long)pvVar7 + sVar5) = 0;
            }
            *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x18;
          }
          (**(code **)(*(long *)this + 0x120))(this,&local_2278,param_2);
          goto LAB_008761d8;
        }
        puVar1 = *(ulong **)(param_2 + 8);
        if (puVar1 == *(ulong **)(param_2 + 0x10)) {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)param_2,(basic_string *)&local_2278);
          goto LAB_008761d8;
        }
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        if ((local_2278 & 1) == 0) {
          puVar1[2] = (ulong)local_2268;
          puVar1[1] = sStack_2270;
          *puVar1 = local_2278;
        }
        else {
          if (0xffffffffffffffef < sStack_2270) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (sStack_2270 < 0x17) {
            pvVar8 = (void *)((long)puVar1 + 1);
            *(char *)puVar1 = (char)((int)sStack_2270 << 1);
            if (sStack_2270 != 0) goto LAB_00876234;
          }
          else {
            uVar4 = sStack_2270 + 0x10 & 0xfffffffffffffff0;
            pvVar8 = operator_new(uVar4);
            puVar1[1] = __n;
            puVar1[2] = (ulong)pvVar8;
            *puVar1 = uVar4 | 1;
LAB_00876234:
            memcpy(pvVar8,pvVar7,__n);
          }
          *(undefined1 *)((long)pvVar8 + __n) = 0;
        }
        *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x18;
        if (local_98 == 0) goto LAB_0087625c;
LAB_008761e0:
        local_78 = readdir(local_80);
        iVar3 = 0;
        if (local_78 == (dirent *)0x0) {
          local_98 = 0;
          goto joined_r0x00876270;
        }
        if ((local_2278 & 1) != 0) goto LAB_00876274;
LAB_008761fc:
        if (iVar3 != 0) break;
        goto LAB_00875ffc;
      }
LAB_008761d8:
      if (local_98 != 0) goto LAB_008761e0;
LAB_0087625c:
      puVar6 = (undefined4 *)__errno();
      iVar3 = 3;
      *puVar6 = 2;
joined_r0x00876270:
      if ((local_2278 & 1) == 0) goto LAB_008761fc;
LAB_00876274:
      operator_delete(local_2268);
    } while (iVar3 == 0);
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
LAB_008762d8:
  if ((local_2240 & 1) != 0) {
    operator_delete(local_2230);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

