
/* v8::internal::Debug::FreeDebugInfoListNode(v8::internal::DebugInfoListNode*,
   v8::internal::DebugInfoListNode*) */

void __thiscall
v8::internal::Debug::FreeDebugInfoListNode
          (Debug *this,DebugInfoListNode *param_1,DebugInfoListNode *param_2)

{
  Debug *pDVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  pDVar1 = this + 0x18;
  if (param_1 != (DebugInfoListNode *)0x0) {
    pDVar1 = (Debug *)(param_1 + 8);
  }
  *(undefined8 *)pDVar1 = *(undefined8 *)(param_2 + 8);
  uVar5 = **(ulong **)param_2;
  uVar2 = *(uint *)(uVar5 + 3);
  uVar3 = *(uint *)(uVar5 + 0xb);
  uVar5 = uVar5 & 0xffffffff00000000;
  uVar7 = uVar5 | uVar2;
  *(uint *)(uVar7 + 0xf) = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar8 = uVar5 | uVar3;
    uVar6 = uVar5 | (ulong)uVar3 & 0xfffffffffffc0000;
    uVar4 = *(ulong *)(uVar6 + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 0xf,uVar8);
      uVar4 = *(ulong *)(uVar6 | 8);
    }
    if (((uVar4 & 0x18) != 0) &&
       ((*(byte *)((uVar5 | (ulong)uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0xf,uVar8);
    }
  }
  if (*(ulong **)param_2 != (ulong *)0x0) {
    GlobalHandles::Destroy(*(ulong **)param_2);
  }
  operator_delete(param_2);
  return;
}

