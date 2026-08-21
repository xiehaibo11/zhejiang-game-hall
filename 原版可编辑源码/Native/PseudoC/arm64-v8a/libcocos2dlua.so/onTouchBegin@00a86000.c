
/* fairygui::GObject::onTouchBegin(fairygui::EventContext*) */

void __thiscall fairygui::GObject::onTouchBegin(GObject *this,EventContext *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
  this[0x1b8] = (GObject)0x1;
  *(undefined8 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  return;
}

