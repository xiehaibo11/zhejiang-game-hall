
/* v8::internal::MacroAssembler::TailCallRuntime(v8::internal::Runtime::FunctionId) */

void __thiscall
v8::internal::MacroAssembler::TailCallRuntime(MacroAssembler *this,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 local_80 [8];
  undefined1 local_78;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = Runtime::FunctionForId(param_2);
  if (-1 < (char)*(byte *)(lVar2 + 0x18)) {
    TurboAssembler::Mov((TurboAssembler *)this,(Register *)&DAT_019f4150,
                        (ulong)*(byte *)(lVar2 + 0x18));
  }
  local_60 = ExternalReference::Create(param_2);
  local_80[0] = 0;
  local_78 = 0;
  local_58 = 7;
  local_50 = 0xffffffff;
  local_48 = 2;
  TurboAssembler::Mov((TurboAssembler *)this,&DAT_019f415c,local_80,0);
  uVar3 = CodeFactory::CEntry(*(undefined8 *)(this + 0x178),1,0,0,0);
  TurboAssembler::Jump((TurboAssembler *)this,uVar3,0,0xe);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

