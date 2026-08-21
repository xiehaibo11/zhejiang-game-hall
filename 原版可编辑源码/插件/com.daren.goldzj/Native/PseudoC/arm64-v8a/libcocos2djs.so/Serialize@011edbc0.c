
/* v8::internal::Serializer::ObjectSerializer::Serialize() */

void __thiscall v8::internal::Serializer::ObjectSerializer::Serialize(ObjectSerializer *this)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_28;
  
  if (FLAG_trace_serializer != '\0') {
    PrintF(" Encoding heap object: ");
    Object::ShortPrint((Object *)(this + 0x10),(__sFILE *)waitpid);
    PrintF("\n");
  }
  uVar1 = *(ulong *)(this + 0x10);
  uVar2 = uVar1 & 0xffffffff00000000 | 7;
  if ((*(ushort *)(uVar2 + *(uint *)(uVar1 - 1)) < 0x40) &&
     ((*(ushort *)(uVar2 + *(uint *)(uVar1 - 1)) & 7) == 2)) {
    SerializeExternalString(this);
    return;
  }
  uVar1 = ReadOnlyHeap::Contains();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(this + 0x10);
    uVar2 = uVar1 & 0xffffffff00000000 | 7;
    if (((*(ushort *)(uVar2 + *(uint *)(uVar1 - 1)) < 0x40) &&
        ((*(byte *)(uVar2 + *(uint *)(uVar1 - 1)) & 7) == 0)) &&
       ((*(byte *)(uVar2 + *(uint *)(uVar1 - 1)) >> 3 & 1) != 0)) {
      local_28 = uVar1;
      SeqOneByteString::clear_padding((SeqOneByteString *)&local_28);
    }
    else if (((*(ushort *)(uVar2 + *(uint *)(uVar1 - 1)) < 0x40) &&
             ((*(byte *)(uVar2 + *(uint *)(uVar1 - 1)) & 7) == 0)) &&
            ((*(byte *)(uVar2 + *(uint *)(uVar1 - 1)) >> 3 & 1) == 0)) {
      local_28 = uVar1;
      SeqTwoByteString::clear_padding((SeqTwoByteString *)&local_28);
    }
  }
  uVar2 = *(ulong *)(this + 0x10);
  uVar1 = uVar2 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar1 + *(uint *)(uVar2 - 1)) == 0x41b) {
    SerializeJSTypedArray(this);
  }
  else if (*(short *)(uVar1 + *(uint *)(uVar2 - 1)) == 0x424) {
    SerializeJSArrayBuffer(this);
  }
  else {
    if (*(short *)(uVar1 + *(uint *)(uVar2 - 1)) == 0x65) {
      uVar1 = *(ulong *)(*(long *)(*(long *)(this + 8) + 0x68) + 0xa0);
      *(int *)(uVar2 + 0x1b) = (int)uVar1;
      if ((uVar1 & 1) != 0) {
        uVar3 = *(ulong *)((uVar1 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar3 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar2,uVar2 + 0x1b,uVar1);
          uVar3 = *(ulong *)(uVar1 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar2,uVar2 + 0x1b,uVar1);
        }
      }
    }
    SerializeObject(this);
  }
  return;
}

