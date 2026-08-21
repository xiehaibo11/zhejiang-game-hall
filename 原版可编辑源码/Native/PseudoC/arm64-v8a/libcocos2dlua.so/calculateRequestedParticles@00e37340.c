
/* cocos2d::PUMeshSurfaceEmitter::calculateRequestedParticles(float) */

undefined8 __thiscall
cocos2d::PUMeshSurfaceEmitter::calculateRequestedParticles(PUMeshSurfaceEmitter *this,float param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x238) != 0) {
    uVar1 = PUEmitter::calculateRequestedParticles((PUEmitter *)this,param_1);
    return uVar1;
  }
  return 0;
}

