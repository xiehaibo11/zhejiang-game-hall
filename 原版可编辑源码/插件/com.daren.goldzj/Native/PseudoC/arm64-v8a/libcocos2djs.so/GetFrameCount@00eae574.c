
/* v8::StackTrace::GetFrameCount() const */

int __thiscall v8::StackTrace::GetFrameCount(StackTrace *this)

{
  return *(int *)(*(long *)this + 3) >> 1;
}

