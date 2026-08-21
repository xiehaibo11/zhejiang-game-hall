
/* cocos2d::PUDoPlacementParticleEventHandler::particleEmitted(cocos2d::PUParticleSystem3D*,
   cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PUDoPlacementParticleEventHandler::particleEmitted
          (PUDoPlacementParticleEventHandler *this,PUParticleSystem3D *param_1,PUParticle3D *param_2
          )

{
  long lVar1;
  undefined8 uVar2;
  
  if (((param_2 != (PUParticle3D *)0x0) && (lVar1 = *(long *)(this + 0xb0), lVar1 != 0)) &&
     (*(long *)(this + 0xa0) == *(long *)(param_2 + 0x80))) {
    if (this[0xb8] != (PUDoPlacementParticleEventHandler)0x0) {
      uVar2 = *(undefined8 *)(lVar1 + 8);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
      *(undefined8 *)(param_2 + 8) = uVar2;
      uVar2 = *(undefined8 *)(lVar1 + 8);
      *(undefined4 *)(param_2 + 0x9c) = *(undefined4 *)(lVar1 + 0x10);
      *(undefined8 *)(param_2 + 0x94) = uVar2;
    }
    if (this[0xb9] != (PUDoPlacementParticleEventHandler)0x0) {
      lVar1 = *(long *)(this + 0xb0);
      uVar2 = *(undefined8 *)(lVar1 + 0xac);
      *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(lVar1 + 0xb4);
      *(undefined8 *)(param_2 + 0xac) = uVar2;
      uVar2 = *(undefined8 *)(lVar1 + 0xac);
      *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(lVar1 + 0xb4);
      *(undefined8 *)(param_2 + 0xb8) = uVar2;
      lVar1 = *(long *)(this + 0xb0);
      *(undefined4 *)(param_2 + 0xcc) = *(undefined4 *)(lVar1 + 0xcc);
      *(undefined8 *)(param_2 + 0xc4) = *(undefined8 *)(lVar1 + 0xc4);
    }
    if (((this[0xba] != (PUDoPlacementParticleEventHandler)0x0) &&
        (lVar1 = *(long *)(this + 0xb0), *(int *)(lVar1 + 0x90) == 0)) &&
       (*(int *)(param_2 + 0x90) == 0)) {
      uVar2 = *(undefined8 *)(lVar1 + 0x14);
      *(undefined8 *)(param_2 + 0x1c) = *(undefined8 *)(lVar1 + 0x1c);
      *(undefined8 *)(param_2 + 0x14) = uVar2;
      uVar2 = *(undefined8 *)(*(long *)(this + 0xb0) + 0xf0);
      *(undefined8 *)(param_2 + 0xf8) = *(undefined8 *)(*(long *)(this + 0xb0) + 0xf8);
      *(undefined8 *)(param_2 + 0xf0) = uVar2;
    }
    if (this[0xbb] != (PUDoPlacementParticleEventHandler)0x0) {
      lVar1 = *(long *)(this + 0xb0);
      *(undefined8 *)(param_2 + 300) = *(undefined8 *)(lVar1 + 300);
      *(undefined4 *)(param_2 + 0x134) = *(undefined4 *)(lVar1 + 0x134);
    }
    if (this[0xbc] != (PUDoPlacementParticleEventHandler)0x0) {
      *(undefined4 *)(param_2 + 0x138) = *(undefined4 *)(*(long *)(this + 0xb0) + 0x138);
    }
    if (((this[0xbd] != (PUDoPlacementParticleEventHandler)0x0) &&
        (lVar1 = *(long *)(this + 0xb0), *(int *)(lVar1 + 0x90) == 0)) &&
       (*(int *)(param_2 + 0x90) == 0)) {
      *(undefined8 *)(param_2 + 0x13c) = *(undefined8 *)(lVar1 + 0x13c);
      *(undefined2 *)(param_2 + 0x144) = *(undefined2 *)(lVar1 + 0x144);
      param_2[0x146] = *(PUParticle3D *)(lVar1 + 0x146);
    }
    if (((this[0xbe] != (PUDoPlacementParticleEventHandler)0x0) &&
        (lVar1 = *(long *)(this + 0xb0), *(int *)(lVar1 + 0x90) == 0)) &&
       (*(int *)(param_2 + 0x90) == 0)) {
      uVar2 = *(undefined8 *)(lVar1 + 0x24);
      *(undefined8 *)(param_2 + 0x2c) = *(undefined8 *)(lVar1 + 0x2c);
      *(undefined8 *)(param_2 + 0x24) = uVar2;
      uVar2 = *(undefined8 *)(*(long *)(this + 0xb0) + 0xdc);
      *(undefined8 *)(param_2 + 0xe4) = *(undefined8 *)(*(long *)(this + 0xb0) + 0xe4);
      *(undefined8 *)(param_2 + 0xdc) = uVar2;
    }
    if (((this[0xbf] != (PUDoPlacementParticleEventHandler)0x0) &&
        (*(int *)(*(long *)(this + 0xb0) + 0x90) == 0)) && (*(int *)(param_2 + 0x90) == 0)) {
      PUParticle3D::setOwnDimensions
                (param_2,*(float *)(*(long *)(this + 0xb0) + 0x44),*(float *)(param_2 + 0x48),
                 *(float *)(param_2 + 0x4c));
    }
    if (((this[0xc0] != (PUDoPlacementParticleEventHandler)0x0) &&
        (*(int *)(*(long *)(this + 0xb0) + 0x90) == 0)) && (*(int *)(param_2 + 0x90) == 0)) {
      PUParticle3D::setOwnDimensions
                (param_2,*(float *)(param_2 + 0x44),*(float *)(*(long *)(this + 0xb0) + 0x48),
                 *(float *)(param_2 + 0x4c));
    }
    if (((this[0xc1] != (PUDoPlacementParticleEventHandler)0x0) &&
        (*(int *)(*(long *)(this + 0xb0) + 0x90) == 0)) && (*(int *)(param_2 + 0x90) == 0)) {
      PUParticle3D::setOwnDimensions
                (param_2,*(float *)(param_2 + 0x44),*(float *)(param_2 + 0x48),
                 *(float *)(*(long *)(this + 0xb0) + 0x4c));
      return;
    }
  }
  return;
}

