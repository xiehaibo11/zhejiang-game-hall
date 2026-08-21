
/* v8::internal::InterpretedFrame::WriteInterpreterRegister(int, v8::internal::Object) */

void __thiscall
v8::internal::InterpretedFrame::WriteInterpreterRegister
          (InterpretedFrame *this,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*(long *)this + 0x90))();
  *puVar1 = param_3;
  return;
}

