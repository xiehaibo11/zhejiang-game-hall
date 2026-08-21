
/* cocos2d::EaseElasticInOut::~EaseElasticInOut() */

void __thiscall cocos2d::EaseElasticInOut::~EaseElasticInOut(EaseElasticInOut *this)

{
                    /* try { // try from 00ed4578 to 00fd4673 has its CatchHandler @ 00ed42dc */
  *(undefined ***)this = &PTR__ActionEase_016f5ab0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  Action::~Action((Action *)this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ed4360 with catch @ 00ed45a8
                        */
  operator_delete(this);
  return;
}

