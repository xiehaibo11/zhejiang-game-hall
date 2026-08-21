
/* v8::internal::compiler::CodeGenerator::BailoutIfDeoptimized() */

void __thiscall v8::internal::compiler::CodeGenerator::BailoutIfDeoptimized(CodeGenerator *this)

{
  TurboAssembler *this_00;
  uint uVar1;
  undefined8 uVar2;
  ulong local_c0;
  undefined4 local_b8;
  ulong local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined4 local_78;
  CodeGenerator *local_70;
  CodeGenerator *pCStack_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_70 = this + 0x268;
  pCStack_68 = this + 0x278;
  local_60 = *(undefined8 *)(this + 0x268);
  this_00 = (TurboAssembler *)(this + 0xd0);
  local_58 = *(undefined8 *)(this + 0x278);
  uVar1 = UseScratchRegisterScope::AcquireNextAvailable(local_70);
  local_b0 = 0x4000000002;
  local_80 = 0x400000003f;
  if (uVar1 != 0x3f) {
    local_80 = (ulong)uVar1 | 0x4000000000;
  }
  local_78 = 0;
  local_a8 = 0;
  local_98 = 0xffffffffffffffd0;
  local_a4 = 0xffffffff;
  local_9c = 2;
  local_90 = 0xffffffff00000000;
  uStack_88 = 0xffffffff;
  TurboAssembler::LoadTaggedPointerField(this_00,(Register *)&local_80,(MemOperand *)&local_b0);
  local_98 = 7;
  local_a8 = local_78;
  local_c0 = 0x200000003f;
  if ((int)local_80 != 0x3f) {
    local_c0 = local_80 & 0xffffffff | 0x2000000000;
  }
  local_b8 = 0;
  local_a4 = 0xffffffff;
  local_9c = 2;
  local_b0 = local_80;
  local_90 = 0xffffffff00000000;
  uStack_88 = 0xffffffff;
  TurboAssembler::LoadStoreMacro(this_00,&local_c0,&local_b0,0x80400000);
  local_b0 = 0x200000003f;
  if ((int)local_80 != 0x3f) {
    local_b0 = local_80 & 0xffffffff | 0x2000000000;
  }
  local_c0 = 0;
  local_a8 = 0;
  TurboAssembler::Tbz(this_00,(Register *)&local_b0,0,(Label *)&local_c0);
  uVar2 = Builtins::builtin_handle((Builtins *)(*(long *)(this + 0x10) + 0x9e00),0x43);
  TurboAssembler::Jump(this_00,uVar2,0,0xe);
  Assembler::bind((Label *)this_00);
  UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_70);
  return;
}

