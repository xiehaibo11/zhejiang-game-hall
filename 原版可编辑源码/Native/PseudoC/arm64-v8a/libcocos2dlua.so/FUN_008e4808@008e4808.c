
undefined8 FUN_008e4808(lua_State *param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *local_60;
  byte *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar6 = tolua_tousertype(param_1,1,0);
  iVar5 = lua_gettop(param_1);
  if (iVar5 + -1 == 1) {
    local_58 = (byte *)0x0;
    uStack_50 = 0;
    local_60 = (byte *)0x0;
    uVar7 = luaval_to_std_vector_string
                      (param_1,2,(vector *)&local_60,"fairygui.GComboBox:setValues");
    if ((uVar7 & 1) != 0) {
      pbVar9 = *(byte **)(lVar6 + 0x2e0);
      pbVar8 = *(byte **)(lVar6 + 0x2e8);
      if (pbVar8 != pbVar9) {
        bVar1 = pbVar8[-0x18];
        pbVar3 = pbVar8 + -0x18;
        while( true ) {
          if ((bVar1 & 1) != 0) {
            operator_delete(*(void **)(pbVar8 + -8));
          }
          if (pbVar9 == pbVar3) break;
          bVar1 = pbVar3[-0x18];
          pbVar8 = pbVar3;
          pbVar3 = pbVar3 + -0x18;
        }
      }
      *(byte **)(lVar6 + 0x2e8) = pbVar9;
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      assign<std::__ndk1::__wrap_iter<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>>
                ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  *)(lVar6 + 0x2e0),local_60,local_58);
    }
    pbVar8 = local_60;
    if (local_60 != (byte *)0x0) {
      if (local_58 != local_60) {
        bVar1 = local_58[-0x18];
        pbVar3 = local_58 + -0x18;
        pbVar9 = local_58;
        while( true ) {
          pbVar4 = pbVar3;
          if ((bVar1 & 1) != 0) {
            operator_delete(*(void **)(pbVar9 + -8));
          }
          if (pbVar8 == pbVar4) break;
          bVar1 = pbVar4[-0x18];
          pbVar3 = pbVar4 + -0x18;
          pbVar9 = pbVar4;
        }
      }
      local_58 = pbVar8;
      operator_delete(local_60);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComboBox:setValues",iVar5 + -1,1);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

