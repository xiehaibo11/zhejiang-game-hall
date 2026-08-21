
/* v8::internal::Script::Iterator::Iterator(v8::internal::Isolate*) */

void __thiscall v8::internal::Script::Iterator::Iterator(Iterator *this,Isolate *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf58);
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 8) = uVar1;
  return;
}

