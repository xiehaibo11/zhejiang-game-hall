
/* cocos2d::PUGeometryRotatorTranslator::~PUGeometryRotatorTranslator() */

void __thiscall
cocos2d::PUGeometryRotatorTranslator::~PUGeometryRotatorTranslator
          (PUGeometryRotatorTranslator *this)

{
                    /* try { // try from 00e27cfc to 00f27cff has its CatchHandler @ 00e28a48 */
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
                    /* try { // try from 00e27d00 to 00f281bf has its CatchHandler @ 00e27c78 */
  operator_delete(this);
  return;
}

