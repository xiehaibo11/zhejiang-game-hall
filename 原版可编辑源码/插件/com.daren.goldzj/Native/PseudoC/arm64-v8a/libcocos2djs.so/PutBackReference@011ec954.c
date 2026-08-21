
/* v8::internal::Serializer::PutBackReference(v8::internal::HeapObject,
   v8::internal::SerializerReference) */

void __thiscall
v8::internal::Serializer::PutBackReference(Serializer *this,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  
  uVar1 = (uint)param_3 & 0xf;
  if ((uVar1 != 5) && (uVar1 != 4)) {
    SnapshotByteSink::PutInt((ulong)(this + 0x50),(char *)(param_3 >> 4 & 0xfffffff));
  }
  SnapshotByteSink::PutInt((ulong)(this + 0x50),(char *)(param_3 >> 0x20));
  *(undefined8 *)(this + (long)*(int *)(this + 0x48) * 8 + 8) = param_2;
  *(uint *)(this + 0x48) = *(int *)(this + 0x48) + 1U & 7;
  return;
}

