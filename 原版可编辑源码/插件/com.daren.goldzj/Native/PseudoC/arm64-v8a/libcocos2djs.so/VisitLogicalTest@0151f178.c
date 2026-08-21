
/* v8::internal::interpreter::BytecodeGenerator::VisitLogicalTest(v8::internal::Token::Value,
   v8::internal::Expression*, v8::internal::Expression*, int) */

void v8::internal::interpreter::BytecodeGenerator::VisitLogicalTest
               (BytecodeGenerator *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x300);
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  uVar2 = *(undefined8 *)(lVar4 + 0x30);
  uVar3 = *(undefined4 *)(lVar4 + 0x24);
  VisitLogicalTestSubExpression();
  VisitForTest(param_1,param_4,uVar1,uVar2,uVar3);
  return;
}

