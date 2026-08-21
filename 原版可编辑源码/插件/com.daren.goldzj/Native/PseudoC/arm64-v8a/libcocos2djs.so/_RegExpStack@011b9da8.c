
/* v8::internal::RegExpStack::~RegExpStack() */

void __thiscall v8::internal::RegExpStack::~RegExpStack(RegExpStack *this)

{
  void *pvVar1;
  
  if ((this[0x220] != (RegExpStack)0x0) &&
     (pvVar1 = *(void **)(this + 0x200), pvVar1 != (void *)0x0)) {
    operator_delete__(pvVar1);
  }
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0xffffffffffffffff;
  return;
}

