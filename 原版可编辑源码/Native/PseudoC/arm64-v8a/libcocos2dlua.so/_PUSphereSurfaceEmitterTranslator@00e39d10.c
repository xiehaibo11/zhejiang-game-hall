
/* cocos2d::PUSphereSurfaceEmitterTranslator::~PUSphereSurfaceEmitterTranslator() */

void __thiscall
cocos2d::PUSphereSurfaceEmitterTranslator::~PUSphereSurfaceEmitterTranslator
          (PUSphereSurfaceEmitterTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

