
/* cocos2d::PUMeshSurfaceEmitterTranslator::~PUMeshSurfaceEmitterTranslator() */

void __thiscall
cocos2d::PUMeshSurfaceEmitterTranslator::~PUMeshSurfaceEmitterTranslator
          (PUMeshSurfaceEmitterTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

