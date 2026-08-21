
/* cocos2d::PUEmitterManager::PUEmitterManager() */

void __thiscall cocos2d::PUEmitterManager::PUEmitterManager(PUEmitterManager *this)

{
                    /* try { // try from 00e3395c to 00f3397b has its CatchHandler @ 00e339dc */
  CCPUBoxEmitterTranslator::CCPUBoxEmitterTranslator((CCPUBoxEmitterTranslator *)this);
  PUCircleEmitterTranslator::PUCircleEmitterTranslator((PUCircleEmitterTranslator *)(this + 8));
                    /* try { // try from 00e3397c to 00f339ff has its CatchHandler @ 00e33838 */
  PULineEmitterTranslator::PULineEmitterTranslator((PULineEmitterTranslator *)(this + 0x10));
  PUMeshSurfaceEmitterTranslator::PUMeshSurfaceEmitterTranslator
            ((PUMeshSurfaceEmitterTranslator *)(this + 0x18));
  PUPointEmitterTranslator::PUPointEmitterTranslator((PUPointEmitterTranslator *)(this + 0x20));
  PUPositionEmitterTranslator::PUPositionEmitterTranslator
            ((PUPositionEmitterTranslator *)(this + 0x28));
  PUSlaveEmitterTranslator::PUSlaveEmitterTranslator((PUSlaveEmitterTranslator *)(this + 0x30));
  PUSphereSurfaceEmitterTranslator::PUSphereSurfaceEmitterTranslator
            ((PUSphereSurfaceEmitterTranslator *)(this + 0x38));
                    /* catch() { ... } // from try @ 00e33898 with catch @ 00e339c0 */
  return;
}

