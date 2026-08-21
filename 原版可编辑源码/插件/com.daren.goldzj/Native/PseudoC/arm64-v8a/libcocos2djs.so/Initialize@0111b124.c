
/* v8::internal::JSWeakCollection::Initialize(v8::internal::Handle<v8::internal::JSWeakCollection>,
   v8::internal::Isolate*) */

void v8::internal::JSWeakCollection::Initialize(ulong *param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  iVar1 = base::bits::RoundUpToPowerOfTwo32(0);
  if (iVar1 < 5) {
    iVar1 = 4;
  }
  else if (0x3fffffd < iVar1) {
                    /* WARNING: Subroutine does not return */
    Heap::FatalProcessOutOfMemory((Heap *)(param_2 + 0x8850),"invalid table size");
  }
  puVar2 = (ulong *)Factory::NewFixedArrayWithMap<v8::internal::FixedArray>
                              (param_2,0x49,iVar1 * 2 + 3,0);
  *(undefined4 *)(*puVar2 + 7) = 0;
  *(undefined4 *)(*puVar2 + 0xb) = 0;
  *(int *)(*puVar2 + 0xf) = iVar1 * 2;
  uVar5 = *param_1;
  uVar4 = *puVar2;
  *(int *)(uVar5 + 0xb) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0xb,uVar4);
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0xb,uVar4);
      return;
    }
  }
  return;
}

