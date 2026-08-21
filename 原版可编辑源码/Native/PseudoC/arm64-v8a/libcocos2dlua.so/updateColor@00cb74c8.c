
/* cocostudio::timeline::BoneNode::updateColor() */

void __thiscall cocostudio::timeline::BoneNode::updateColor(BoneNode *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 0x364);
  uVar1 = *(undefined8 *)(this + 0x35c);
  this[0x88] = (BoneNode)0x1;
  this[0x150] = (BoneNode)0x1;
  this[0x10c] = (BoneNode)0x1;
  *(undefined8 *)(this + 0x3d8) = uVar2;
  *(undefined8 *)(this + 0x3d0) = uVar1;
  *(undefined8 *)(this + 1000) = uVar2;
  *(undefined8 *)(this + 0x3e0) = uVar1;
  *(undefined8 *)(this + 0x3f8) = uVar2;
  *(undefined8 *)(this + 0x3f0) = uVar1;
  *(undefined8 *)(this + 0x408) = uVar2;
  *(undefined8 *)(this + 0x400) = uVar1;
  this[0x161] = (BoneNode)0x1;
  return;
}

