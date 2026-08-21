
/* v8::internal::RegExpMacroAssemblerARM64::BranchOrBacktrack(v8::internal::Condition,
   v8::internal::Label*) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::BranchOrBacktrack
          (RegExpMacroAssemblerARM64 *this,int param_2,Label *param_3)

{
  RegExpMacroAssemblerARM64 *pRVar1;
  Assembler *this_00;
  
  if (param_2 != 0xe) {
    pRVar1 = this + 0x54;
    if (param_3 != (Label *)0x0) {
      pRVar1 = (RegExpMacroAssemblerARM64 *)param_3;
    }
    TurboAssembler::B(*(TurboAssembler **)(this + 0x28),pRVar1,param_2);
    return;
  }
  if (param_3 != (Label *)0x0) {
    this_00 = *(Assembler **)(this + 0x28);
    Assembler::b(this_00,param_3);
    Assembler::CheckVeneerPool(this_00,false,false,0x400);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0128b7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x38))();
  return;
}

