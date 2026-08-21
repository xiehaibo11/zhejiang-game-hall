
/* v8::internal::Factory::NewFeedbackVector(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::ClosureFeedbackCellArray>) */

ulong * __thiscall
v8::internal::Factory::NewFeedbackVector(Factory *this,ulong *param_2,ulong *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  uVar1 = *(undefined4 *)(this + 0x158);
  uVar2 = *(uint *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 3);
  uVar3 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar2 * 4 + 0x20,1,1,0);
  *(undefined4 *)(uVar3 - 1) = uVar1;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(this + 0x95a0);
    if (puVar4 == *(ulong **)(this + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar3;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar3);
    uVar3 = *puVar4;
  }
  uVar10 = *param_2;
  *(int *)(uVar3 + 3) = (int)uVar10;
  if ((uVar10 & 1) != 0) {
    uVar5 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,uVar3 + 3,uVar10);
      uVar5 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,uVar3 + 3,uVar10);
    }
  }
  *(uint *)(*puVar4 + 7) = (uint)FLAG_log_function_events << 1 ^ 2;
  *(uint *)(*puVar4 + 0xf) = uVar2;
  *(undefined4 *)(*puVar4 + 0x13) = 0;
  *(undefined4 *)(*puVar4 + 0x17) = 0;
  *(undefined4 *)(*puVar4 + 0x1b) = 0;
  uVar10 = *puVar4;
  uVar3 = *param_3;
  *(int *)(uVar10 + 0xb) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar5 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,uVar10 + 0xb,uVar3);
      uVar5 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0xb,uVar3);
    }
  }
  if (uVar2 != 0) {
    uVar3 = *puVar4;
    uVar1 = *(undefined4 *)(this + 0xa0);
    uVar10 = (ulong)(int)uVar2;
    if (uVar2 < 8) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar10 & 0xfffffffffffffff8;
      puVar9 = (undefined8 *)(uVar3 + 0x2f);
      uVar5 = uVar8;
      do {
        puVar9[-1] = CONCAT44(uVar1,uVar1);
        puVar9[-2] = CONCAT44(uVar1,uVar1);
        puVar9[1] = CONCAT44(uVar1,uVar1);
        *puVar9 = CONCAT44(uVar1,uVar1);
        uVar5 = uVar5 - 8;
        puVar9 = puVar9 + 4;
      } while (uVar5 != 0);
      if (uVar8 == uVar10) {
        return puVar4;
      }
    }
    lVar7 = uVar10 - uVar8;
    puVar6 = (undefined4 *)(uVar3 + 0x1f + uVar8 * 4);
    do {
      lVar7 = lVar7 + -1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
  return puVar4;
}

