
/* cocostudio::Bone::setBlendFunc(cocos2d::BlendFunc const&) */

void __thiscall cocostudio::Bone::setBlendFunc(Bone *this,BlendFunc *param_1)

{
  if ((*(int *)(this + 0x31c) != *(int *)param_1) || (*(int *)(this + 800) != *(int *)(param_1 + 4))
     ) {
    *(undefined8 *)(this + 0x31c) = *(undefined8 *)param_1;
    this[0x324] = (Bone)0x1;
  }
  return;
}

