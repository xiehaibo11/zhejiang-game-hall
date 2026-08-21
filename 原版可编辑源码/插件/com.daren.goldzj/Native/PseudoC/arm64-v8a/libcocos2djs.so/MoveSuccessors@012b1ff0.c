
/* v8::internal::compiler::Schedule::MoveSuccessors(v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::BasicBlock*) */

Schedule * __thiscall
v8::internal::compiler::Schedule::MoveSuccessors
          (Schedule *this,BasicBlock *param_1,BasicBlock *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  BasicBlock *pBVar8;
  undefined8 *puVar9;
  
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  if (puVar9 != puVar2) {
    do {
      pBVar8 = (BasicBlock *)*puVar9;
      this = (Schedule *)BasicBlock::AddSuccessor(param_2,pBVar8);
      puVar6 = *(undefined8 **)(pBVar8 + 0x80);
      puVar3 = *(undefined8 **)(pBVar8 + 0x88);
      if (puVar6 != puVar3) {
        uVar1 = ((ulong)((long)puVar3 + (-8 - (long)puVar6)) >> 3) + 1;
        puVar4 = puVar6;
        if (3 < uVar1) {
          uVar5 = uVar1 & 0x3ffffffffffffffc;
          puVar4 = puVar6 + uVar5;
          puVar6 = puVar6 + 2;
          uVar7 = uVar5;
          do {
            if ((BasicBlock *)puVar6[-2] == param_1) {
              puVar6[-2] = param_2;
            }
            if ((BasicBlock *)puVar6[-1] == param_1) {
              puVar6[-1] = param_2;
            }
            if ((BasicBlock *)*puVar6 == param_1) {
              *puVar6 = param_2;
            }
            if ((BasicBlock *)puVar6[1] == param_1) {
              puVar6[1] = param_2;
            }
            uVar7 = uVar7 - 4;
            puVar6 = puVar6 + 4;
          } while (uVar7 != 0);
          if (uVar1 == uVar5) goto LAB_012b2028;
        }
        do {
          if ((BasicBlock *)*puVar4 == param_1) {
            *puVar4 = param_2;
          }
          puVar4 = puVar4 + 1;
        } while (puVar3 != puVar4);
      }
LAB_012b2028:
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar2);
    puVar9 = *(undefined8 **)(param_1 + 0x60);
  }
  *(undefined8 **)(param_1 + 0x68) = puVar9;
  return this;
}

