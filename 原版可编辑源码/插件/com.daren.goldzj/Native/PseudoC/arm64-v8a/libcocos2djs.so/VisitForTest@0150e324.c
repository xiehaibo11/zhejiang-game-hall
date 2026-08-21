
/* v8::internal::interpreter::BytecodeGenerator::VisitForTest(v8::internal::Expression*,
   v8::internal::interpreter::BytecodeLabels*, v8::internal::interpreter::BytecodeLabels*,
   v8::internal::interpreter::BytecodeGenerator::TestFallthrough) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitForTest
          (BytecodeGenerator *this,AstNode *param_1,undefined8 param_2,undefined8 param_3,
          undefined4 param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 local_90;
  BytecodeGenerator *pBStack_88;
  int local_80;
  undefined8 local_78;
  char local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_90 = *(undefined8 *)(this + 0x300);
  local_80 = *(int *)(this + 0x118);
  local_78 = 3;
  *(undefined8 **)(this + 0x300) = &local_90;
  local_70 = '\0';
  pBStack_88 = this;
  local_6c = param_5;
  local_68 = param_2;
  uStack_60 = param_3;
  if (this[8] == (BytecodeGenerator)0x0) {
    uVar8 = GetCurrentStackPosition();
    if (uVar8 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,param_1);
    }
  }
  uVar7 = uStack_60;
  uVar6 = local_68;
  uVar5 = local_6c;
  cVar4 = local_70;
  iVar3 = local_78._4_4_;
  *(undefined8 *)(pBStack_88 + 0x300) = local_90;
  plVar9 = *(long **)(pBStack_88 + 0x120);
  iVar1 = *(int *)(pBStack_88 + 0x118);
  *(int *)(pBStack_88 + 0x118) = local_80;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar1 - local_80,local_80));
  }
  if (cVar4 == '\0') {
    BuildTest(this,iVar3 == 1,uVar6,uVar7,uVar5);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

