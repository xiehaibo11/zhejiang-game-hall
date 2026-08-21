
void FUN_008b61f4(lua_State *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  void *pvVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  Size aSStack_90 [8];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar7 = 0;
  if (param_1 != (lua_State *)0x0) {
    iVar3 = tolua_isusertable(param_1,1,"cc.Label",0,auStack_58);
    if (((((iVar3 == 0) || (uVar4 = lua_gettop(param_1), (uVar4 & 0xfffffffc) != 4)) ||
         (iVar3 = tolua_isstring(param_1,2,0,auStack_58), iVar3 == 0)) ||
        ((iVar3 = tolua_isstring(param_1,3,0,auStack_58), iVar3 == 0 ||
         (iVar3 = tolua_isnumber(param_1,4,0,auStack_58), iVar3 == 0)))) ||
       ((iVar3 = tolua_istable(param_1,5,1,auStack_58), iVar3 == 0 ||
        ((iVar3 = tolua_isnumber(param_1,6,1,auStack_58), iVar3 == 0 ||
         (iVar3 = tolua_isnumber(param_1,7,1,auStack_58), iVar3 == 0)))))) {
      uVar7 = FUN_008b5f48(param_1);
    }
    else {
      pcVar5 = (char *)tolua_tostring(param_1,2,&DAT_013c996e);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_70,pcVar5);
      pcVar5 = (char *)tolua_tostring(param_1,3,&DAT_013c996e);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_88,pcVar5);
      dVar8 = (double)tolua_tonumber(0,param_1,4);
      cocos2d::Size::Size(aSStack_90,(Size *)&cocos2d::Size::ZERO);
      iVar3 = lua_type(param_1,5);
      if (iVar3 == 5) {
        luaval_to_size(param_1,5,aSStack_90,"cc.Label:createWithTTF");
      }
      dVar9 = (double)tolua_tonumber(0,param_1,6);
      dVar10 = (double)tolua_tonumber(0,param_1,7);
      pvVar6 = (void *)cocos2d::Label::createWithTTF
                                 ((float)dVar8,local_70,local_88,aSStack_90,(int)dVar9,(int)dVar10);
      piVar1 = (int *)((long)pvVar6 + 0x10);
      if (pvVar6 == (void *)0x0) {
        iVar3 = -1;
        piVar1 = (int *)0x0;
      }
      else {
        iVar3 = *(int *)((long)pvVar6 + 0xc);
      }
      toluafix_pushusertype_ccobject(param_1,iVar3,piVar1,pvVar6,"cc.Label");
      if (((byte)local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      if (((byte)local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      uVar7 = 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

