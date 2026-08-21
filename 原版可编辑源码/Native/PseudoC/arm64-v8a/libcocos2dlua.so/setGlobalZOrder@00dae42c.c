
/* cocos2d::ui::Layout::setGlobalZOrder(float) */

void __thiscall cocos2d::ui::Layout::setGlobalZOrder(Layout *this,float param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 in_register_00005004;
  
  ProtectedNode::setGlobalZOrder((ProtectedNode *)this,param_1);
  if (*(long **)(this + 0x5b0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x5b0) + 0x40))(CONCAT44(in_register_00005004,param_1));
  }
  puVar1 = *(undefined8 **)(this + 0x180);
  for (puVar2 = *(undefined8 **)(this + 0x178); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x40))(CONCAT44(in_register_00005004,param_1));
  }
  return;
}

