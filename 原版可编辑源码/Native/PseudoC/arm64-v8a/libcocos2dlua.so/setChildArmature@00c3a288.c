
/* cocostudio::Bone::setChildArmature(cocostudio::Armature*) */

void __thiscall cocostudio::Bone::setChildArmature(Bone *this,Armature *param_1)

{
  Armature *pAVar1;
  Ref *this_00;
  
  pAVar1 = *(Armature **)(this + 0x308);
  if (pAVar1 != param_1) {
    if ((param_1 == (Armature *)0x0) && (pAVar1 != (Armature *)0x0)) {
      (**(code **)(*(long *)pAVar1 + 0x5b0))(pAVar1,0);
      this_00 = *(Ref **)(this + 0x308);
    }
    else {
      if (param_1 != (Armature *)0x0) {
        cocos2d::Ref::retain((Ref *)param_1);
      }
      this_00 = *(Ref **)(this + 0x308);
    }
    if (this_00 != (Ref *)0x0) {
      cocos2d::Ref::release(this_00);
    }
    *(Armature **)(this + 0x308) = param_1;
  }
  return;
}

