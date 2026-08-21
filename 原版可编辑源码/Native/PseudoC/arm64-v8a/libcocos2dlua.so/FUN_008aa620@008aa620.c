
undefined8 FUN_008aa620(lua_State *param_1)

{
  basic_string *pbVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  utils *this;
  basic_string *pbVar5;
  int iVar6;
  basic_string *pbVar7;
  void *pvVar8;
  long lVar9;
  int iVar10;
  long *local_78;
  long *local_70;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this = (utils *)tolua_tousertype(param_1,2,0);
  pbVar7 = (basic_string *)&DAT_013c996e;
  pbVar5 = (basic_string *)tolua_tostring(param_1,3);
  pbVar1 = (basic_string *)&DAT_013c996e;
  if (pbVar5 != (basic_string *)0x0) {
    pbVar1 = pbVar5;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,(char *)pbVar1);
  cocos2d::utils::findChildren(this,(Node *)local_60,pbVar7);
  lua_createtable(param_1,0,0);
  if (local_78 != local_70) {
    iVar10 = 1;
    lVar9 = *local_78;
    plVar4 = local_78;
    while( true ) {
      if (lVar9 != 0) {
        lua_pushnumber((double)iVar10,param_1);
        pvVar8 = (void *)*plVar4;
        if (pvVar8 == (void *)0x0) {
          iVar6 = -1;
        }
        else {
          iVar6 = *(int *)((long)pvVar8 + 0xc);
        }
        piVar2 = (int *)0x0;
        if (pvVar8 != (void *)0x0) {
          piVar2 = (int *)((long)pvVar8 + 0x10);
        }
        toluafix_pushusertype_ccobject(param_1,iVar6,piVar2,pvVar8,"cc.Node");
        lua_rawset(param_1,0xfffffffd);
        iVar10 = iVar10 + 1;
      }
      plVar4 = plVar4 + 1;
      if (local_70 == plVar4) break;
      lVar9 = *plVar4;
    }
  }
  if (local_78 != (long *)0x0) {
    operator_delete(local_78);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

