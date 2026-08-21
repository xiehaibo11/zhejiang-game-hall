
/* cocos2d::renderer::Assembler::IARenderData::setEffect(cocos2d::renderer::EffectVariant*) */

void __thiscall
cocos2d::renderer::Assembler::IARenderData::setEffect(IARenderData *this,EffectVariant *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)this;
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(EffectVariant **)this = param_1;
    if (param_1 != (EffectVariant *)0x0) {
      Ref::retain((Ref *)param_1);
      return;
    }
  }
                    /* try { // try from 009cd760 to 00acd7e3 has its CatchHandler @ 009cd4bc */
  return;
}

