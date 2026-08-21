
/* v8::internal::InterpretedFrame::PatchBytecodeArray(v8::internal::BytecodeArray) */

void __thiscall
v8::internal::InterpretedFrame::PatchBytecodeArray(InterpretedFrame *this,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*(long *)this + 0x90))(this,0xfffffffe);
  *puVar1 = param_2;
  return;
}

