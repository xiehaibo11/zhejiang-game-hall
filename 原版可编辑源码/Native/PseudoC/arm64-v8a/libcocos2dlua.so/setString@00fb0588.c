
/* WARNING: Removing unreachable block (ram,0x00fb083c) */
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::Properties::setString(char const*, char const*) */

void __thiscall cocos2d::Properties::setString(Properties *this,char *param_1,char *param_2)

{
  size_t sVar1;
  ulong *puVar2;
  byte bVar3;
  long lVar4;
  void *pvVar5;
  int iVar6;
  size_t sVar7;
  undefined8 uVar8;
  void *pvVar9;
  byte *__s1;
  char *__s;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d0;
  undefined7 uStack_cf;
  ulong uStack_c8;
  void *local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8;
  undefined7 uStack_b7;
  ulong uStack_b0;
  void *local_a8;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  undefined8 local_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  __s = "";
  if (param_1 == (char *)0x0) {
    pbVar10 = *(byte **)(this + 0x70);
    if (pbVar10 == *(byte **)(this + 0x60)) {
      uVar8 = 0;
      goto LAB_00fb0688;
    }
    if (param_2 != (char *)0x0) {
      __s = param_2;
    }
LAB_00fb066c:
    sVar7 = strlen(__s);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pbVar10 + 0x18),__s,sVar7);
  }
  else {
    pbVar10 = *(byte **)(this + 0x58);
    pbVar12 = *(byte **)(this + 0x60);
    if (pbVar10 != pbVar12) {
      sVar7 = strlen(param_1);
      do {
        bVar3 = *pbVar10;
        sVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar1 = *(size_t *)(pbVar10 + 8);
        }
        if (sVar7 == sVar1) {
          if (sVar7 != 0) {
            if (sVar7 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            __s1 = *(byte **)(pbVar10 + 0x10);
            if ((bVar3 & 1) == 0) {
              __s1 = pbVar10 + 1;
            }
            iVar6 = memcmp(__s1,param_1,sVar7);
            if (iVar6 != 0) goto LAB_00fb05f0;
          }
          if (param_2 != (char *)0x0) {
            __s = param_2;
          }
          goto LAB_00fb066c;
        }
LAB_00fb05f0:
        pbVar10 = pbVar10 + 0x30;
      } while (pbVar10 != pbVar12);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(&local_b8,param_1);
    if (param_2 != (char *)0x0) {
      __s = param_2;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(&local_d0,__s);
    pvVar5 = local_a8;
    uStack_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0;
    if (((byte)local_b8 & 1) == 0) {
      local_a0 = CONCAT71(uStack_b7,local_b8);
      uStack_98 = uStack_b0;
      local_90 = local_a8;
    }
    else {
      if (0xffffffffffffffef < uStack_b0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uStack_b0 < 0x17) {
        pvVar9 = (void *)((ulong)&local_a0 | 1);
        local_a0 = (ulong)(byte)((int)uStack_b0 << 1);
        if (uStack_b0 != 0) goto LAB_00fb0750;
      }
      else {
        uVar11 = uStack_b0 + 0x10 & 0xfffffffffffffff0;
        pvVar9 = operator_new(uVar11);
        local_a0 = uVar11 | 1;
        uStack_98 = uStack_b0;
        local_90 = pvVar9;
LAB_00fb0750:
        memcpy(pvVar9,pvVar5,uStack_b0);
      }
      *(undefined1 *)((long)pvVar9 + uStack_b0) = 0;
    }
    pvVar5 = local_c0;
    uStack_80 = 0;
    local_78 = (void *)0x0;
    local_88 = 0;
    if (((byte)local_d0 & 1) == 0) {
      local_88 = CONCAT71(uStack_cf,local_d0);
      local_78 = local_c0;
      uStack_80 = uStack_c8;
    }
    else {
      if (0xffffffffffffffef < uStack_c8) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uStack_c8 < 0x17) {
        pvVar9 = (void *)((long)&local_88 + 1);
        local_88 = (ulong)(byte)((int)uStack_c8 << 1);
        if (uStack_c8 != 0) goto LAB_00fb07dc;
      }
      else {
        uVar11 = uStack_c8 + 0x10 & 0xfffffffffffffff0;
        pvVar9 = operator_new(uVar11);
        local_88 = uVar11 | 1;
        uStack_80 = uStack_c8;
        local_78 = pvVar9;
LAB_00fb07dc:
        memcpy(pvVar9,pvVar5,uStack_c8);
      }
      *(undefined1 *)((long)pvVar9 + uStack_c8) = 0;
    }
    puVar2 = *(ulong **)(this + 0x60);
    if (puVar2 < *(ulong **)(this + 0x68)) {
      puVar2[2] = (ulong)local_90;
      puVar2[1] = uStack_98;
      *puVar2 = local_a0;
      uStack_98 = 0;
      local_90 = (void *)0x0;
      local_a0 = 0;
      puVar2[5] = (ulong)local_78;
      puVar2[4] = uStack_80;
      puVar2[3] = local_88;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      local_88 = 0;
      *(ulong **)(this + 0x60) = puVar2 + 6;
    }
    else {
      std::__ndk1::
      vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>::
      __push_back_slow_path<cocos2d::Properties::Property>
                ((vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>
                  *)(this + 0x58),(Property *)&local_a0);
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
    }
    if (((byte)local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    if (((byte)local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
  }
  uVar8 = 1;
LAB_00fb0688:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

