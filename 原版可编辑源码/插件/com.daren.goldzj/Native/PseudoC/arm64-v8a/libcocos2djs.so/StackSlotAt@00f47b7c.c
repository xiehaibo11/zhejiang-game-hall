
/* v8::internal::OptimizedFrame::StackSlotAt(int) const */

undefined8 __thiscall v8::internal::OptimizedFrame::StackSlotAt(OptimizedFrame *this,int param_1)

{
  return *(undefined8 *)(*(long *)(this + 0x20) + (long)(param_1 * -8 + 8));
}

