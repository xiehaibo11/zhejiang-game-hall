
/* v8::internal::ArgumentsAdaptorFrame::ComputeParametersCount() const */

int __thiscall
v8::internal::ArgumentsAdaptorFrame::ComputeParametersCount(ArgumentsAdaptorFrame *this)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(long *)this + 0x90))(this,0);
  return *piVar1 >> 1;
}

