
/* v8::internal::compiler::LinearScanAllocator::CheckConflict(v8::internal::MachineRepresentation,
   int, 
   v8::internal::ZoneUnorderedSet<v8::internal::compiler::LinearScanAllocator::RangeWithRegister,
   v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Hash,
   v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Equals>*) */

undefined8 __thiscall
v8::internal::compiler::LinearScanAllocator::CheckConflict
          (LinearScanAllocator *this,undefined4 param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_4 + 0x18);
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    uVar1 = RegisterConfiguration::AreAliases
                      (*(RegisterConfiguration **)(*(long *)this + 0x20),
                       *(uint *)(plVar2[2] + 4) >> 0xd,*(undefined4 *)(plVar2 + 3),param_2,param_3);
    if ((uVar1 & 1) != 0) break;
    plVar2 = (long *)*plVar2;
  }
  return 1;
}

