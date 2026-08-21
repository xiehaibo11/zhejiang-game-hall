
/* fairygui::GearLook::onTweenUpdate(fairygui::GTweener*) */

void fairygui::GearLook::onTweenUpdate(GTweener *param_1)

{
  uint uVar1;
  GObject *this;
  
  uVar1 = cocos2d::Value::asInt((Value *)(*(long *)(*(long *)(param_1 + 0x18) + 0x18) + 200));
  this = *(GObject **)(param_1 + 8);
  this[0x99] = (GObject)0x1;
  if ((uVar1 & 1) != 0) {
    GObject::setAlpha(this,*(float *)(*(long *)(*(long *)(param_1 + 0x18) + 0x18) + 0x58));
  }
  if ((uVar1 >> 1 & 1) != 0) {
    GObject::setRotation
              (*(GObject **)(param_1 + 8),
               *(float *)(*(long *)(*(long *)(param_1 + 0x18) + 0x18) + 0x5c));
  }
  *(undefined1 *)(*(long *)(param_1 + 8) + 0x99) = 0;
  return;
}

