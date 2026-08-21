
/* v8::internal::Factory::NewUncompiledDataWithoutPreparseData(v8::internal::Handle<v8::internal::String>,
   int, int) */

ulong * __thiscall
v8::internal::Factory::NewUncompiledDataWithoutPreparseData
          (Factory *this,ulong *param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  ulong local_a8;
  long local_a0;
  ulong uStack_98;
  undefined **local_90 [4];
  undefined ***local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar3 = Heap::AllocateRawWithRetryOrFailSlowPath
                    ((Heap *)(this + 0x8850),(ulong)*(byte *)(*(long *)(this + 0x2a8) + 3) << 2,1,1,
                     0);
  uVar5 = *(ulong *)(this + 0x2a8);
  *(int *)(uVar3 - 1) = (int)uVar5;
  if (((uVar5 & 1) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
    Heap_MarkingBarrierSlow(uVar3,0);
  }
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
  uVar5 = *param_2;
  local_70 = local_90;
  lVar1 = uVar3 + 3;
  local_90[0] = &PTR_FUN_01ca7140;
  *(int *)(uVar3 + 3) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar6 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,lVar1,uVar5);
      uVar6 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,lVar1,uVar5);
    }
  }
  local_a8 = uVar5;
  local_a0 = lVar1;
  uStack_98 = uVar3;
  if (local_70 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_008589d0();
  }
  (*(code *)(*local_70)[6])(local_70,&uStack_98,&local_a0,&local_a8);
  *(undefined4 *)(uVar3 + 7) = param_3;
  *(undefined4 *)(uVar3 + 0xb) = param_4;
  if (local_90 == local_70) {
    pcVar7 = (code *)(*local_70)[4];
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00f7705c;
    pcVar7 = (code *)(*local_70)[5];
  }
  (*pcVar7)();
LAB_00f7705c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

