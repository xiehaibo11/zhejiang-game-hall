
/* v8::internal::FullMaybeObjectSlot
   v8::internal::Deserializer::ReadDataCase<v8::internal::FullMaybeObjectSlot,
   (v8::internal::SerializerDeserializer::Bytecode)16,
   (v8::internal::SnapshotSpace)0>(v8::internal::Isolate*, v8::internal::FullMaybeObjectSlot,
   unsigned long, unsigned char, bool) */

ulong * __thiscall
v8::internal::Deserializer::
ReadDataCase<v8::internal::FullMaybeObjectSlot,(v8::internal::SerializerDeserializer::Bytecode)16,(v8::internal::SnapshotSpace)0>
          (Deserializer *this,long param_1,ulong *param_3,long param_4,undefined8 param_5,
          uint param_6)

{
  long lVar1;
  uint *puVar2;
  Deserializer DVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  DVar3 = this[0x20c];
  this[0x20c] = (Deserializer)0x0;
  puVar2 = (uint *)(*(long *)(this + 0x70) + (long)*(int *)(this + 0x7c));
  uVar4 = *puVar2;
  lVar1 = ((ulong)(byte)*puVar2 & 3) + 1;
  *(int *)(this + 0x7c) = (int)lVar1 + *(int *)(this + 0x7c);
  uVar5 = ((ulong)uVar4 & 0xffffffffUL >> (lVar1 * -8 + 0x20U & 0x3f)) >> 2;
  if (uVar5 < (ulong)(*(long *)(param_1 + 0xc668) - *(long *)(param_1 + 0xc660) >> 3)) {
    uVar5 = *(ulong *)(*(long *)(param_1 + 0xc660) + uVar5 * 8);
    uVar6 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (DVar3 != (Deserializer)0x0) {
      uVar5 = uVar5 | 2;
    }
    *param_3 = uVar5;
    if (((((uVar6 & 0x18) != 0) && ((param_6 & 1) != 0)) && ((int)uVar5 != 3)) &&
       ((((uVar5 & 1) != 0 && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) &&
        ((*(byte *)((param_4 + 1U & 0xfffffffffffc0000) + 8) & 0x18) == 0)))) {
      Heap_GenerationalBarrierSlow(param_4 + 1U,param_3,uVar5 & 0xfffffffffffffffd);
    }
    return param_3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

