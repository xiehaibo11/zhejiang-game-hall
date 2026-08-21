
/* v8::internal::ValueSerializer::Release() */

undefined1  [16] __thiscall v8::internal::ValueSerializer::Release(ValueSerializer *this)

{
  undefined1 auVar1 [16];
  
  auVar1 = *(undefined1 (*) [16])(this + 0x10);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return auVar1;
}

