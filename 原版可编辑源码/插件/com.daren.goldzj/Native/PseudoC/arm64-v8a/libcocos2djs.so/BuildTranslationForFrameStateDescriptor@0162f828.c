
/* v8::internal::compiler::CodeGenerator::BuildTranslationForFrameStateDescriptor(v8::internal::compiler::FrameStateDescriptor*,
   v8::internal::compiler::InstructionOperandIterator*, v8::internal::Translation*,
   v8::internal::compiler::OutputFrameStateCombine) */

void __thiscall
v8::internal::compiler::CodeGenerator::BuildTranslationForFrameStateDescriptor
          (CodeGenerator *this,FrameStateDescriptor *param_1,InstructionOperandIterator *param_2,
          Translation *param_3,ulong param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  StateValueList *pSVar5;
  undefined1 uVar6;
  StateValueDescriptor *pSVar7;
  StateValueDescriptor *pSVar8;
  undefined8 *puVar9;
  undefined4 local_70 [2];
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    BuildTranslationForFrameStateDescriptor(this,*(long *)(param_1 + 0x78),param_2,param_3,param_5);
  }
  local_68 = *(long *)(param_1 + 0x70);
  if ((local_68 != 0) || (local_68 = *(long *)(*(long *)(this + 0xa0) + 0x18), local_68 != 0)) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    local_70[0] = 0;
    uStack_60 = 0;
    local_58 = 0;
    iVar3 = DefineDeoptimizationLiteral(this,local_70);
    uVar4 = FrameStateDescriptor::GetHeight(param_1);
    switch(*(undefined4 *)param_1) {
    case 0:
      if (param_5 == 0xffffffffffffffff) {
        uVar6 = 0;
        param_5 = 0;
      }
      else {
        uVar6 = *(undefined1 *)(*(long *)param_2 + 4);
      }
      Translation::BeginInterpretedFrame(param_3,uVar2,iVar3,uVar4,param_5 & 0xffffffff,uVar6);
      break;
    case 1:
      Translation::BeginArgumentsAdaptorFrame(param_3,iVar3,(uint)uVar4);
      break;
    case 2:
      Translation::BeginConstructStubFrame(param_3,uVar2,iVar3);
      break;
    case 3:
      Translation::BeginBuiltinContinuationFrame(param_3,uVar2,iVar3);
      break;
    case 4:
      Translation::BeginJavaScriptBuiltinContinuationFrame(param_3,uVar2,iVar3);
      break;
    case 5:
      Translation::BeginJavaScriptBuiltinContinuationWithCatchFrame(param_3,uVar2,iVar3);
    }
    if (*(StateValueDescriptor **)(param_1 + 0x38) != *(StateValueDescriptor **)(param_1 + 0x30)) {
      pSVar8 = *(StateValueDescriptor **)(param_1 + 0x30);
      puVar9 = *(undefined8 **)(param_1 + 0x50);
      do {
        if (*pSVar8 == (StateValueDescriptor)0x4) {
          pSVar5 = (StateValueList *)*puVar9;
        }
        else {
          pSVar5 = (StateValueList *)0x0;
        }
        TranslateStateValueDescriptor(this,pSVar8,pSVar5,param_3,param_2);
        pSVar7 = pSVar8 + 0x10;
        puVar1 = puVar9 + 1;
        if (*pSVar8 != (StateValueDescriptor)0x4) {
          puVar1 = puVar9;
        }
        pSVar8 = pSVar7;
        puVar9 = puVar1;
      } while (pSVar7 != *(StateValueDescriptor **)(param_1 + 0x38));
    }
  }
  return;
}

