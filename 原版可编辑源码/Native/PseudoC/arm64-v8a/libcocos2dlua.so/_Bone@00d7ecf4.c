
/* dragonBones::Bone::~Bone() */

void __thiscall dragonBones::Bone::~Bone(Bone *this)

{
  undefined8 uVar1;
  
                    /* try { // try from 00d7ed00 to 00e7ed2f has its CatchHandler @ 00d7ef7c */
  *(undefined ***)this = &PTR__Bone_016d6840;
  TransformObject::_onClear((TransformObject *)this);
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined2 *)(this + 0x90) = 0;
  this[0x92] = (Bone)0x0;
  *(undefined4 *)(this + 0x74) = 1;
  *(undefined8 *)(this + 0x88) = uVar1;
                    /* try { // try from 00d7ed40 to 00e7ed53 has its CatchHandler @ 00d7eee4 */
  *(undefined2 *)(this + 0xb8) = 0x101;
  *(undefined4 *)(this + 0xbc) = 0xffffffff;
  BlendState::clear((BlendState *)(this + 0x94));
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
                    /* try { // try from 00d7ed58 to 00e7ed7f has its CatchHandler @ 00d7ef04 */
  return;
}

