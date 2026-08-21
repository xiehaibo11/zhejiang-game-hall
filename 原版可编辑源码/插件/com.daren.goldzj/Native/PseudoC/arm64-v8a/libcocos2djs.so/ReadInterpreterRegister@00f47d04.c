
/* v8::internal::InterpretedFrame::ReadInterpreterRegister(int) const */

undefined8 v8::internal::InterpretedFrame::ReadInterpreterRegister(int param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*(long *)(ulong)(uint)param_1 + 0x90))();
  return *puVar1;
}

