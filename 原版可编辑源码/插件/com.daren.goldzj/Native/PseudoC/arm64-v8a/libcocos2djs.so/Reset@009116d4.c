
/* tinyxml2::StrPair::Reset() */

void __thiscall tinyxml2::StrPair::Reset(StrPair *this)

{
  if ((((byte)this[1] >> 1 & 1) != 0) && (*(void **)(this + 8) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 8));
  }
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}

