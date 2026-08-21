
/* v8::internal::Factory::NewStackTraceFrame(v8::internal::Handle<v8::internal::FrameArray>, int) */

ulong * __thiscall
v8::internal::Factory::NewStackTraceFrame(Factory *this,ulong *param_2,int param_3)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = (ulong *)NewStruct(this,0x6c,0);
  uVar5 = *puVar2;
  uVar4 = *param_2;
  *(int *)(uVar5 + 3) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 3,uVar4);
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 3,uVar4);
    }
  }
  *(int *)(*puVar2 + 7) = param_3 << 1;
  uVar5 = *puVar2;
  uVar4 = *(ulong *)(this + 0xa0);
  *(int *)(uVar5 + 0xb) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0xb,uVar4);
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0xb,uVar4);
    }
  }
  iVar1 = *(int *)(this + 0xb818);
  *(int *)(this + 0xb818) = iVar1 + 1;
  *(int *)(*puVar2 + 0xf) = (iVar1 + 1) * 2;
  return puVar2;
}

