
/* v8::internal::interpreter::BytecodeGenerator::VisitInSameTestExecutionScope(v8::internal::Expression*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitInSameTestExecutionScope
          (BytecodeGenerator *this,Expression *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  iVar1 = *(int *)(this + 0x118);
  if (this[8] == (BytecodeGenerator)0x0) {
    uVar3 = GetCurrentStackPosition();
    if (uVar3 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,(AstNode *)param_1);
    }
  }
  plVar4 = *(long **)(this + 0x120);
  iVar2 = *(int *)(this + 0x118);
  *(int *)(this + 0x118) = iVar1;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,CONCAT44(iVar2 - iVar1,iVar1));
  }
  lVar5 = *(long *)(this + 0x300);
  if (*(char *)(lVar5 + 0x20) == '\0') {
    BuildTest(this,*(int *)(lVar5 + 0x1c) == 1,*(undefined8 *)(lVar5 + 0x28),
              *(undefined8 *)(lVar5 + 0x30),*(undefined4 *)(lVar5 + 0x24));
    *(undefined1 *)(lVar5 + 0x20) = 1;
  }
  return;
}

