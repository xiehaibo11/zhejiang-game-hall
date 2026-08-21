
undefined8 FUN_008ad2fc(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  __Dictionary *this;
  long lVar4;
  Ref *this_00;
  uint uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 != 0) {
    plVar3 = (long *)tolua_tousertype(param_1,1,0);
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 1) {
      iVar2 = tolua_toboolean(param_1,2,0);
      this = (__Dictionary *)(**(code **)(*plVar3 + 0x2f0))(plVar3);
      if (this == (__Dictionary *)0x0) {
        this = (__Dictionary *)cocos2d::__Dictionary::create();
        (**(code **)(*plVar3 + 0x300))(plVar3,this);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_60,"swallowTouches");
      lVar4 = cocos2d::__Dictionary::objectForKey(this,(basic_string *)local_60);
      if (((byte)local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (uint)*(byte *)(lVar4 + 0x30);
      }
      if (uVar5 != (iVar2 != 0)) {
        this_00 = operator_new(0x38,(nothrow_t *)&std::nothrow);
        if (this_00 != (Ref *)0x0) {
          cocos2d::Ref::Ref(this_00);
          *(uint *)(this_00 + 0x30) = (uint)(iVar2 != 0);
          *(undefined ***)this_00 = &PTR____Integer_01698788;
          *(undefined ***)(this_00 + 0x28) = &PTR_clone_016987b8;
        }
        cocos2d::Ref::autorelease(this_00);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_60,"swallowTouches");
        cocos2d::__Dictionary::setObject(this,this_00,(basic_string *)local_60);
        if (((byte)local_60[0] & 1) != 0) {
          operator_delete(local_50);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_60,"touchEnabled");
        lVar4 = cocos2d::__Dictionary::objectForKey(this,(basic_string *)local_60);
        if (((byte)local_60[0] & 1) != 0) {
          operator_delete(local_50);
        }
        if ((lVar4 != 0) && (*(char *)(lVar4 + 0x30) != '\0')) {
          FUN_008adea4(plVar3,0);
          FUN_008adea4(plVar3,1);
        }
      }
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.Layer:setSwallowsTouches",iVar2 + -1,1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

