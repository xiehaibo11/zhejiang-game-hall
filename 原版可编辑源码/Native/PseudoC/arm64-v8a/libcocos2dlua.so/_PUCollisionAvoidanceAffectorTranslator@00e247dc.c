
/* cocos2d::PUCollisionAvoidanceAffectorTranslator::~PUCollisionAvoidanceAffectorTranslator() */

void __thiscall
cocos2d::PUCollisionAvoidanceAffectorTranslator::~PUCollisionAvoidanceAffectorTranslator
          (PUCollisionAvoidanceAffectorTranslator *this)

{
                    /* try { // try from 00e247ec to 00f2482f has its CatchHandler @ 00e247ec
                       catch() { ... } // from try @ 00e247ec with catch @ 00e247ec
                       catch() { ... } // from try @ 00e24840 with catch @ 00e247ec
                       catch() { ... } // from try @ 00e24b7c with catch @ 00e247ec
                       catch() { ... } // from try @ 00e24c04 with catch @ 00e247ec
                       catch() { ... } // from try @ 00e24db8 with catch @ 00e247ec */
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)this);
  operator_delete(this);
  return;
}

