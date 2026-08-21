
/* v8::internal::MacroAssembler::InvokePrologue(v8::internal::Register, v8::internal::Register,
   v8::internal::Label*, InvokeFlag) */

void v8::internal::MacroAssembler::InvokePrologue
               (Assembler *param_1,ulong param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5,Label *param_6,int param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_98;
  ulong uStack_90;
  undefined4 local_88;
  undefined1 local_80 [8];
  undefined1 local_78;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_98 = 0;
  puVar1 = &DAT_019f4018;
  if (param_2 >> 0x20 != 0x40) {
    puVar1 = &DAT_019f4000;
  }
  local_80[0] = 0;
  local_78 = 0;
  local_60 = 0;
  local_58 = 0x13;
  local_44 = 0xffffffff00000000;
  local_3c = 0;
  uStack_90 = param_2;
  local_88 = param_3;
  local_50 = param_4;
  local_48 = param_5;
  TurboAssembler::AddSubMacro((TurboAssembler *)param_1,puVar1,&uStack_90,local_80,1,0x40000000);
  TurboAssembler::B((TurboAssembler *)param_1,&local_98,0);
  uVar3 = Builtins::builtin_handle((Builtins *)(*(long *)(param_1 + 0x178) + 0x9e00),3);
  if (param_7 == 0) {
    TurboAssembler::Call((TurboAssembler *)param_1,uVar3,0);
    Assembler::b(param_1,param_6);
    Assembler::CheckVeneerPool(param_1,false,false,0x400);
  }
  else {
    TurboAssembler::Jump((TurboAssembler *)param_1,uVar3,0,0xe);
  }
  Assembler::bind((Label *)param_1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

