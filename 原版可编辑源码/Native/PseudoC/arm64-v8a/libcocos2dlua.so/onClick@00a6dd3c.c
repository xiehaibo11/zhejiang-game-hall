
/* fairygui::GButton::onClick(fairygui::EventContext*) */

void fairygui::GButton::onClick(EventContext *param_1)

{
  bool bVar1;
  
  if (((byte)param_1[800] & 1) == 0) {
    if ((byte)param_1[800] >> 1 != 0) {
LAB_00a6dd68:
      GRoot::playSound(GRoot::_inst,*(float *)(param_1 + 0x338));
    }
  }
  else if (*(long *)(param_1 + 0x328) != 0) goto LAB_00a6dd68;
  if (*(int *)(param_1 + 0x280) == 2) {
    if ((param_1[0x34c] != (EventContext)0x0) && (param_1[0x33c] == (EventContext)0x0)) {
      bVar1 = true;
LAB_00a6ddc0:
      setSelected((GButton *)param_1,bVar1);
      UIEventDispatcher::dispatchEvent
                ((UIEventDispatcher *)param_1,2,(void *)0x0,(Value *)&cocos2d::Value::Null);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x280) == 1) {
    if (param_1[0x34c] != (EventContext)0x0) {
      bVar1 = param_1[0x33c] == (EventContext)0x0;
      goto LAB_00a6ddc0;
    }
  }
  else if (*(GController **)(param_1 + 0x2a0) != (GController *)0x0) {
    GController::setSelectedPageId
              (*(GController **)(param_1 + 0x2a0),(basic_string *)(param_1 + 0x2a8),true);
    return;
  }
  return;
}

