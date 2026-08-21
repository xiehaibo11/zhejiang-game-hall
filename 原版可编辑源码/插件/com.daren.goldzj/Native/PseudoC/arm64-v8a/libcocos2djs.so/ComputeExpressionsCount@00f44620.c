
/* v8::internal::StandardFrame::ComputeExpressionsCount() const */

ulong __thiscall v8::internal::StandardFrame::ComputeExpressionsCount(StandardFrame *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x90))(this,0);
  return (lVar1 - *(long *)(this + 0x18)) + 8U >> 3;
}

