
/* v8::internal::JSStackFrame::JSStackFrame(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::JSFunction>,
   v8::internal::Handle<v8::internal::AbstractCode>, int) */

void __thiscall
v8::internal::JSStackFrame::JSStackFrame
          (JSStackFrame *this,undefined8 param_1,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined4 param_6)

{
  *(undefined8 *)(this + 0x10) = param_3;
  *(undefined8 *)(this + 0x18) = param_4;
  *(undefined8 *)(this + 0x20) = param_5;
  *(undefined ***)this = &PTR__StackFrameBase_01ca5f70;
  *(undefined8 *)(this + 8) = param_1;
  *(undefined4 *)(this + 0x28) = param_6;
  this[0x2c] = (JSStackFrame)0x0;
  this[0x30] = (JSStackFrame)0x0;
  this[0x34] = (JSStackFrame)((byte)this[0x34] & 0xf4);
  return;
}

