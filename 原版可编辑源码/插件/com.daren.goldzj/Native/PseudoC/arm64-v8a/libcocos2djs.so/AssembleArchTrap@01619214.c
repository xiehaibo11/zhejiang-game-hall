
/* v8::internal::compiler::CodeGenerator::AssembleArchTrap(v8::internal::compiler::Instruction*,
   v8::internal::compiler::FlagsCondition) */

void __thiscall
v8::internal::compiler::CodeGenerator::AssembleArchTrap
          (CodeGenerator *this,undefined8 param_1,uint param_3)

{
  Zone *this_00;
  OutOfLineCode *this_01;
  
  this_00 = *(Zone **)(this + 8);
  this_01 = *(OutOfLineCode **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x40) {
    this_01 = (OutOfLineCode *)Zone::NewExpand(this_00,0x40);
  }
  else {
    *(OutOfLineCode **)(this_00 + 0x10) = this_01 + 0x40;
  }
  OutOfLineCode::OutOfLineCode(this_01,this);
  *(undefined ***)this_01 = &PTR__OutOfLineCode_01cca5d0;
  *(undefined8 *)(this_01 + 0x30) = param_1;
  *(CodeGenerator **)(this_01 + 0x38) = this;
  if ((param_3 < 0x18) && ((0xf3ffffU >> (ulong)(param_3 & 0x1f) & 1) != 0)) {
    TurboAssembler::B((TurboAssembler *)(this + 0xd0),this_01 + 8,
                      *(undefined4 *)(&DAT_01a56430 + (long)(int)param_3 * 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

