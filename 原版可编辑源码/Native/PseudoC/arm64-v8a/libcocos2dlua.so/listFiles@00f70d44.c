
/* cocos2d::FileUtils::listFiles(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void __thiscall cocos2d::FileUtils::listFiles(FileUtils *this,basic_string *param_1)

{
  void *pvVar1;
  ulong *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *in_x8;
  int iVar7;
  void *pvVar8;
  ulong uVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_2278;
  undefined7 uStack_2277;
  ulong uStack_2270;
  void *local_2268;
  ulong local_2260;
  ulong uStack_2258;
  void *local_2250;
  byte local_2240;
  undefined7 uStack_223f;
  ulong uStack_2238;
  void *local_2230;
  char acStack_2228 [4360];
  int local_1120;
  undefined1 auStack_1098 [4096];
  int local_98;
  undefined8 local_90;
  void *local_88;
  DIR *local_80;
  dirent *local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  (**(code **)(*(long *)this + 0x208))(&local_2240);
  uVar5 = (ulong)(local_2240 >> 1);
  if ((local_2240 & 1) != 0) {
    uVar5 = uStack_2238;
  }
  if ((uVar5 == 0) ||
     (uVar5 = (**(code **)(*(long *)this + 0x148))(this,&local_2240), pvVar1 = local_2230,
     (uVar5 & 1) == 0)) goto LAB_00f71030;
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
      pvVar8 = (void *)((ulong)&local_2260 | 1);
      local_2260 = (ulong)(byte)((int)uStack_2238 << 1);
      if (uStack_2238 != 0) goto LAB_00f70e38;
    }
    else {
      uVar5 = uStack_2238 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = operator_new(uVar5);
      local_2260 = uVar5 | 1;
      uStack_2258 = uStack_2238;
      local_2250 = pvVar8;
LAB_00f70e38:
      memcpy(pvVar8,pvVar1,uStack_2238);
    }
    *(undefined1 *)((long)pvVar8 + uStack_2238) = 0;
  }
  pvVar1 = (void *)((ulong)&local_2260 | 1);
  if ((local_2260 & 1) != 0) {
    pvVar1 = local_2250;
  }
  iVar4 = FUN_00f71180(auStack_1098,pvVar1);
  if ((iVar4 != -1) && (local_98 != 0)) {
    while (iVar4 = FUN_00f712dc(auStack_1098,acStack_2228), iVar4 != -1) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_2278,acStack_2228);
      if (local_1120 != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(&local_2278,"/",1);
      }
      pvVar1 = local_2268;
      uVar5 = uStack_2270;
      puVar2 = *(ulong **)(in_x8 + 8);
      if (puVar2 == *(ulong **)(in_x8 + 0x10)) {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                  (in_x8,(basic_string *)&local_2278);
        if (local_98 != 0) goto LAB_00f70f1c;
LAB_00f70fbc:
        puVar6 = (undefined4 *)__errno();
        iVar7 = 3;
        iVar4 = 3;
        *puVar6 = 2;
      }
      else {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        if (((byte)local_2278 & 1) == 0) {
          puVar2[2] = (ulong)local_2268;
          puVar2[1] = uStack_2270;
          *puVar2 = CONCAT71(uStack_2277,local_2278);
        }
        else {
          if (0xffffffffffffffef < uStack_2270) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uStack_2270 < 0x17) {
            pvVar8 = (void *)((long)puVar2 + 1);
            *(char *)puVar2 = (char)((int)uStack_2270 << 1);
            if (uStack_2270 != 0) goto LAB_00f70f98;
          }
          else {
            uVar9 = uStack_2270 + 0x10 & 0xfffffffffffffff0;
            pvVar8 = operator_new(uVar9);
            puVar2[1] = uVar5;
            puVar2[2] = (ulong)pvVar8;
            *puVar2 = uVar9 | 1;
LAB_00f70f98:
            memcpy(pvVar8,pvVar1,uVar5);
          }
          *(undefined1 *)((long)pvVar8 + uVar5) = 0;
        }
        *(ulong **)(in_x8 + 8) = puVar2 + 3;
        if (local_98 == 0) goto LAB_00f70fbc;
LAB_00f70f1c:
        local_78 = readdir(local_80);
        iVar7 = 0;
        iVar4 = 0;
        if (local_78 == (dirent *)0x0) {
          local_98 = 0;
        }
      }
      if (((byte)local_2278 & 1) != 0) {
        operator_delete(local_2268);
        iVar4 = iVar7;
      }
      if ((iVar4 != 0) || (local_98 == 0)) break;
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
LAB_00f71030:
  if ((local_2240 & 1) != 0) {
    operator_delete(local_2230);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

