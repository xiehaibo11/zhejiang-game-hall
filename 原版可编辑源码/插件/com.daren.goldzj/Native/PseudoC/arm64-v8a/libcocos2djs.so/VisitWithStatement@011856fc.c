
/* v8::internal::Processor::VisitWithStatement(v8::internal::WithStatement*) */

void __thiscall v8::internal::Processor::VisitWithStatement(Processor *this,WithStatement *param_1)

{
  ulong uVar1;
  AstNode *pAVar2;
  
  if (this[0x50] == (Processor)0x0) {
    pAVar2 = *(AstNode **)(param_1 + 0x18);
    uVar1 = GetCurrentStackPosition();
    if (uVar1 < *(ulong *)(this + 0x48)) {
      this[0x50] = (Processor)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 8);
  if (this[0x52] == (Processor)0x0) {
    param_1 = (WithStatement *)AssignUndefinedBefore(this,(Statement *)param_1);
  }
  *(WithStatement **)(this + 8) = param_1;
  this[0x52] = (Processor)0x1;
  return;
}

