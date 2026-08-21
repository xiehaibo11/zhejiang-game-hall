
/* v8::internal::Factory::CopyBytecodeArray(v8::internal::Handle<v8::internal::BytecodeArray>) */

ulong * __thiscall v8::internal::Factory::CopyBytecodeArray(Factory *this,ulong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_48;
  
  uVar1 = *(undefined4 *)(this + 0x1d0);
  uVar4 = Heap::AllocateRawWithRetryOrFailSlowPath
                    ((Heap *)(this + 0x8850),(*(int *)(*param_2 + 3) >> 1) + 0x25U & 0xfffffffc,1,1,
                     0);
  *(undefined4 *)(uVar4 - 1) = uVar1;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(this + 0x95a0);
    if (puVar5 == *(ulong **)(this + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar4;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
    uVar4 = *puVar5;
  }
  *(uint *)(uVar4 + 3) = *(uint *)(*param_2 + 3) & 0xfffffffe;
  *(undefined4 *)(*puVar5 + 0x13) = *(undefined4 *)(*param_2 + 0x13);
  *(uint *)(*puVar5 + 0x17) = *(uint *)(*param_2 + 0x17) & 0xfffffff8;
  iVar2 = *(int *)(*param_2 + 0x1b);
  iVar7 = 0;
  if ((iVar2 != 0) && (iVar2 != 0x7ffffffc)) {
    iVar7 = iVar2;
  }
  *(int *)(*puVar5 + 0x1b) = iVar7;
  uVar4 = *param_2;
  uVar8 = *puVar5;
  uVar3 = *(uint *)(uVar4 + 7);
  *(uint *)(uVar8 + 7) = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar4 = uVar4 & 0xffffffff00000000;
    uVar9 = uVar4 | uVar3;
    uVar4 = uVar4 | (ulong)uVar3 & 0xfffffffffffc0000;
    uVar6 = *(ulong *)(uVar4 + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 7,uVar9);
      uVar6 = *(ulong *)(uVar4 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 7,uVar9);
    }
  }
  uVar4 = *param_2;
  uVar8 = *puVar5;
  uVar3 = *(uint *)(uVar4 + 0xb);
  *(uint *)(uVar8 + 0xb) = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar4 = uVar4 & 0xffffffff00000000;
    uVar9 = uVar4 | uVar3;
    uVar4 = uVar4 | (ulong)uVar3 & 0xfffffffffffc0000;
    uVar6 = *(ulong *)(uVar4 + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xb,uVar9);
      uVar6 = *(ulong *)(uVar4 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xb,uVar9);
    }
  }
  uVar4 = *param_2;
  uVar8 = *puVar5;
  uVar3 = *(uint *)(uVar4 + 0xf);
  *(uint *)(uVar8 + 0xf) = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar4 = uVar4 & 0xffffffff00000000;
    uVar9 = uVar4 | uVar3;
    uVar4 = uVar4 | (ulong)uVar3 & 0xfffffffffffc0000;
    uVar6 = *(ulong *)(uVar4 + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xf,uVar9);
      uVar6 = *(ulong *)(uVar4 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xf,uVar9);
    }
  }
  *(undefined1 *)(*puVar5 + 0x1f) = *(undefined1 *)(*param_2 + 0x1f);
  *(undefined1 *)(*puVar5 + 0x20) = *(undefined1 *)(*param_2 + 0x20);
  local_48 = *param_2;
  BytecodeArray::CopyBytecodesTo((BytecodeArray *)&local_48,*puVar5);
  return puVar5;
}

