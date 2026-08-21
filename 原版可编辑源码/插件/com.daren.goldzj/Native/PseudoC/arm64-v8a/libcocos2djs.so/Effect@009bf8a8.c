
/* cocos2d::renderer::Effect::Effect() */

void __thiscall cocos2d::renderer::Effect::Effect(Effect *this)

{
                    /* try { // try from 009bf8ac to 00abf8c3 has its CatchHandler @ 009bfac0 */
  EffectBase::EffectBase((EffectBase *)this);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 009bf8cc to 00abf8d7 has its CatchHandler @ 009bfabc */
  *(undefined ***)this = &PTR__Effect_01c6b1a0;
                    /* try { // try from 009bf8d8 to 00abf8e3 has its CatchHandler @ 009bfab8 */
  return;
}

