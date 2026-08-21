
/* cocos2d::renderer::ModelBatcher::setCurrentEffect(cocos2d::renderer::EffectVariant*) */

void __thiscall
cocos2d::renderer::ModelBatcher::setCurrentEffect(ModelBatcher *this,EffectVariant *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x60);
  if (this_00 != (Ref *)param_1) {
                    /* try { // try from 009d2490 to 00ad24a3 has its CatchHandler @ 009d3370 */
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(EffectVariant **)(this + 0x60) = param_1;
    if (param_1 != (EffectVariant *)0x0) {
                    /* try { // try from 009d24a4 to 00ad24f7 has its CatchHandler @ 009d2270 */
      Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

