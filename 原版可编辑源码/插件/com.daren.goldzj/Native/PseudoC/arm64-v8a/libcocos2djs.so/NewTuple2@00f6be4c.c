
/* v8::internal::Factory::NewTuple2(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::AllocationType) */

ulong * __thiscall
v8::internal::Factory::NewTuple2(Factory *this,ulong *param_2,ulong *param_3,undefined4 param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)NewStruct(this,0x6e,param_4);
  uVar4 = *puVar1;
  uVar3 = *param_2;
  *(int *)(uVar4 + 3) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 3,uVar3);
      uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 3,uVar3);
    }
  }
  uVar4 = *puVar1;
  uVar3 = *param_3;
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
  return puVar1;
}

