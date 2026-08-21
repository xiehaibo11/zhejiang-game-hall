
/* cocos2d::PUEmitter::initParticleOrientation(cocos2d::PUParticle3D*) */

void __thiscall cocos2d::PUEmitter::initParticleOrientation(PUEmitter *this,PUParticle3D *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (this[0xf0] == (PUEmitter)0x0) {
    uVar2 = *(undefined8 *)(this + 0xc0);
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(this + 200);
    *(undefined8 *)(param_1 + 0x14) = uVar2;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e31b9c with catch @ 00e31be0
                        */
    iVar1 = rand();
    Quaternion::lerp((Quaternion *)(this + 0xd0),(Quaternion *)(this + 0xe0),
                     (float)iVar1 * 4.656613e-10,(Quaternion *)(param_1 + 0x14));
  }
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x14);
  return;
}

