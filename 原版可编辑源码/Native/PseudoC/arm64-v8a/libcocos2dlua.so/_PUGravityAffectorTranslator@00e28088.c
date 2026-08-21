
/* cocos2d::PUGravityAffectorTranslator::~PUGravityAffectorTranslator() */

void __thiscall
cocos2d::PUGravityAffectorTranslator::~PUGravityAffectorTranslator
          (PUGravityAffectorTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

