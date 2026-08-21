
/* cocos2d::renderer::EffectVariant::EffectVariant(cocos2d::renderer::Effect*) */

void __thiscall cocos2d::renderer::EffectVariant::EffectVariant(EffectVariant *this,Effect *param_1)

{
  EffectBase::EffectBase((EffectBase *)this);
                    /* try { // try from 009d4014 to 00ad402f has its CatchHandler @ 009d412c */
  *(undefined8 *)(this + 0x10) = 0;
  this[0x18] = (EffectVariant)0x0;
  *(undefined ***)this = &PTR__EffectVariant_01c6bb80;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
                    /* try { // try from 009d4030 to 00ad413f has its CatchHandler @ 009d3f94 */
  setEffect(this,param_1);
  return;
}

