
/* v8::internal::RegExpStack::ThreadLocal::ResetToStaticStack(v8::internal::RegExpStack*) */

void __thiscall
v8::internal::RegExpStack::ThreadLocal::ResetToStaticStack(ThreadLocal *this,RegExpStack *param_1)

{
  if ((this[0x20] != (ThreadLocal)0x0) && (*(void **)this != (void *)0x0)) {
    operator_delete__(*(void **)this);
  }
  *(RegExpStack **)this = param_1;
  *(RegExpStack **)(this + 8) = param_1 + 0x200;
  *(undefined8 *)(this + 0x10) = 0x200;
  *(RegExpStack **)(this + 0x18) = param_1 + 0x100;
  this[0x20] = (ThreadLocal)0x0;
  return;
}

