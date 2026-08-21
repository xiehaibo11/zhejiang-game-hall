
/* v8::SealHandleScope::~SealHandleScope() */

void __thiscall v8::SealHandleScope::~SealHandleScope(SealHandleScope *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  *(undefined8 *)(lVar1 + 0x95a8) = *(undefined8 *)(this + 8);
  *(undefined4 *)(lVar1 + 0x95b4) = *(undefined4 *)(this + 0x10);
  return;
}

