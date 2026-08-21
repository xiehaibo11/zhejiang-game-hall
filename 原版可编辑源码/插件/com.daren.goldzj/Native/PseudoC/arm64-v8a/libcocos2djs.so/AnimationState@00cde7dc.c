
/* spine::AnimationState::AnimationState(spine::AnimationStateData*) */

void __thiscall
spine::AnimationState::AnimationState(AnimationState *this,AnimationStateData *param_1)

{
  undefined8 *puVar1;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(AnimationStateData **)(this + 0x20) = param_1;
  *(undefined ***)(this + 8) = &PTR__AnimationState_01c8e420;
  *(undefined ***)this = &PTR__AnimationState_01c8e400;
  *(undefined ***)(this + 0x30) = &PTR__Vector_01c8d010;
  *(undefined ***)(this + 0x28) = &PTR__Pool_01c8e580;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)(this + 0x50) = &PTR__Vector_01c8d010;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined ***)(this + 0x70) = &PTR__Vector_01c8d0b8;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  puVar1 = SpineObject::operator_new
                     (0x40,
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.cpp"
                      ,0xc4);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = this;
  puVar1[6] = this + 0x28;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[1] = &PTR__Vector_01c8e548;
  *puVar1 = &PTR__EventQueue_01c8e3e0;
  *(undefined8 **)(this + 0x90) = puVar1;
  *(undefined ***)(this + 0x98) = &PTR__HashMap_01c8e310;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  this[0xb0] = (AnimationState)0x0;
  *(code **)(this + 0xb8) = dummyOnAnimationEventFunc;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 200) = 0x3f800000;
  return;
}

