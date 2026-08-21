
/* v8::internal::ContextFilter::OnMoveEvent(unsigned long, unsigned long) */

void __thiscall
v8::internal::ContextFilter::OnMoveEvent(ContextFilter *this,ulong param_1,ulong param_2)

{
  if (*(ulong *)this == param_1) {
    *(ulong *)this = param_2;
  }
  return;
}

