
/* fairygui::GController::runActions() */

void __thiscall fairygui::GController::runActions(GController *this)

{
  undefined8 *puVar1;
  basic_string *pbVar2;
  basic_string *pbVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(this + 0xa8);
  puVar1 = *(undefined8 **)(this + 0xb0);
  if (puVar4 != puVar1) {
    do {
      pbVar2 = (basic_string *)&cocos2d::STD_STRING_EMPTY;
      if (*(int *)(this + 0x74) != -1) {
        pbVar2 = (basic_string *)(*(long *)(this + 0x78) + (long)*(int *)(this + 0x74) * 0x18);
      }
      pbVar3 = (basic_string *)&cocos2d::STD_STRING_EMPTY;
      if (*(int *)(this + 0x70) != -1) {
        pbVar3 = (basic_string *)(*(long *)(this + 0x78) + (long)*(int *)(this + 0x70) * 0x18);
      }
      ControllerAction::run((ControllerAction *)*puVar4,this,pbVar2,pbVar3);
      puVar4 = puVar4 + 1;
    } while (puVar1 != puVar4);
  }
  return;
}

