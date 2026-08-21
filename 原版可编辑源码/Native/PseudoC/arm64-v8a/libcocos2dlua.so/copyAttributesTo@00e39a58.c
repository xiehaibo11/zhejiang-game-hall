
/* cocos2d::PUSphereSurfaceEmitter::copyAttributesTo(cocos2d::PUEmitter*) */

void __thiscall
cocos2d::PUSphereSurfaceEmitter::copyAttributesTo(PUSphereSurfaceEmitter *this,PUEmitter *param_1)

{
  PUEmitter::copyAttributesTo((PUEmitter *)this,param_1);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(this + 0x1fc);
  return;
}

