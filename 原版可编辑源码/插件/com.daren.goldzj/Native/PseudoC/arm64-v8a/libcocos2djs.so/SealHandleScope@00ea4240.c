
/* v8::SealHandleScope::SealHandleScope(v8::Isolate*) */

void __thiscall v8::SealHandleScope::SealHandleScope(SealHandleScope *this,Isolate *param_1)

{
  *(Isolate **)this = param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x95a8);
  *(undefined8 *)(param_1 + 0x95a8) = *(undefined8 *)(param_1 + 0x95a0);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x95b4);
  *(undefined4 *)(param_1 + 0x95b4) = *(undefined4 *)(param_1 + 0x95b0);
  return;
}

