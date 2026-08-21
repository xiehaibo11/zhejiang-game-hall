
/* v8::internal::StringSharedKey::AsHandle(v8::internal::Isolate*) */

ulong * __thiscall v8::internal::StringSharedKey::AsHandle(StringSharedKey *this,Isolate *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)Factory::NewFixedArray((Factory *)param_1,4,0);
  uVar4 = *puVar1;
  uVar3 = **(ulong **)(this + 0x18);
  *(int *)(uVar4 + 7) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 7,uVar3);
      uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 7,uVar3);
    }
  }
  uVar4 = *puVar1;
  uVar3 = **(ulong **)(this + 0x10);
  *(int *)(uVar4 + 0xb) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 0xb,uVar3);
      uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0xb,uVar3);
    }
  }
  *(uint *)(*puVar1 + 0xf) = (uint)(byte)this[0x20] << 1;
  *(int *)(*puVar1 + 0x13) = *(int *)(this + 0x24) << 1;
  uVar3 = *(ulong *)(param_1 + 0xe8);
  uVar4 = *puVar1;
  if ((int)uVar3 == 0) {
    *(undefined4 *)(uVar4 - 1) = 0;
  }
  else {
    Heap::VerifyObjectLayoutChange((Heap *)(uVar4 & 0xffffffff00000000 | 0x8850),uVar4,uVar3);
    *(int *)(uVar4 - 1) = (int)uVar3;
    if (((uVar3 & 1) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
      Heap_MarkingBarrierSlow(uVar4,0,uVar3);
    }
  }
  return puVar1;
}

