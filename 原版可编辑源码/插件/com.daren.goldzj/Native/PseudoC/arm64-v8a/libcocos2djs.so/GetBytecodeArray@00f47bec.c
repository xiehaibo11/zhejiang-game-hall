
/* v8::internal::InterpretedFrame::GetBytecodeArray() const */

undefined8 __thiscall v8::internal::InterpretedFrame::GetBytecodeArray(InterpretedFrame *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*(long *)this + 0x90))(this,0xfffffffe);
  return *puVar1;
}

