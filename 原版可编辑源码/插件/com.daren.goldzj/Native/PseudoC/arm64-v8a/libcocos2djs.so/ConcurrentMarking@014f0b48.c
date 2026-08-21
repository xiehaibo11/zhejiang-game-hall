
/* v8::internal::ConcurrentMarking::ConcurrentMarking(v8::internal::Heap*,
   v8::internal::Worklist<v8::internal::HeapObject, 64>*,
   v8::internal::Worklist<v8::internal::HeapObject, 64>*,
   v8::internal::Worklist<v8::internal::HeapObject, 16>*, v8::internal::WeakObjects*) */

void __thiscall
v8::internal::ConcurrentMarking::ConcurrentMarking
          (ConcurrentMarking *this,Heap *param_1,Worklist *param_2,Worklist *param_3,
          Worklist *param_4,WeakObjects *param_5)

{
  *(Heap **)this = param_1;
  *(Worklist **)(this + 8) = param_2;
  *(Worklist **)(this + 0x10) = param_3;
  *(Worklist **)(this + 0x18) = param_4;
  *(WeakObjects **)(this + 0x20) = param_5;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x428) = 0;
  this[0x430] = (ConcurrentMarking)0x0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x50) = 0x3f800000;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xd0) = 0x3f800000;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x150) = 0x3f800000;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1d0) = 0x3f800000;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x250) = 0x3f800000;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2d0) = 0x3f800000;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined4 *)(this + 0x350) = 0x3f800000;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined4 *)(this + 0x3d0) = 0x3f800000;
  base::Mutex::Mutex((Mutex *)(this + 0x434));
  base::ConditionVariable::ConditionVariable((ConditionVariable *)(this + 0x45c));
  *(undefined8 *)(this + 0x4c4) = 0;
  *(undefined8 *)(this + 0x4bc) = 0;
  *(undefined8 *)(this + 0x4d4) = 0;
  *(undefined8 *)(this + 0x4cc) = 0;
  *(undefined8 *)(this + 0x4a4) = 0;
  *(undefined8 *)(this + 0x49c) = 0;
  *(undefined8 *)(this + 0x4b4) = 0;
  *(undefined8 *)(this + 0x4ac) = 0;
  *(undefined8 *)(this + 0x494) = 0;
  *(undefined8 *)(this + 0x48c) = 0;
  return;
}

