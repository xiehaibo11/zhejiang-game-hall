
/* cocos2d::PUBoxColliderTranslator::~PUBoxColliderTranslator() */

void __thiscall
cocos2d::PUBoxColliderTranslator::~PUBoxColliderTranslator(PUBoxColliderTranslator *this)

{
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
                    /* try { // try from 00e24528 to 00f2452f has its CatchHandler @ 00e246d4 */
  operator_delete(this);
  return;
}

