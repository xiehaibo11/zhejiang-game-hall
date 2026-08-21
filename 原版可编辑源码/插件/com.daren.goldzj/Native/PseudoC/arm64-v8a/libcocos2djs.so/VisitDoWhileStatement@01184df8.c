
/* v8::internal::Processor::VisitDoWhileStatement(v8::internal::DoWhileStatement*) */

void __thiscall
v8::internal::Processor::VisitDoWhileStatement(Processor *this,DoWhileStatement *param_1)

{
  Processor PVar1;
  ulong uVar2;
  undefined8 uVar3;
  AstNode *pAVar4;
  
  PVar1 = this[0x53];
  this[0x53] = (Processor)0x1;
  if (this[0x50] == (Processor)0x0) {
    pAVar4 = *(AstNode **)(param_1 + 0x18);
    uVar2 = GetCurrentStackPosition();
    if (uVar2 < *(ulong *)(this + 0x48)) {
      this[0x50] = (Processor)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar4);
    }
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 8);
  uVar3 = AssignUndefinedBefore(this,(Statement *)param_1);
  *(undefined8 *)(this + 8) = uVar3;
  this[0x52] = (Processor)0x1;
  this[0x53] = PVar1;
  return;
}

