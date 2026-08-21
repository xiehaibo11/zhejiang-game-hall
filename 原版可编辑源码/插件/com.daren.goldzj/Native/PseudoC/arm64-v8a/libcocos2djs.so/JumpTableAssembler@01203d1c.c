
/* v8::internal::wasm::JumpTableAssembler::JumpTableAssembler(unsigned long, int) */

void __thiscall
v8::internal::wasm::JumpTableAssembler::JumpTableAssembler
          (JumpTableAssembler *this,ulong param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  long *local_48;
  undefined1 local_40;
  undefined4 local_3f;
  undefined1 local_3b;
  undefined8 local_38;
  undefined2 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 1;
  local_3f = 1;
  local_3b = 1;
  local_38 = 0;
  local_30 = 0;
  ExternalAssemblerBuffer((internal *)param_1,(void *)(ulong)(uint)param_2,param_2);
  TurboAssemblerBase::TurboAssemblerBase((TurboAssemblerBase *)this,0,&local_40,0,&local_48);
  *(undefined ***)this = &PTR__Assembler_01cbd510;
  auVar3 = TurboAssembler::DefaultTmpList();
  *(undefined1 (*) [16])(this + 0x198) = auVar3;
  auVar3 = TurboAssembler::DefaultFPTmpList();
  plVar2 = local_48;
  *(undefined1 (*) [16])(this + 0x1a8) = auVar3;
  *(undefined ***)this = &PTR__Assembler_01ca1048;
  local_48 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined ***)this = &PTR__Assembler_01cbc238;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

