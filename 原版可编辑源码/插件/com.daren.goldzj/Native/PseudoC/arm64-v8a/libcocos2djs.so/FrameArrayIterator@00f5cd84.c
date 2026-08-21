
/* v8::internal::FrameArrayIterator::FrameArrayIterator(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::FrameArray>, int) */

void __thiscall
v8::internal::FrameArrayIterator::FrameArrayIterator
          (FrameArrayIterator *this,undefined8 param_1,undefined8 param_3,undefined4 param_4)

{
  *(undefined8 *)this = param_1;
  *(undefined8 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0x10) = param_4;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  this[0xa4] = (FrameArrayIterator)0x0;
  this[0xa8] = (FrameArrayIterator)0x0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined ***)(this + 0x18) = &PTR__StackFrameBase_01ca6130;
  *(undefined ***)(this + 0x48) = &PTR__StackFrameBase_01ca6210;
  *(undefined ***)(this + 0x78) = &PTR__StackFrameBase_01ca5f70;
  *(undefined8 *)(this + 0x88) = 0;
  return;
}

