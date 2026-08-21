
void FUN_008bcfc4(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Node *this;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertable(param_1,1,"cc.GLNode",0,auStack_48);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'create\'.",auStack_48);
    uVar3 = 0;
  }
  else {
    this = operator_new(0x350,(nothrow_t *)&std::nothrow);
    uVar3 = 0;
    if (this != (Node *)0x0) {
      memset(this,0,0x350);
      cocos2d::Node::Node(this);
      *(undefined ***)this = &PTR__GLNode_0169ad10;
      cocos2d::CustomCommand::CustomCommand((CustomCommand *)(this + 0x300));
      cocos2d::Ref::autorelease((Ref *)this);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.GLNode");
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

