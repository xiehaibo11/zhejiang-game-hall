
/* cocos2d::Bone3D::resetPose() */

void __thiscall cocos2d::Bone3D::resetPose(Bone3D *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(this + 300) = *(undefined8 *)(this + 0x88);
  *(undefined8 *)(this + 0x124) = *(undefined8 *)(this + 0x80);
                    /* try { // try from 00d3b614 to 00e3b61f has its CatchHandler @ 00d3b724 */
  *(undefined8 *)(this + 0x13c) = *(undefined8 *)(this + 0x98);
  *(undefined8 *)(this + 0x134) = *(undefined8 *)(this + 0x90);
  *(undefined8 *)(this + 0x14c) = *(undefined8 *)(this + 0xa8);
  *(undefined8 *)(this + 0x144) = *(undefined8 *)(this + 0xa0);
  *(undefined8 *)(this + 0x15c) = *(undefined8 *)(this + 0xb8);
  *(undefined8 *)(this + 0x154) = *(undefined8 *)(this + 0xb0);
  puVar1 = *(undefined8 **)(this + 0xd0);
  for (puVar2 = *(undefined8 **)(this + 200); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    resetPose((Bone3D *)*puVar2);
  }
  return;
}

