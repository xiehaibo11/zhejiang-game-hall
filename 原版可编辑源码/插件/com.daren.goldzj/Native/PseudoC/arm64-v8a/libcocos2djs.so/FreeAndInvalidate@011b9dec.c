
/* v8::internal::RegExpStack::ThreadLocal::FreeAndInvalidate() */

void __thiscall v8::internal::RegExpStack::ThreadLocal::FreeAndInvalidate(ThreadLocal *this)

{
  if ((this[0x20] != (ThreadLocal)0x0) && (*(void **)this != (void *)0x0)) {
    operator_delete__(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0xffffffffffffffff;
  return;
}

