
/* v8::internal::compiler::Frame::Frame(int) */

void __thiscall v8::internal::compiler::Frame::Frame(Frame *this,int param_1)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}

