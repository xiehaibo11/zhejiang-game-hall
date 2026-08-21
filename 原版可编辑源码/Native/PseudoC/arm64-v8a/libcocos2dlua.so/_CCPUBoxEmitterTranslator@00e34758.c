
/* cocos2d::CCPUBoxEmitterTranslator::~CCPUBoxEmitterTranslator() */

void __thiscall
cocos2d::CCPUBoxEmitterTranslator::~CCPUBoxEmitterTranslator(CCPUBoxEmitterTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

