
undefined8 FUN_008aa7c8(lua_State *param_1)

{
  char *pcVar1;
  int *piVar2;
  long lVar3;
  Node *pNVar4;
  char *pcVar5;
  void *pvVar6;
  int iVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  pNVar4 = (Node *)tolua_tousertype(param_1,1,0);
  pcVar5 = (char *)tolua_tostring(param_1,2,&DAT_013c996e);
  pcVar1 = "";
  if (pcVar5 != (char *)0x0) {
    pcVar1 = pcVar5;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,pcVar1);
  pvVar6 = (void *)cocos2d::utils::findChild(pNVar4,(basic_string *)local_50);
  piVar2 = (int *)((long)pvVar6 + 0x10);
  if (pvVar6 == (void *)0x0) {
    iVar7 = -1;
    piVar2 = (int *)0x0;
  }
  else {
    iVar7 = *(int *)((long)pvVar6 + 0xc);
  }
  toluafix_pushusertype_ccobject(param_1,iVar7,piVar2,pvVar6,"cc.Node");
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

