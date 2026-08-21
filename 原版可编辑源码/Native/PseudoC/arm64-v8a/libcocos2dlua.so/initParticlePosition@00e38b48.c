
/* cocos2d::PUSlaveEmitter::initParticlePosition(cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PUSlaveEmitter::initParticlePosition(PUSlaveEmitter *this,PUParticle3D *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0x240);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0x248);
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)(this + 0x240);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(this + 0x248);
  *(undefined8 *)(param_1 + 0x94) = uVar1;
  return;
}

