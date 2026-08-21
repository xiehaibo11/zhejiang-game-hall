
/* cocostudio::Skin::setBone(cocostudio::Bone*) */

void __thiscall cocostudio::Skin::setBone(Skin *this,Bone *param_1)

{
  long lVar1;
  
  *(Bone **)(this + 0x588) = param_1;
  lVar1 = (**(code **)(*(long *)param_1 + 0x570))(param_1);
  if (lVar1 != 0) {
    *(long *)(this + 0x590) = lVar1;
  }
  return;
}

