
void FUN_008af988(lua_State *param_1)

{
  char *pcVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  void *pvVar6;
  undefined8 uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar7 = 0;
  if (param_1 != (lua_State *)0x0) {
    iVar4 = lua_gettop();
    if (iVar4 + -1 == 1) {
      pcVar5 = (char *)tolua_tostring(param_1,2,0);
      pcVar1 = "";
      if (pcVar5 != (char *)0x0) {
        pcVar1 = pcVar5;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_40,pcVar1);
      pvVar6 = (void *)cocos2d::MenuItemFont::create((basic_string *)local_40);
      piVar2 = (int *)((long)pvVar6 + 0x10);
      if (pvVar6 == (void *)0x0) {
        iVar4 = -1;
        piVar2 = (int *)0x0;
      }
      else {
        iVar4 = *(int *)((long)pvVar6 + 0xc);
      }
      toluafix_pushusertype_ccobject(param_1,iVar4,piVar2,pvVar6,"cc.MenuItemFont");
      if (((byte)local_40[0] & 1) != 0) {
        operator_delete(local_30);
      }
      uVar7 = 1;
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.MenuItemFont:create",iVar4 + -1,1);
      uVar7 = 0;
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

