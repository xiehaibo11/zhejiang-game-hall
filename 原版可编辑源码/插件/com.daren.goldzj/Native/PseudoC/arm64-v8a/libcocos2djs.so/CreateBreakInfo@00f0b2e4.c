
/* v8::internal::Debug::CreateBreakInfo(v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

void __thiscall v8::internal::Debug::CreateBreakInfo(Debug *this,ulong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  Isolate *pIVar9;
  ulong uVar10;
  
  pIVar9 = *(Isolate **)(this + 0x88);
  uVar2 = *(undefined8 *)(pIVar9 + 0x95a0);
  lVar3 = *(long *)(pIVar9 + 0x95a8);
  *(int *)(pIVar9 + 0x95b0) = *(int *)(pIVar9 + 0x95b0) + 1;
  puVar4 = (ulong *)GetOrCreateDebugInfo();
  puVar5 = (ulong *)Factory::NewFixedArray(*(Factory **)(this + 0x88),4,0);
  uVar8 = *param_2;
  uVar1 = *(int *)(*puVar4 + 0x1b) >> 1;
  if ((*(uint *)(uVar8 + 0x1b) >> 5 & 1) == 0) {
    uVar6 = uVar1 | 1;
    if (((*(uint *)(uVar8 + 3) & 1) == 0) ||
       (*(short *)((uVar8 & 0xffffffff00000000 | 7) +
                  (ulong)*(uint *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 3)) - 1))
        != 0x4e)) goto LAB_00f0b38c;
  }
  uVar6 = uVar1 | 0x11;
LAB_00f0b38c:
  *(uint *)(*puVar4 + 0x1b) = uVar6 << 1;
  uVar10 = *puVar4;
  uVar8 = *puVar5;
  *(int *)(uVar10 + 0x17) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,uVar10 + 0x17,uVar8);
      uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0x17,uVar8);
    }
  }
  SharedFunctionInfo::EnsureSourcePositionsAvailable(*(undefined8 *)(this + 0x88),param_2);
  if (pIVar9 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar9 + 0x95a0) = uVar2;
    *(int *)(pIVar9 + 0x95b0) = *(int *)(pIVar9 + 0x95b0) + -1;
    if (*(long *)(pIVar9 + 0x95a8) != lVar3) {
      *(long *)(pIVar9 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(pIVar9);
      return;
    }
  }
  return;
}

