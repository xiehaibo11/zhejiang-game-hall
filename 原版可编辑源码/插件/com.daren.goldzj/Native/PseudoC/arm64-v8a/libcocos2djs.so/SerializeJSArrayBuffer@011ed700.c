
/* v8::internal::Serializer::ObjectSerializer::SerializeJSArrayBuffer() */

void __thiscall
v8::internal::Serializer::ObjectSerializer::SerializeJSArrayBuffer(ObjectSerializer *this)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x10);
  if (*(ulong *)(lVar3 + 0xb) >> 0x1e == 0) {
    pvVar2 = *(void **)(lVar3 + 0x13);
    if (pvVar2 != (void *)0x0) {
      uVar1 = SerializeBackingStore(this,pvVar2,(int)*(ulong *)(lVar3 + 0xb));
      *(ulong *)(lVar3 + 0x13) = uVar1 & 0xffffffff;
    }
    SerializeObject(this);
    *(void **)(lVar3 + 0x13) = pvVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","buffer.byte_length() <= Smi::kMaxValue");
}

