
/* v8::internal::Serializer::ObjectSerializer::SerializeJSTypedArray() */

void __thiscall
v8::internal::Serializer::ObjectSerializer::SerializeJSTypedArray(ObjectSerializer *this)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 0x10);
  if (*(uint *)(uVar2 + 0x2f) == *(uint *)(uVar2 + 7)) {
    uVar1 = *(long *)(uVar2 + 0x27) - (uVar2 & 0xffffffff00000000);
  }
  else {
    uVar1 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xb);
    if ((*(uint *)(uVar1 + 0x1b) >> 2 & 1) == 0) {
      uVar1 = *(ulong *)(uVar1 + 0xb);
      if (uVar1 >> 0x1e != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","buffer.byte_length() <= Smi::kMaxValue");
      }
      if (*(ulong *)(uVar2 + 0xf) >> 0x1e != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","typed_array.byte_offset() <= Smi::kMaxValue");
      }
      uVar1 = SerializeBackingStore
                        (this,(void *)(((ulong)*(uint *)(uVar2 + 0x2f) - *(ulong *)(uVar2 + 0xf)) +
                                      *(long *)(uVar2 + 0x27)),(int)uVar1);
      uVar1 = uVar1 & 0xffffffff;
      *(undefined4 *)(uVar2 + 0x2f) = 0;
    }
    else {
      uVar1 = 0;
      *(undefined4 *)(uVar2 + 0x2f) = 0;
    }
  }
  *(ulong *)(uVar2 + 0x27) = uVar1;
  SerializeObject(this);
  return;
}

