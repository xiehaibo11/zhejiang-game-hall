
/* v8::internal::SerializedCodeData::Payload() const */

undefined1  [16] __thiscall v8::internal::SerializedCodeData::Payload(SerializedCodeData *this)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(this + 8);
  auVar2._8_8_ = (long)*(int *)(lVar1 + 0x14);
  auVar2._0_8_ = lVar1 + (int)(*(int *)(lVar1 + 0x10) * 4 + 0x27U & 0xfffffff8);
  return auVar2;
}

