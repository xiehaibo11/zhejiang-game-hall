
/* v8::internal::compiler::CodeGenerator::AssembleArchBinarySearchSwitchRange(v8::internal::Register,
   v8::internal::compiler::RpoNumber, std::__ndk1::pair<int, v8::internal::Label*>*,
   std::__ndk1::pair<int, v8::internal::Label*>*) */

void v8::internal::compiler::CodeGenerator::AssembleArchBinarySearchSwitchRange
               (CodeGenerator *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               int *param_5,int *param_6)

{
  int *piVar1;
  long lVar2;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8;
  long local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((long)param_6 - (long)param_5 < 0x40) {
    if (param_5 != param_6) {
      do {
        local_90 = (long)*param_5;
        local_b0[0] = 0;
        local_a8 = 0;
        local_88 = 0x13;
        local_78 = 2;
        local_80 = 0xffffffff;
        local_c0 = param_2;
        local_b8 = param_3;
        TurboAssembler::CompareAndBranch
                  ((TurboAssembler *)(param_1 + 0xd0),&local_c0,local_b0,0,
                   *(undefined8 *)(param_5 + 2));
        param_5 = param_5 + 4;
      } while (param_5 != param_6);
    }
    AssembleArchJump(param_1,param_4);
  }
  else {
    local_c8 = 0;
    piVar1 = (int *)((long)param_5 +
                    ((ulong)((long)param_6 - (long)param_5) >> 1 & 0x7ffffffffffffff0));
    local_90 = (long)*piVar1;
    local_88 = 0x13;
    local_80 = 0xffffffff;
    local_b0[0] = 0;
    local_a8 = 0;
    local_78 = 2;
    local_c0 = param_2;
    local_b8 = param_3;
    TurboAssembler::CompareAndBranch
              ((TurboAssembler *)(param_1 + 0xd0),&local_c0,local_b0,0xb,&local_c8);
    AssembleArchBinarySearchSwitchRange(param_1,param_2,param_3,param_4,piVar1,param_6);
    Assembler::bind((Label *)(param_1 + 0xd0));
    AssembleArchBinarySearchSwitchRange(param_1,param_2,param_3,param_4,param_5,piVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

