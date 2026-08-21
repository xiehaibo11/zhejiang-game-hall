
void FUN_0089f4c8(lua_State *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  undefined8 uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = tolua_isusertable(param_1,1,"CCString",0,auStack_48);
  if (((iVar3 == 0) || (iVar3 = tolua_isstring(param_1,2,0,auStack_48), iVar3 == 0)) ||
     (iVar3 = tolua_isnoobj(param_1,3,auStack_48), iVar3 == 0)) {
    tolua_error(param_1,"#ferror in function \'createWithContentsOfFile\'.",auStack_48);
    uVar6 = 0;
  }
  else {
    pcVar4 = (char *)tolua_tostring(param_1,2,0);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_60,pcVar4);
    pvVar5 = (void *)cocos2d::__String::createWithContentsOfFile((basic_string *)local_60);
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    piVar1 = (int *)((long)pvVar5 + 0x10);
    if (pvVar5 == (void *)0x0) {
      iVar3 = -1;
      piVar1 = (int *)0x0;
    }
    else {
      iVar3 = *(int *)((long)pvVar5 + 0xc);
    }
    toluafix_pushusertype_ccobject(param_1,iVar3,piVar1,pvVar5,"CCString");
    uVar6 = 1;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

