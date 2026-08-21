
/* cocos2d::PUCircleEmitter::copyAttributesTo(cocos2d::PUEmitter*) */

void __thiscall cocos2d::PUCircleEmitter::copyAttributesTo(PUCircleEmitter *this,PUEmitter *param_1)

{
  undefined8 uVar1;
  
  PUEmitter::copyAttributesTo((PUEmitter *)this,param_1);
  uVar1 = *(undefined8 *)(this + 0x1fc);
  *(undefined8 *)(param_1 + 0x204) = *(undefined8 *)(this + 0x204);
  *(undefined8 *)(param_1 + 0x1fc) = uVar1;
  *(PUCircleEmitter *)(param_1 + 0x214) = this[0x214];
  uVar1 = *(undefined8 *)(this + 0x228);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(this + 0x230);
  *(undefined8 *)(param_1 + 0x228) = uVar1;
  uVar1 = *(undefined8 *)(this + 0x218);
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(this + 0x220);
  *(undefined8 *)(param_1 + 0x218) = uVar1;
  return;
}

