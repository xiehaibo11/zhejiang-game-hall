
/* v8::internal::compiler::CodeGenerator::TranslateStateValueDescriptor(v8::internal::compiler::StateValueDescriptor*,
   v8::internal::compiler::StateValueList*, v8::internal::Translation*,
   v8::internal::compiler::InstructionOperandIterator*) */

void __thiscall
v8::internal::compiler::CodeGenerator::TranslateStateValueDescriptor
          (CodeGenerator *this,StateValueDescriptor *param_1,StateValueList *param_2,
          Translation *param_3,InstructionOperandIterator *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  StateValueDescriptor *pSVar4;
  int iVar5;
  StateValueList *pSVar6;
  StateValueDescriptor *pSVar7;
  StateValueDescriptor *pSVar8;
  undefined8 *puVar9;
  undefined4 local_60 [2];
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  switch(*param_1) {
  case (StateValueDescriptor)0x0:
    if (param_3 != (Translation *)0x0) {
      Translation::ArgumentsElements(param_3,param_1[8]);
      return;
    }
    break;
  case (StateValueDescriptor)0x1:
    if (param_3 != (Translation *)0x0) {
      Translation::ArgumentsLength(param_3,param_1[8]);
      return;
    }
    break;
  case (StateValueDescriptor)0x2:
    lVar2 = *(long *)param_4;
    lVar3 = *(long *)(param_4 + 8);
    *(long *)(param_4 + 8) = lVar3 + 1;
    if (param_3 != (Translation *)0x0) {
      AddTranslationForOperand
                (this,param_3,lVar2,lVar2 + (lVar3 + (ulong)*(byte *)(lVar2 + 4)) * 8 + 0x28,
                 *(undefined2 *)(param_1 + 1));
      return;
    }
    break;
  default:
    if (param_3 != (Translation *)0x0) {
      iVar5 = *(int *)(this + 0x3fc);
      if (iVar5 == -1) {
        local_60[0] = 0;
        local_58 = *(long *)(this + 0x10) + 400;
        uStack_50 = 0;
        local_48 = 0;
        iVar5 = DefineDeoptimizationLiteral(this,local_60);
        *(int *)(this + 0x3fc) = iVar5;
      }
      Translation::StoreLiteral(param_3,iVar5);
      return;
    }
    break;
  case (StateValueDescriptor)0x4:
    if (param_3 != (Translation *)0x0) {
      Translation::BeginCapturedObject
                (param_3,(int)((ulong)(*(long *)(param_2 + 8) - *(long *)param_2) >> 4));
    }
    pSVar4 = *(StateValueDescriptor **)(param_2 + 8);
    if (pSVar4 != *(StateValueDescriptor **)param_2) {
      pSVar8 = *(StateValueDescriptor **)param_2;
      puVar9 = *(undefined8 **)(param_2 + 0x20);
      do {
        if (*pSVar8 == (StateValueDescriptor)0x4) {
          pSVar6 = (StateValueList *)*puVar9;
        }
        else {
          pSVar6 = (StateValueList *)0x0;
        }
        TranslateStateValueDescriptor(this,pSVar8,pSVar6,param_3,param_4);
        pSVar7 = pSVar8 + 0x10;
        puVar1 = puVar9 + 1;
        if (*pSVar8 != (StateValueDescriptor)0x4) {
          puVar1 = puVar9;
        }
        pSVar8 = pSVar7;
        puVar9 = puVar1;
      } while (pSVar4 != pSVar7);
    }
    break;
  case (StateValueDescriptor)0x5:
    if (param_3 != (Translation *)0x0) {
      Translation::DuplicateObject(param_3,*(int *)(param_1 + 8));
      return;
    }
  }
  return;
}

