
/* cocos2d::ParticleSystem::setBatchNode(cocos2d::ParticleBatchNode*) */

void __thiscall
cocos2d::ParticleSystem::setBatchNode(ParticleSystem *this,ParticleBatchNode *param_1)

{
  long lVar1;
  long lVar2;
  
  if (((*(ParticleBatchNode **)(this + 0x460) != param_1) &&
      (*(ParticleBatchNode **)(this + 0x460) = param_1, param_1 != (ParticleBatchNode *)0x0)) &&
     (0 < *(int *)(this + 0x508))) {
    lVar1 = *(long *)(this + 0x3f0);
    lVar2 = 0;
    do {
      *(int *)(lVar1 + lVar2 * 4) = (int)lVar2;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x508));
  }
  return;
}

