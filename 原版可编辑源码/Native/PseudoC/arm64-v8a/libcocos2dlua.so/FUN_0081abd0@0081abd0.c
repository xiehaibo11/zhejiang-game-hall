
void FUN_0081abd0(Ref *param_1)

{
  lua_State *unaff_x19;
  long unaff_x23;
  long in_stack_00000008;
  
  cocos2d::EventController::EventController();
  cocos2d::Ref::autorelease(param_1);
  toluafix_pushusertype_ccobject
            (unaff_x19,*(int *)(param_1 + 0xc),(int *)(param_1 + 0x10),param_1,"cc.EventController")
  ;
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000008) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

