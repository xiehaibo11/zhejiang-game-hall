
/* v8::internal::Processor::VisitBlock(v8::internal::Block*) */

void __thiscall v8::internal::Processor::VisitBlock(Processor *this,Block *param_1)

{
  Processor PVar1;
  Processor PVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  AstNode *pAVar6;
  
  if ((*(uint *)(param_1 + 4) >> 7 & 1) == 0) {
    if ((*(uint *)(param_1 + 4) >> 8 & 1) == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(long *)(param_1 + 0x20) != 0;
    }
    PVar1 = this[0x53];
    PVar2 = (Processor)(bVar3 | PVar1 != (Processor)0x0);
    this[0x53] = PVar2;
    uVar5 = (ulong)*(uint *)(param_1 + 0x14);
    if (0 < (int)*(uint *)(param_1 + 0x14)) {
      while ((uVar5 = uVar5 - 1, PVar2 != (Processor)0x0 || (this[0x52] == (Processor)0x0))) {
        if (this[0x50] == (Processor)0x0) {
          pAVar6 = *(AstNode **)(*(long *)(param_1 + 8) + uVar5 * 8);
          uVar4 = GetCurrentStackPosition();
          if (uVar4 < *(ulong *)(this + 0x48)) {
            this[0x50] = (Processor)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar6);
          }
        }
        *(undefined8 *)(*(long *)(param_1 + 8) + uVar5 * 8) = *(undefined8 *)(this + 8);
        if ((long)uVar5 < 1) break;
        PVar2 = this[0x53];
      }
    }
    this[0x53] = PVar1;
  }
  *(Block **)(this + 8) = param_1;
  return;
}

