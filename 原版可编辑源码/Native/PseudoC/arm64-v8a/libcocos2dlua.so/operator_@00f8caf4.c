
/* cocos2d::Console::Command::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Console::Command&&) */

Command * __thiscall cocos2d::Console::Command::operator=(Command *this,Command *param_1)

{
  undefined8 *puVar1;
  Command *pCVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  Command *pCVar6;
  long *plVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (this == param_1) {
    return this;
  }
  if (((byte)*this & 1) == 0) {
    *(undefined2 *)this = 0;
  }
  else {
    **(undefined1 **)(this + 0x10) = 0;
    *(undefined8 *)(this + 8) = 0;
    if (((byte)*this & 1) != 0) {
      operator_delete(*(void **)(this + 0x10));
      *(undefined8 *)this = 0;
    }
  }
  uVar10 = *(undefined8 *)(param_1 + 8);
  uVar9 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = uVar10;
  *(undefined8 *)this = uVar9;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  pCVar6 = this + 0x18;
  if (((byte)*pCVar6 & 1) == 0) {
    *(undefined2 *)pCVar6 = 0;
  }
  else {
    **(undefined1 **)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    if (((byte)this[0x18] & 1) != 0) {
      operator_delete(*(void **)(this + 0x28));
      *(undefined8 *)(this + 0x18) = 0;
    }
  }
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = uVar10;
  *(undefined8 *)pCVar6 = uVar9;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  pCVar2 = *(Command **)(this + 0x50);
  pCVar6 = this + 0x30;
  *(undefined8 *)(this + 0x50) = 0;
  if (pCVar6 == pCVar2) {
    pcVar3 = *(code **)(*(long *)pCVar2 + 0x20);
LAB_00f8cbdc:
    (*pcVar3)();
  }
  else if (pCVar2 != (Command *)0x0) {
    pcVar3 = *(code **)(*(long *)pCVar2 + 0x28);
    goto LAB_00f8cbdc;
  }
  pCVar2 = *(Command **)(param_1 + 0x50);
  if (pCVar2 == (Command *)0x0) {
    *(undefined8 *)(this + 0x50) = 0;
  }
  else {
    if (param_1 + 0x30 != pCVar2) {
      *(Command **)(this + 0x50) = pCVar2;
      *(undefined8 *)(param_1 + 0x50) = 0;
      plVar7 = *(long **)(this + 0x70);
      goto joined_r0x00f8cc58;
    }
    *(Command **)(this + 0x50) = pCVar6;
    (**(code **)(**(long **)(param_1 + 0x50) + 0x18))(*(long **)(param_1 + 0x50),pCVar6);
  }
  pCVar6 = *(Command **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (param_1 + 0x30 == pCVar6) {
    pcVar3 = *(code **)(*(long *)pCVar6 + 0x20);
LAB_00f8cc50:
    (*pcVar3)();
  }
  else if (pCVar6 != (Command *)0x0) {
    pcVar3 = *(code **)(*(long *)pCVar6 + 0x28);
    goto LAB_00f8cc50;
  }
  plVar7 = *(long **)(this + 0x70);
joined_r0x00f8cc58:
  for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    pCVar6 = (Command *)plVar7[5];
    if (pCVar6 != (Command *)0x0) {
      ~Command(pCVar6);
      operator_delete(pCVar6);
    }
  }
  if (*(long *)(this + 0x78) != 0) {
    puVar1 = *(void **)(this + 0x70);
    while (puVar1 != (void *)0x0) {
      pvVar8 = (void *)*puVar1;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar8;
    }
    lVar4 = *(long *)(this + 0x68);
    *(undefined8 *)(this + 0x70) = 0;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x60) + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
    *(undefined8 *)(this + 0x78) = 0;
  }
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Console::Command*>>>
  ::__move_assign(this + 0x60,param_1 + 0x60);
  return this;
}

