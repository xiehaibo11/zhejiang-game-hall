
/* lua_cocos2dx_Event_constructor(lua_State*) */

void lua_cocos2dx_Event_constructor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Ref *this;
  undefined8 uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"cc.Event:Event");
    if ((uVar3 & 1) != 0) {
      this = operator_new(0x38);
      cocos2d::Event::Event((Event *)this,local_3c);
      cocos2d::Ref::autorelease(this);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.Event");
      uVar4 = 1;
      goto LAB_007e50a0;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Event_constructor\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.Event:Event",
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_007e50a0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

