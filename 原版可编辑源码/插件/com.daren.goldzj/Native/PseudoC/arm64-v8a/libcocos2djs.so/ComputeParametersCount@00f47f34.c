
/* v8::internal::BuiltinFrame::ComputeParametersCount() const */

int __thiscall v8::internal::BuiltinFrame::ComputeParametersCount(BuiltinFrame *this)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(long *)this + 0x90))(this,0);
  return *piVar1 >> 1;
}

