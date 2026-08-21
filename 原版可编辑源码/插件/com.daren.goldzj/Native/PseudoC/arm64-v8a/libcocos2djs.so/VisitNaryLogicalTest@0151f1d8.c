
/* v8::internal::interpreter::BytecodeGenerator::VisitNaryLogicalTest(v8::internal::Token::Value,
   v8::internal::NaryOperation*, v8::internal::interpreter::BytecodeGenerator::NaryCodeCoverageSlots
   const*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitNaryLogicalTest
          (BytecodeGenerator *this,undefined4 param_2,long param_3,long *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar6 = *(long *)(this + 0x300);
  uVar2 = *(undefined8 *)(lVar6 + 0x28);
  uVar3 = *(undefined8 *)(lVar6 + 0x30);
  uVar4 = *(undefined4 *)(lVar6 + 0x24);
  if (*(long *)(*param_4 + 0x208) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)param_4[1];
  }
  VisitLogicalTestSubExpression(this,param_2,*(undefined8 *)(param_3 + 8),uVar2,uVar3,uVar5);
  lVar6 = *(long *)(param_3 + 0x10);
  if (*(long *)(param_3 + 0x18) - lVar6 == 0x10) {
    uVar7 = 0;
  }
  else {
    lVar9 = 0;
    uVar8 = 0;
    do {
      uVar1 = uVar8 + 1;
      if (*(long *)(*param_4 + 0x208) == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = *(undefined4 *)(param_4[1] + uVar8 * 4 + 4);
      }
      VisitLogicalTestSubExpression(this,param_2,*(undefined8 *)(lVar6 + lVar9),uVar2,uVar3,uVar5);
      lVar6 = *(long *)(param_3 + 0x10);
      lVar9 = lVar9 + 0x10;
      uVar7 = (*(long *)(param_3 + 0x18) - lVar6 >> 4) - 1;
      uVar8 = uVar1;
    } while (uVar1 < uVar7);
  }
  VisitForTest(this,*(undefined8 *)(lVar6 + uVar7 * 0x10),uVar2,uVar3,uVar4);
  return;
}

