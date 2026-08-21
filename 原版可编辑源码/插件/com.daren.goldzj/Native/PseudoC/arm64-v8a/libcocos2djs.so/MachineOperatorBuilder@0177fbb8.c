
/* v8::internal::compiler::MachineOperatorBuilder::MachineOperatorBuilder(v8::internal::Zone*,
   v8::internal::MachineRepresentation,
   v8::base::Flags<v8::internal::compiler::MachineOperatorBuilder::Flag, unsigned int>,
   v8::internal::compiler::MachineOperatorBuilder::AlignmentRequirements) */

void __thiscall
v8::internal::compiler::MachineOperatorBuilder::MachineOperatorBuilder
          (MachineOperatorBuilder *this,undefined8 param_1,MachineOperatorBuilder param_3,
          undefined4 param_4,undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  
  *(undefined8 *)this = param_1;
  if ((DAT_01d52490 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_01d52490);
    if (iVar1 != 0) {
      memset(&DAT_01d4ad00,0,0x7790);
      MachineOperatorGlobalCache::MachineOperatorGlobalCache
                ((MachineOperatorGlobalCache *)&DAT_01d4ad00);
      __cxa_guard_release(&DAT_01d52490);
    }
  }
  this[0x10] = param_3;
  *(undefined4 *)(this + 0x14) = param_4;
  *(undefined8 *)(this + 0x18) = param_5;
  *(undefined **)(this + 8) = &DAT_01d4ad00;
  *(undefined4 *)(this + 0x20) = param_6;
  return;
}

