
/* v8::internal::MacroAssembler::CallRuntime(v8::internal::Runtime::Function const*, int,
   v8::internal::SaveFPRegsMode) */

void __thiscall
v8::internal::MacroAssembler::CallRuntime
          (MacroAssembler *this,Function *param_1,int param_2,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_80 [8];
  undefined1 local_78;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((-1 < (char)param_1[0x18]) && ((char)param_1[0x18] != param_2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","f->nargs < 0 || f->nargs == num_arguments");
  }
  TurboAssembler::Mov((TurboAssembler *)this,(Register *)&DAT_019f4150,(long)param_2);
  local_60 = ExternalReference::Create(param_1);
  local_80[0] = 0;
  local_78 = 0;
  local_58 = 7;
  local_50 = 0xffffffff;
  local_48 = 2;
  TurboAssembler::Mov((TurboAssembler *)this,&DAT_019f415c,local_80,0);
  uVar2 = CodeFactory::CEntry(*(undefined8 *)(this + 0x178),(long)(char)param_1[0x19],param_4,0,0);
  TurboAssembler::Call((TurboAssembler *)this,uVar2,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

