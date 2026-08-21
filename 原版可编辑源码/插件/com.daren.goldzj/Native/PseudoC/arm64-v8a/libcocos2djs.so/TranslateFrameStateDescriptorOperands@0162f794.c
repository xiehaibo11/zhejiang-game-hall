
/* v8::internal::compiler::CodeGenerator::TranslateFrameStateDescriptorOperands(v8::internal::compiler::FrameStateDescriptor*,
   v8::internal::compiler::InstructionOperandIterator*, v8::internal::Translation*) */

void __thiscall
v8::internal::compiler::CodeGenerator::TranslateFrameStateDescriptorOperands
          (CodeGenerator *this,FrameStateDescriptor *param_1,InstructionOperandIterator *param_2,
          Translation *param_3)

{
  undefined8 *puVar1;
  StateValueList *pSVar2;
  StateValueDescriptor *pSVar3;
  StateValueDescriptor *pSVar4;
  undefined8 *puVar5;
  
  if (*(StateValueDescriptor **)(param_1 + 0x38) != *(StateValueDescriptor **)(param_1 + 0x30)) {
    pSVar4 = *(StateValueDescriptor **)(param_1 + 0x30);
    puVar5 = *(undefined8 **)(param_1 + 0x50);
    do {
      if (*pSVar4 == (StateValueDescriptor)0x4) {
        pSVar2 = (StateValueList *)*puVar5;
      }
      else {
        pSVar2 = (StateValueList *)0x0;
      }
      TranslateStateValueDescriptor(this,pSVar4,pSVar2,param_3,param_2);
      pSVar3 = pSVar4 + 0x10;
      puVar1 = puVar5 + 1;
      if (*pSVar4 != (StateValueDescriptor)0x4) {
        puVar1 = puVar5;
      }
      pSVar4 = pSVar3;
      puVar5 = puVar1;
    } while (pSVar3 != *(StateValueDescriptor **)(param_1 + 0x38));
  }
  return;
}

