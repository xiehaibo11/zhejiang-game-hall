
/* cocos2d::PUEmitter::initParticlePosition(cocos2d::PUParticle3D*) */

void __thiscall cocos2d::PUEmitter::initParticlePosition(PUEmitter *this,PUParticle3D *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)getDerivedPosition();
  uVar3 = *puVar2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(puVar2 + 1);
  *(undefined8 *)(param_1 + 8) = uVar3;
  uVar1 = *(undefined4 *)(puVar2 + 1);
  *(undefined8 *)(param_1 + 0x94) = *puVar2;
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 8);
  return;
}

