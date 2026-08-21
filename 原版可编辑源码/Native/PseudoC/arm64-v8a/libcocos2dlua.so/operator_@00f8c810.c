
/* cocos2d::Console::Command::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Console::Command const&) */

Command * __thiscall cocos2d::Console::Command::operator=(Command *this,Command *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  Command *pCVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  Command *pCVar10;
  piecewise_construct_t *local_90 [4];
  piecewise_construct_t **local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (this == param_1) goto LAB_00f8ca10;
  uVar1 = *(ulong *)(param_1 + 8);
  pCVar4 = *(Command **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pCVar4 = param_1 + 1;
    uVar1 = (ulong)((byte)*param_1 >> 1);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)this,
         (char *)pCVar4,uVar1);
  uVar1 = (ulong)((byte)param_1[0x18] >> 1);
  pCVar4 = param_1 + 0x19;
  if (((byte)param_1[0x18] & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    pCVar4 = *(Command **)(param_1 + 0x28);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x18),(char *)pCVar4,uVar1);
  pCVar4 = *(Command **)(param_1 + 0x50);
  if (pCVar4 == (Command *)0x0) {
    local_70 = (piecewise_construct_t **)0x0;
  }
  else if (param_1 + 0x30 == pCVar4) {
    local_70 = local_90;
    (**(code **)(*(long *)pCVar4 + 0x18))(pCVar4,local_90);
  }
  else {
    local_70 = (piecewise_construct_t **)(**(code **)(*(long *)pCVar4 + 0x10))();
  }
  FUN_009f16f8(local_90,this + 0x30);
  if (local_90 == local_70) {
    pcVar5 = *(code **)(*local_70 + 0x20);
LAB_00f8c908:
    (*pcVar5)();
  }
  else if (local_70 != (piecewise_construct_t **)0x0) {
    pcVar5 = *(code **)(*local_70 + 0x28);
    goto LAB_00f8c908;
  }
  for (plVar8 = *(long **)(this + 0x70); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
    pCVar4 = (Command *)plVar8[5];
    if (pCVar4 != (Command *)0x0) {
      ~Command(pCVar4);
      operator_delete(pCVar4);
    }
  }
  if (*(long *)(this + 0x78) != 0) {
    puVar3 = *(void **)(this + 0x70);
    while (puVar3 != (void *)0x0) {
      pvVar9 = (void *)*puVar3;
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      puVar3 = pvVar9;
    }
    lVar6 = *(long *)(this + 0x68);
    *(undefined8 *)(this + 0x70) = 0;
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x60) + lVar7 * 8) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
    }
    *(undefined8 *)(this + 0x78) = 0;
  }
  for (plVar8 = *(long **)(param_1 + 0x70); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
    pCVar10 = (Command *)plVar8[5];
    pCVar4 = operator_new(0x90,(nothrow_t *)&std::nothrow);
    if (pCVar4 != (Command *)0x0) {
      Command(pCVar4,pCVar10);
    }
    local_90[0] = (piecewise_construct_t *)(plVar8 + 2);
    lVar6 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)(this + 0x60),local_90[0],(tuple *)&DAT_01449841,
                       (tuple *)local_90);
    *(Command **)(lVar6 + 0x28) = pCVar4;
  }
LAB_00f8ca10:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

