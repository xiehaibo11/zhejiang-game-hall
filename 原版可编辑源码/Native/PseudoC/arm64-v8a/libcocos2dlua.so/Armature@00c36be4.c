
/* cocostudio::Armature::Armature() */

void __thiscall cocostudio::Armature::Armature(Armature *this)

{
  cocos2d::Node::Node((Node *)this);
  this[0x31c] = (Armature)0x1;
  *(undefined4 *)(this + 0x340) = 0x3f800000;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined ***)this = &PTR__Armature_016c7d00;
  *(undefined ***)(this + 0x2f8) = &PTR__Armature_016c82f0;
  *(undefined8 *)(this + 0x370) = 0;
  return;
}

