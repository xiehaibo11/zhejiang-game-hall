
/* fairygui::GObject::setProp(fairygui::ObjectPropID, cocos2d::Value const&) */

void fairygui::GObject::setProp(long *param_1,int param_2)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == 1) {
    cocos2d::Value::asString();
    (**(code **)(*param_1 + 0x28))(param_1,local_40);
  }
  else {
    if (param_2 != 0) goto LAB_00a85460;
    cocos2d::Value::asString();
    (**(code **)(*param_1 + 0x18))(param_1,local_40);
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
LAB_00a85460:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

