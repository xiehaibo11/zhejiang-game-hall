
/* cocos2d::Console::Command::commandGeneric(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::Console::Command::commandGeneric(Command *this,int param_1,basic_string *param_2)

{
  ulong uVar1;
  basic_string *__s;
  Command CVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  Command *pCVar7;
  ulong uVar8;
  int *piVar9;
  ulong local_88;
  ulong uStack_80;
  int *local_78;
  ulong local_70;
  ulong uStack_68;
  int *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,param_2);
  uVar1 = *(ulong *)(param_2 + 8);
  __s = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    __s = param_2 + 1;
    uVar1 = (ulong)((byte)*param_2 >> 1);
  }
  if (uVar1 != 0) {
    pvVar4 = memchr(__s,0x20,uVar1);
    uVar8 = (long)pvVar4 - (long)__s;
    if (pvVar4 == (void *)0x0) {
      uVar8 = 0xffffffffffffffff;
    }
    if (1 < uVar8 + 1) {
      if (uVar8 <= uVar1) {
        uVar1 = uVar8;
      }
      uStack_80 = 0;
      local_78 = (int *)0x0;
      local_88 = 0;
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar1 < 0x17) {
        piVar9 = (int *)((ulong)&local_88 | 1);
        local_88 = (ulong)(byte)((int)uVar1 << 1);
      }
      else {
        uVar8 = uVar1 + 0x10 & 0xfffffffffffffff0;
        piVar9 = operator_new(uVar8);
        local_88 = uVar8 | 1;
        uStack_80 = uVar1;
        local_78 = piVar9;
      }
      memcpy(piVar9,__s,uVar1);
      *(undefined1 *)((long)piVar9 + uVar1) = 0;
      if (((byte)local_70._0_1_ & 1) != 0) {
        *(undefined1 *)local_60 = 0;
        uStack_68 = 0;
        if (((byte)local_70._0_1_ & 1) != 0) {
          operator_delete(local_60);
        }
      }
      uStack_68 = uStack_80;
      local_70 = local_88;
      local_60 = local_78;
    }
  }
  uVar1 = local_70 >> 1 & 0x7f;
  if ((local_70 & 1) != 0) {
    uVar1 = uStack_68;
  }
  if (uVar1 == 2) {
    piVar9 = (int *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      piVar9 = local_60;
    }
    if ((short)*piVar9 == 0x682d) {
LAB_00f8d4e8:
      CVar2 = this[0x18];
      if (((byte)CVar2 & 1) == 0) {
        if ((byte)CVar2 >> 1 != 0) {
LAB_00f8d4fc:
          if (((byte)CVar2 & 1) == 0) {
            pCVar7 = this + 0x19;
          }
          else {
            pCVar7 = *(Command **)(this + 0x28);
          }
          Utility::mydprintf(param_1,"%s\n",pCVar7);
        }
      }
      else if (*(long *)(this + 0x20) != 0) goto LAB_00f8d4fc;
      if (*(long *)(this + 0x78) != 0) {
        sendHelp(param_1,(unordered_map *)(this + 0x60),"");
      }
      goto LAB_00f8d568;
    }
  }
  else if (uVar1 == 4) {
    piVar9 = (int *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      piVar9 = local_60;
    }
    if (*piVar9 == 0x706c6568) goto LAB_00f8d4e8;
  }
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>>>
                      *)(this + 0x60),(basic_string *)&local_70);
  if (lVar5 == 0) {
    plVar6 = *(long **)(this + 0x50);
    if (plVar6 != (long *)0x0) {
      local_88 = CONCAT44(local_88._4_4_,param_1);
      (**(code **)(*plVar6 + 0x30))(plVar6,&local_88,param_2);
    }
  }
  else {
    plVar6 = *(long **)(*(long *)(lVar5 + 0x28) + 0x50);
    if (plVar6 != (long *)0x0) {
      local_88 = CONCAT44(local_88._4_4_,param_1);
      (**(code **)(*plVar6 + 0x30))(plVar6,&local_88,param_2);
    }
  }
LAB_00f8d568:
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

