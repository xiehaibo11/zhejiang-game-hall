
/* v8::internal::compiler::InstructionSelector::EmitDeoptimize(unsigned int, unsigned long,
   v8::internal::compiler::InstructionOperand*, unsigned long,
   v8::internal::compiler::InstructionOperand*, v8::internal::DeoptimizeKind,
   v8::internal::DeoptimizeReason, v8::internal::compiler::FeedbackSource const&,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::EmitDeoptimize
          (InstructionSelector *this,uint param_1,ulong param_2,InstructionOperand *param_3,
          long param_4,long param_5,undefined4 param_7,undefined4 param_8,undefined8 param_9,
          undefined8 param_10)

{
  ulong uVar1;
  long lVar2;
  InstructionOperand *pIVar3;
  InstructionOperand *pIVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  InstructionOperand *local_80;
  InstructionOperand *local_78;
  InstructionOperand *local_70;
  Zone *local_68;
  
  local_68 = *(Zone **)(*(long *)(this + 0x10) + 8);
  local_80 = (InstructionOperand *)0x0;
  local_78 = (InstructionOperand *)0x0;
  local_70 = (InstructionOperand *)0x0;
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      lVar6 = (long)local_78 - (long)local_80 >> 3;
      uVar1 = lVar6 + 1;
      if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar5 = (long)local_70 - (long)local_80 >> 2;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      if (0x7fffffe < (ulong)((long)local_70 - (long)local_80 >> 3)) {
        uVar1 = 0xfffffff;
      }
      if (uVar1 == 0) {
        lVar2 = 0;
      }
      else {
        uVar5 = uVar1 * 8;
        lVar2 = *(long *)(local_68 + 0x10);
        if (uVar5 < (ulong)(*(long *)(local_68 + 0x18) - lVar2) ||
            uVar5 - (*(long *)(local_68 + 0x18) - lVar2) == 0) {
          *(ulong *)(local_68 + 0x10) = lVar2 + uVar5;
        }
        else {
          lVar2 = Zone::NewExpand(local_68,uVar5);
        }
      }
      pIVar3 = (InstructionOperand *)(lVar2 + lVar6 * 8);
      *(undefined8 *)pIVar3 = *(undefined8 *)(param_5 + lVar7 * 8);
      local_70 = (InstructionOperand *)(lVar2 + uVar1 * 8);
      pIVar4 = pIVar3;
      while (local_78 != local_80) {
        local_78 = local_78 + -8;
        pIVar4 = pIVar4 + -8;
        *(undefined8 *)pIVar4 = *(undefined8 *)local_78;
      }
      while( true ) {
        pIVar3 = pIVar3 + 8;
        lVar7 = lVar7 + 1;
        local_80 = pIVar4;
        local_78 = pIVar3;
        if (lVar7 == param_4) goto LAB_01635f28;
        if (pIVar3 == local_70) break;
        *(undefined8 *)pIVar3 = *(undefined8 *)(param_5 + lVar7 * 8);
      }
    } while( true );
  }
LAB_01635f28:
  AppendDeoptimizeArguments(this,&local_80,param_7,param_8,param_9,param_10);
  Emit(this,param_1 | (int)param_4 << 0x16,param_2,param_3,(long)local_78 - (long)local_80 >> 3,
       local_80,0,(InstructionOperand *)0x0);
  return;
}

