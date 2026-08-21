
/* WARNING: Removing unreachable block (ram,0x0128a980) */
/* v8::internal::RegExpMacroAssemblerARM64::RegExpMacroAssemblerARM64(v8::internal::Isolate*,
   v8::internal::Zone*, v8::internal::NativeRegExpMacroAssembler::Mode, int) */

void __thiscall
v8::internal::RegExpMacroAssemblerARM64::RegExpMacroAssemblerARM64
          (RegExpMacroAssemblerARM64 *this,Isolate *param_1,Zone *param_2,undefined4 param_4,
          undefined4 param_5)

{
  long lVar1;
  long *plVar2;
  Assembler *this_00;
  int extraout_w1;
  ulong extraout_x1;
  undefined1 uVar3;
  undefined1 auVar4 [16];
  long *local_70;
  long *local_68;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  NativeRegExpMacroAssembler::NativeRegExpMacroAssembler
            ((NativeRegExpMacroAssembler *)this,param_1,param_2);
  uVar3 = SUB81(param_2,0);
  *(undefined ***)this = &PTR__RegExpMacroAssemblerARM64_01cbe620;
  this_00 = Malloced::operator_new((Malloced *)0x1b8,extraout_x1);
  NewAssemblerBuffer((internal *)0x400,extraout_w1);
  AssemblerOptions::Default((AssemblerOptions *)param_1,(Isolate *)0x0,(bool)uVar3);
  local_68 = local_70;
  TurboAssemblerBase::TurboAssemblerBase
            ((TurboAssemblerBase *)this_00,param_1,auStack_60,1,&local_68);
  plVar2 = local_68;
  local_68 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined ***)this_00 = &PTR__Assembler_01cbd510;
  auVar4 = TurboAssembler::DefaultTmpList();
  *(undefined1 (*) [16])(this_00 + 0x198) = auVar4;
  auVar4 = TurboAssembler::DefaultFPTmpList();
  *(undefined1 (*) [16])(this_00 + 0x1a8) = auVar4;
  *(undefined ***)this_00 = &PTR__Assembler_01ca1048;
  *(undefined8 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(Assembler **)(this + 0x28) = this_00;
  *(undefined4 *)(this + 0x30) = param_4;
  *(undefined4 *)(this + 0x34) = param_5;
  *(undefined4 *)(this + 0x38) = param_5;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  *(undefined8 *)(this + 100) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x6c) = 0;
  Assembler::b(this_00,(Label *)(this + 0x3c));
  Assembler::CheckVeneerPool(this_00,false,false,0x400);
  Assembler::bind(*(Label **)(this + 0x28));
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

