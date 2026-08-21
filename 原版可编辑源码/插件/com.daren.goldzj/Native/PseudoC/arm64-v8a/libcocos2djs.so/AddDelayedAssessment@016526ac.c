
/* v8::internal::compiler::RegisterAllocatorVerifier::DelayedAssessments::AddDelayedAssessment(v8::internal::compiler::InstructionOperand,
   int) */

void __thiscall
v8::internal::compiler::RegisterAllocatorVerifier::DelayedAssessments::AddDelayedAssessment
          (DelayedAssessments *this,ulong param_2,uint param_3)

{
  ulong uVar1;
  DelayedAssessments *pDVar2;
  ulong uVar3;
  DelayedAssessments *pDVar4;
  DelayedAssessments *pDVar5;
  uint uVar6;
  ulong uVar7;
  ulong local_20;
  ulong uStack_18;
  
  pDVar4 = this + 8;
  pDVar5 = *(DelayedAssessments **)pDVar4;
  if (pDVar5 != (DelayedAssessments *)0x0) {
    uVar7 = 0x180;
    if (((uint)param_2 >> 5 & 0xff) < 0xb || (param_2 & 0x1c) != 4) {
      uVar7 = 0;
    }
    uVar1 = param_2;
    if ((param_2 & 4) != 0) {
      uVar1 = param_2 & 0xffffffffffffe018 | uVar7 | 4;
    }
    uVar7 = *(ulong *)(pDVar5 + 0x20);
    uVar6 = (uint)uVar7;
    pDVar2 = pDVar4;
    while( true ) {
      if ((uVar6 >> 2 & 1) != 0) {
        uVar3 = 0x180;
        if (((uint)uVar7 >> 5 & 0xff) < 0xb || (uVar7 & 0x1c) != 4) {
          uVar3 = 0;
        }
        uVar7 = uVar7 & 0xffffffffffffe018 | uVar3 | 4;
      }
      if (uVar7 >= uVar1) {
        pDVar2 = pDVar5;
      }
      pDVar5 = *(DelayedAssessments **)(pDVar5 + (ulong)(uVar7 < uVar1) * 8);
      if (pDVar5 == (DelayedAssessments *)0x0) break;
      uVar7 = *(ulong *)(pDVar5 + 0x20);
      uVar6 = (uint)uVar7;
    }
    if (pDVar2 != pDVar4) {
      uVar7 = *(ulong *)(pDVar2 + 0x20);
      if (((uint)uVar7 >> 2 & 1) != 0) {
        uVar3 = 0x180;
        if (((uint)uVar7 >> 5 & 0xff) < 0xb || (uVar7 & 0x1c) != 4) {
          uVar3 = 0;
        }
        uVar7 = uVar7 & 0xffffffffffffe018 | uVar3 | 4;
      }
      if (uVar7 <= uVar1) {
        if (*(uint *)(pDVar2 + 0x28) == param_3) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","it->second == vreg");
      }
    }
  }
  uStack_18 = (ulong)param_3;
  local_20 = param_2;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>>>
  ::
  __emplace_unique_key_args<v8::internal::compiler::InstructionOperand,std::__ndk1::pair<v8::internal::compiler::InstructionOperand,int>>
            ((__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>>>
              *)this,(InstructionOperand *)&local_20,(pair *)&local_20);
  return;
}

