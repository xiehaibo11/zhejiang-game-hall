
/* v8::internal::InterpretedFrame::position() const */

void __thiscall v8::internal::InterpretedFrame::position(InterpretedFrame *this)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 local_8;
  
  puVar1 = (undefined8 *)(**(code **)(*(long *)this + 0x90))(this,0xfffffffe);
  local_8 = *puVar1;
  piVar2 = (int *)(**(code **)(*(long *)this + 0x90))(this,0xffffffff);
  AbstractCode::SourcePosition((AbstractCode *)&local_8,(*piVar2 >> 1) + -0x21);
  return;
}

