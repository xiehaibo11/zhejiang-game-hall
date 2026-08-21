
undefined8 FUN_008b186c(lua_State *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  GLProgram *this;
  undefined8 uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  void *local_80;
  ulong local_78;
  undefined8 local_70;
  char *local_68;
  ulong local_60;
  undefined8 local_58;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar6 = 0;
  if (param_1 != (lua_State *)0x0) {
    iVar5 = lua_gettop(param_1);
    if (iVar5 + -1 == 2) {
      local_58 = 0;
      local_50 = (char *)0x0;
      local_60 = 0;
      luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.GLProgram:create");
      local_70 = 0;
      local_68 = (char *)0x0;
      pcVar1 = (char *)((ulong)&local_60 | 1);
      if ((local_60 & 1) != 0) {
        pcVar1 = local_50;
      }
      local_78 = 0;
      luaval_to_std_string(param_1,3,(basic_string *)&local_78,"cc.GLProgram:create");
      uVar4 = local_78;
      pcVar2 = (char *)((ulong)&local_78 | 1);
      if ((local_78 & 1) != 0) {
        pcVar2 = local_68;
      }
      this = operator_new(0xf8,(nothrow_t *)&std::nothrow);
      if (this == (GLProgram *)0x0) {
        uVar6 = 0;
      }
      else {
        cocos2d::GLProgram::GLProgram(this);
        cocos2d::Ref::autorelease((Ref *)this);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_90,pcVar1);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_a8,pcVar2);
        cocos2d::GLProgram::initWithFilenames
                  (this,(basic_string *)local_90,(basic_string *)local_a8);
        if (((byte)local_a8[0] & 1) != 0) {
          operator_delete(local_98);
        }
        if (((byte)local_90[0] & 1) != 0) {
          operator_delete(local_80);
        }
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.GLProgram");
        uVar6 = 1;
        uVar4 = local_78;
      }
      if ((uVar4 & 1) != 0) {
        operator_delete(local_68);
      }
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
    }
    else {
      luaL_error(param_1,"%s wrong number of arguments: %d, was expecting %d\n",
                 "cc.GLProgram:create",iVar5 + -1,2);
      uVar6 = 0;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

