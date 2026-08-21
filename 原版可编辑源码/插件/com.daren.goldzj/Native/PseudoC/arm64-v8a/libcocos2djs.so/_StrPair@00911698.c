
/* tinyxml2::StrPair::~StrPair() */

void __thiscall tinyxml2::StrPair::~StrPair(StrPair *this)

{
  void *pvVar1;
  
  if ((((byte)this[1] >> 1 & 1) != 0) && (pvVar1 = *(void **)(this + 8), pvVar1 != (void *)0x0)) {
    operator_delete__(pvVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}

