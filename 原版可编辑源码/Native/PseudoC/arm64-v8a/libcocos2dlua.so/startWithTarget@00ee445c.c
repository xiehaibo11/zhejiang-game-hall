
/* cocos2d::Animate::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::Animate::startWithTarget(Animate *this,Node *param_1)

{
  Ref *this_00;
  
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  if (*(Ref **)(this + 0x68) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x68));
  }
  if (*(char *)(*(long *)(this + 0x78) + 0x58) != '\0') {
    this_00 = (Ref *)(**(code **)(*(long *)param_1 + 0x5b0))(param_1);
    *(Ref **)(this + 0x68) = this_00;
    Ref::retain(this_00);
  }
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  return;
}

