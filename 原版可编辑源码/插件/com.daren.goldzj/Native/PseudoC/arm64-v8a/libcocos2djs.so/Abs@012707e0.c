
/* v8::internal::TurboAssembler::Abs(v8::internal::Register const&, v8::internal::Register const&,
   v8::internal::Label*, v8::internal::Label*) */

void __thiscall
v8::internal::TurboAssembler::Abs
          (TurboAssembler *this,Register *param_1,Register *param_2,Label *param_3,Label *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 local_90 [8];
  undefined1 local_88;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_70 = 1;
  local_90[0] = 0;
  local_88 = 0;
  local_68 = 0x13;
  local_60 = 0xffffffff;
  local_58 = 2;
  puVar1 = &DAT_019f4018;
  if (*(int *)(param_2 + 4) != 0x40) {
    puVar1 = &DAT_019f4000;
  }
  AddSubMacro(this,puVar1,param_2,local_90,1,0x40000000);
  Assembler::cneg((Assembler *)this,param_1,param_2,0xb);
  if ((param_3 == (Label *)0x0) || (param_4 == (Label *)0x0)) {
    if (param_3 == (Label *)0x0) {
      if (param_4 == (Label *)0x0) goto LAB_012708ec;
      uVar3 = 7;
      param_3 = param_4;
    }
    else {
      uVar3 = 6;
    }
    B(this,param_3,uVar3);
  }
  else {
    B(this,param_3,6);
    Assembler::b((Assembler *)this,param_4);
    Assembler::CheckVeneerPool((Assembler *)this,false,false,0x400);
  }
LAB_012708ec:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

