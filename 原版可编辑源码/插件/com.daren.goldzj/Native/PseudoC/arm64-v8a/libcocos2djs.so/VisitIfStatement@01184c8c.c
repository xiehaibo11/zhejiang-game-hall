
/* v8::internal::Processor::VisitIfStatement(v8::internal::IfStatement*) */

void __thiscall v8::internal::Processor::VisitIfStatement(Processor *this,IfStatement *param_1)

{
  Processor PVar1;
  Processor PVar2;
  ulong uVar3;
  AstNode *pAVar4;
  
  PVar1 = this[0x52];
  if (this[0x50] == (Processor)0x0) {
    pAVar4 = *(AstNode **)(param_1 + 0x10);
    uVar3 = GetCurrentStackPosition();
    if (uVar3 < *(ulong *)(this + 0x48)) {
      this[0x50] = (Processor)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar4);
    }
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(this + 8);
  PVar2 = this[0x52];
  this[0x52] = PVar1;
  if (this[0x50] == (Processor)0x0) {
    pAVar4 = *(AstNode **)(param_1 + 0x18);
    uVar3 = GetCurrentStackPosition();
    if (uVar3 < *(ulong *)(this + 0x48)) {
      this[0x50] = (Processor)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar4);
    }
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 8);
  if ((PVar2 == (Processor)0x0) || (this[0x52] == (Processor)0x0)) {
    param_1 = (IfStatement *)AssignUndefinedBefore(this,(Statement *)param_1);
  }
  *(IfStatement **)(this + 8) = param_1;
  this[0x52] = (Processor)0x1;
  return;
}

