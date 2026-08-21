
/* v8::internal::RegExpMacroAssemblerARM64::GoTo(v8::internal::Label*) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::GoTo(RegExpMacroAssemblerARM64 *this,Label *param_1)

{
  Assembler *this_00;
  
  if (param_1 != (Label *)0x0) {
    this_00 = *(Assembler **)(this + 0x28);
    Assembler::b(this_00,param_1);
    Assembler::CheckVeneerPool(this_00,false,false,0x400);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01290d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x38))();
  return;
}

