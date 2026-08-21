
/* cocos2d::CCPUBoxEmitter::copyAttributesTo(cocos2d::PUEmitter*) */

void __thiscall cocos2d::CCPUBoxEmitter::copyAttributesTo(CCPUBoxEmitter *this,PUEmitter *param_1)

{
  undefined8 uVar1;
  
  PUEmitter::copyAttributesTo((PUEmitter *)this,param_1);
  uVar1 = *(undefined8 *)(this + 0x1fc);
  *(undefined8 *)(param_1 + 0x204) = *(undefined8 *)(this + 0x204);
  *(undefined8 *)(param_1 + 0x1fc) = uVar1;
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(this + 0x20c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(this + 0x210);
  return;
}

