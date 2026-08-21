
/* v8::internal::UncompiledDataWithPreparseData::Init(v8::internal::String, int, int,
   v8::internal::PreparseData, std::__ndk1::function<void (v8::internal::HeapObject,
   v8::internal::CompressedObjectSlot, v8::internal::HeapObject)>) */

void __thiscall
v8::internal::UncompiledDataWithPreparseData::Init
          (UncompiledDataWithPreparseData *this,ulong param_2,undefined4 param_3,undefined4 param_4,
          ulong param_5,long *param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong local_a8;
  long local_a0;
  ulong uStack_98;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)param_6[4];
  if (plVar3 == (long *)0x0) {
    local_70 = (long *)0x0;
  }
  else if (param_6 == plVar3) {
    local_70 = alStack_90;
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_90);
  }
  else {
    local_70 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3);
  }
  *(int *)(*(long *)this + 3) = (int)param_2;
  uStack_98 = *(ulong *)this;
  local_a0 = uStack_98 + 3;
  if ((param_2 & 1) != 0) {
    uVar4 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uStack_98,local_a0,param_2);
      uStack_98 = *(ulong *)this;
      uVar4 = *(ulong *)(param_2 & 0xfffffffffffc0000 | 8);
      local_a0 = uStack_98 + 3;
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uStack_98 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uStack_98,local_a0,param_2);
      uStack_98 = *(ulong *)this;
      local_a0 = uStack_98 + 3;
    }
  }
  local_a8 = param_2;
  if (local_70 == (long *)0x0) goto LAB_00f7740c;
  (**(code **)(*local_70 + 0x30))(local_70,&uStack_98,&local_a0,&local_a8);
  *(undefined4 *)(*(long *)this + 7) = param_3;
  *(undefined4 *)(*(long *)this + 0xb) = param_4;
  if (alStack_90 == local_70) {
    pcVar5 = *(code **)(*local_70 + 0x20);
LAB_00f77354:
    (*pcVar5)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar5 = *(code **)(*local_70 + 0x28);
    goto LAB_00f77354;
  }
  *(int *)(*(long *)this + 0xf) = (int)param_5;
  uVar4 = *(ulong *)this;
  lVar2 = uVar4 + 0xf;
  if ((param_5 & 1) != 0) {
    uVar6 = *(ulong *)((param_5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,lVar2,param_5);
      uVar4 = *(ulong *)this;
      uVar6 = *(ulong *)(param_5 & 0xfffffffffffc0000 | 8);
      lVar2 = uVar4 + 0xf;
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,lVar2,param_5);
      uVar4 = *(ulong *)this;
      lVar2 = uVar4 + 0xf;
    }
  }
  plVar3 = (long *)param_6[4];
  local_a8 = param_5;
  local_a0 = lVar2;
  uStack_98 = uVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&uStack_98,&local_a0,&local_a8);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00f7740c:
                    /* WARNING: Subroutine does not return */
  FUN_008589d0();
}

