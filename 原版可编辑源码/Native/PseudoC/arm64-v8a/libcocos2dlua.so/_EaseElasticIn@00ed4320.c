
/* cocos2d::EaseElasticIn::~EaseElasticIn() */

void __thiscall cocos2d::EaseElasticIn::~EaseElasticIn(EaseElasticIn *this)

{
  *(undefined ***)this = &PTR__ActionEase_016f5ab0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  Action::~Action((Action *)this);
                    /* try { // try from 00ed4360 to 00fd4577 has its CatchHandler @ 00ed45a8 */
  operator_delete(this);
  return;
}

