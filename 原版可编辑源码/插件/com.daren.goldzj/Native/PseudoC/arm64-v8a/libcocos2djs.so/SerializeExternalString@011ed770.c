
/* v8::internal::Serializer::ObjectSerializer::SerializeExternalString() */

void __thiscall
v8::internal::Serializer::ObjectSerializer::SerializeExternalString(ObjectSerializer *this)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_18;
  
  uVar1 = *(ulong *)(this + 0x10);
  uVar3 = *(ulong *)(uVar1 + 0xb);
  local_18 = uVar1;
  uVar2 = ExternalReferenceEncoder::TryEncode
                    ((ExternalReferenceEncoder *)(*(long *)(this + 8) + 0x88),uVar3);
  if ((uVar2 & 0xff) == 0) {
    SerializeExternalStringAsSequentialString(this);
  }
  else {
    *(ulong *)(uVar1 + 0xb) = uVar2 >> 0x20 & 0x7fffffff;
    if ((*(byte *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 - 1)) + 7) >> 4 & 1) == 0) {
      *(undefined8 *)(uVar1 + 0x13) = 0;
    }
    SerializeObject(this);
    ExternalString::set_address_as_resource((ExternalString *)&local_18,uVar3);
  }
  return;
}

