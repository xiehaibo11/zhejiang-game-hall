
/* dragonBones::Bone::~Bone() */

void __thiscall dragonBones::Bone::~Bone(Bone *this)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR__Bone_016d6840;
  TransformObject::_onClear((TransformObject *)this);
  uVar1 = NEON_fmov(0x3f800000,4);
                    /* try { // try from 00d7ed90 to 00e7edcf has its CatchHandler @ 00d7ef1c */
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined2 *)(this + 0x90) = 0;
  this[0x92] = (Bone)0x0;
  *(undefined4 *)(this + 0x74) = 1;
  *(undefined8 *)(this + 0x88) = uVar1;
  *(undefined2 *)(this + 0xb8) = 0x101;
  *(undefined4 *)(this + 0xbc) = 0xffffffff;
  BlendState::clear((BlendState *)(this + 0x94));
  operator_delete(this);
  return;
}

