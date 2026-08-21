
/* cocos2d::PUEmitter::setDynDuration(cocos2d::PUDynamicAttribute*) */

void __thiscall cocos2d::PUEmitter::setDynDuration(PUEmitter *this,PUDynamicAttribute *param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  if (*(long **)(this + 0x138) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x138) + 8))();
  }
  *(PUDynamicAttribute **)(this + 0x138) = param_1;
  this[0x19c] = (PUEmitter)0x1;
  if (this[0x34] == (PUEmitter)0x0) {
    if (this[0x1a4] != (PUEmitter)0x0) {
      uVar2 = PUDynamicAttributeHelper::calculate
                        ((PUDynamicAttributeHelper *)(this + 0x194),
                         *(PUDynamicAttribute **)(this + 0x140),
                         *(float *)(*(long *)(this + 0x28) + 0x440),0.0);
      *(undefined4 *)(this + 0x1a0) = uVar2;
    }
  }
  else {
    fVar1 = (float)PUDynamicAttributeHelper::calculate
                             ((PUDynamicAttributeHelper *)(this + 0x194),param_1,
                              *(float *)(*(long *)(this + 0x28) + 0x440),0.0);
    *(float *)(this + 0x198) = fVar1;
    if (0.0 < fVar1) {
      this[0x34] = (PUEmitter)0x1;
      *(undefined4 *)(this + 0x1a0) = 0;
    }
  }
  return;
}

