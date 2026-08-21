
/* v8::internal::MemoryAllocator::InitializeCodePageAllocator(v8::PageAllocator*, unsigned long) */

void __thiscall
v8::internal::MemoryAllocator::InitializeCodePageAllocator
          (MemoryAllocator *this,PageAllocator *param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  BoundedPageAllocator *this_00;
  long *plVar7;
  code *pcVar8;
  Logger *this_01;
  undefined **local_90;
  code *local_88;
  undefined *puStack_80;
  long *local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar6 = param_2;
  if (param_2 < "er9Technique9ParameterC2ERKS2_") {
    uVar6 = 0x300000;
  }
  *(PageAllocator **)(this + 0x28) = param_1;
  uVar2 = 0x8000000;
  if (param_2 != 0) {
    uVar2 = uVar6;
  }
  if (FLAG_v8_os_page_size == 0) {
    CommitPageSize();
  }
  if (DAT_01d3f4b8 != '\x02') {
    local_90 = &PTR_FUN_01c984d0;
    local_88 = base::
               LazyInstanceImpl<v8::internal::CodeRangeAddressHint,v8::base::StaticallyAllocatedInstanceTrait<v8::internal::CodeRangeAddressHint>,v8::base::DefaultConstructTrait<v8::internal::CodeRangeAddressHint>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::CodeRangeAddressHint>>
               ::InitInstance;
    puStack_80 = &DAT_01d3f4c0;
    local_70 = (long *)&local_90;
    base::CallOnceImpl(&DAT_01d3f4b8,&local_90);
    if (&local_90 == (undefined ***)local_70) {
      pcVar8 = *(code **)(*local_70 + 0x20);
    }
    else {
      if (local_70 == (long *)0x0) goto LAB_0101252c;
      pcVar8 = *(code **)(*local_70 + 0x28);
    }
    (*pcVar8)();
  }
LAB_0101252c:
  uVar4 = CodeRangeAddressHint::GetAddressHint((CodeRangeAddressHint *)&DAT_01d3f4c0,uVar2);
  lVar5 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  uVar6 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  if (uVar6 < 0x1001) {
    uVar6 = 0x1000;
  }
  VirtualMemory::VirtualMemory
            ((VirtualMemory *)&local_90,param_1,uVar2,(void *)(uVar4 & -lVar5),uVar6);
  if (local_88 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8::FatalProcessOutOfMemory(*(Isolate **)this,"CodeRange setup: allocate virtual memory",false);
  }
  pcVar8 = local_88 + 0x3ffff;
  *(code **)(this + 0x30) = local_88;
  *(undefined **)(this + 0x38) = puStack_80;
  this_01 = *(Logger **)(*(long *)this + 0x9558);
  pcVar1 = local_88 + ((long)puStack_80 - ((ulong)pcVar8 & 0xfffffffffffc0000));
  uVar6 = Logger::is_logging(this_01);
  if ((uVar6 & 1) != 0) {
    Logger::NewEvent(this_01,"CodeRange",local_88,uVar2);
  }
  *(undefined ***)(this + 8) = local_90;
  *(undefined **)(this + 0x18) = puStack_80;
  *(code **)(this + 0x10) = local_88;
  VirtualMemory::Reset((VirtualMemory *)&local_90);
  this_00 = operator_new(0xb0);
  base::BoundedPageAllocator::BoundedPageAllocator
            (this_00,param_1,(ulong)pcVar8 & 0xfffffffffffc0000,(ulong)pcVar1 & 0xfffffffffffc0000,
             0x40000);
  plVar7 = *(long **)(this + 0x40);
  *(BoundedPageAllocator **)(this + 0x40) = this_00;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
    this_00 = *(BoundedPageAllocator **)(this + 0x40);
  }
  *(BoundedPageAllocator **)(this + 0x28) = this_00;
  VirtualMemory::~VirtualMemory((VirtualMemory *)&local_90);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

