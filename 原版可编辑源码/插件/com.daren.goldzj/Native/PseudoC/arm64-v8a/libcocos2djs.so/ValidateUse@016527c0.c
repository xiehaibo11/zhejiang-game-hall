
/* v8::internal::compiler::RegisterAllocatorVerifier::ValidateUse(v8::internal::compiler::RpoNumber,
   v8::internal::compiler::BlockAssessments*, v8::internal::compiler::InstructionOperand, int) */

void __thiscall
v8::internal::compiler::RegisterAllocatorVerifier::ValidateUse
          (RegisterAllocatorVerifier *this,undefined4 param_2,long param_3,ulong param_4,int param_5
          )

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  
  plVar4 = (long *)(param_3 + 8);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    uVar7 = 0x180;
    if (((uint)param_4 >> 5 & 0xff) < 0xb || ((uint)param_4 & 0x1c) != 4) {
      uVar7 = 0;
    }
    if ((param_4 & 4) != 0) {
      param_4 = param_4 & 0xffffffffffffe018 | uVar7 | 4;
    }
    uVar7 = plVar5[4];
    uVar6 = (uint)uVar7;
    plVar1 = plVar4;
    while( true ) {
      if ((uVar6 >> 2 & 1) != 0) {
        uVar2 = 0x180;
        if (((uint)uVar7 >> 5 & 0xff) < 0xb || (uVar7 & 0x1c) != 4) {
          uVar2 = 0;
        }
        uVar7 = uVar7 & 0xffffffffffffe018 | uVar2 | 4;
      }
      if (uVar7 >= param_4) {
        plVar1 = plVar5;
      }
      plVar5 = (long *)plVar5[uVar7 < param_4];
      if (plVar5 == (long *)0x0) break;
      uVar7 = plVar5[4];
      uVar6 = (uint)uVar7;
    }
    if (plVar1 != plVar4) {
      uVar7 = plVar1[4];
      if (((uint)uVar7 >> 2 & 1) != 0) {
        uVar2 = 0x180;
        if (((uint)uVar7 >> 5 & 0xff) < 0xb || (uVar7 & 0x1c) != 4) {
          uVar2 = 0;
        }
        uVar7 = uVar7 & 0xffffffffffffe018 | uVar2 | 4;
      }
      if (uVar7 <= param_4) {
        iVar3 = *(int *)plVar1[5];
        if (iVar3 == 1) {
          ValidatePendingAssessment(this,param_2);
          return;
        }
        if ((iVar3 == 0) && (((int *)plVar1[5])[1] != param_5)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.",
                   "FinalAssessment::cast(assessment)->virtual_register() == virtual_register");
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","iterator != current_assessments->map().end()");
}

