
/* v8::internal::Factory::NewUncompiledDataWithPreparseData(v8::internal::Handle<v8::internal::String>,
   int, int, v8::internal::Handle<v8::internal::PreparseData>) */

ulong * __thiscall
v8::internal::Factory::NewUncompiledDataWithPreparseData
          (Factory *this,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
          undefined8 *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  code *pcVar5;
  ulong local_a8;
  undefined **local_a0 [4];
  undefined ***local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar2 = Heap::AllocateRawWithRetryOrFailSlowPath
                    ((Heap *)(this + 0x8850),(ulong)*(byte *)(*(long *)(this + 0x2b0) + 3) << 2,1,1,
                     0);
  uVar4 = *(ulong *)(this + 0x2b0);
  *(int *)(uVar2 - 1) = (int)uVar4;
  if (((uVar4 & 1) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
    Heap_MarkingBarrierSlow(uVar2,0);
  }
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(this + 0x95a0);
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar2;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
    uVar2 = *puVar3;
  }
  local_a0[0] = &PTR_FUN_01ca7188;
  local_a8 = uVar2;
  local_80 = local_a0;
  UncompiledDataWithPreparseData::Init
            ((UncompiledDataWithPreparseData *)&local_a8,*param_2,param_3,param_4,*param_5,local_a0)
  ;
  if (local_a0 == local_80) {
    pcVar5 = (code *)(*local_80)[4];
  }
  else {
    if (local_80 == (undefined ***)0x0) goto LAB_00f771cc;
    pcVar5 = (code *)(*local_80)[5];
  }
  (*pcVar5)();
LAB_00f771cc:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

