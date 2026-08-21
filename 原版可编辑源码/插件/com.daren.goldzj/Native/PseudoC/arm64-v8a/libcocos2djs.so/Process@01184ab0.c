
/* v8::internal::Processor::Process(v8::internal::ZoneList<v8::internal::Statement*>*) */

void __thiscall v8::internal::Processor::Process(Processor *this,ZoneList *param_1)

{
  Processor PVar1;
  ulong uVar2;
  ulong uVar3;
  AstNode *pAVar4;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0xc);
  if (0 < (int)*(uint *)(param_1 + 0xc)) {
    PVar1 = this[0x53];
    while ((uVar3 = uVar3 - 1, PVar1 != (Processor)0x0 || (this[0x52] == (Processor)0x0))) {
      if (this[0x50] == (Processor)0x0) {
        pAVar4 = *(AstNode **)(*(long *)param_1 + uVar3 * 8);
        uVar2 = GetCurrentStackPosition();
        if (uVar2 < *(ulong *)(this + 0x48)) {
          this[0x50] = (Processor)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar4);
        }
      }
      *(undefined8 *)(*(long *)param_1 + uVar3 * 8) = *(undefined8 *)(this + 8);
      if ((long)uVar3 < 1) {
        return;
      }
      PVar1 = this[0x53];
    }
  }
  return;
}

