
/* v8::internal::RegExpStack::Reset() */

void __thiscall v8::internal::RegExpStack::Reset(RegExpStack *this)

{
  if ((this[0x220] != (RegExpStack)0x0) && (*(void **)(this + 0x200) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x200));
  }
  *(RegExpStack **)(this + 0x200) = this;
  *(RegExpStack **)(this + 0x208) = this + 0x200;
  *(undefined8 *)(this + 0x210) = 0x200;
  *(RegExpStack **)(this + 0x218) = this + 0x100;
  this[0x220] = (RegExpStack)0x0;
  return;
}

