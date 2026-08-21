
/* v8::internal::Processor::VisitSwitchStatement(v8::internal::SwitchStatement*) */

void __thiscall
v8::internal::Processor::VisitSwitchStatement(Processor *this,SwitchStatement *param_1)

{
  Processor PVar1;
  Processor PVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  AstNode *pAVar6;
  ulong uVar7;
  long lVar8;
  
  PVar1 = this[0x53];
  this[0x53] = (Processor)0x1;
  uVar7 = (ulong)*(uint *)(param_1 + 0x24);
  if (0 < (int)*(uint *)(param_1 + 0x24)) {
    do {
      uVar7 = uVar7 - 1;
      lVar8 = *(long *)(*(long *)(param_1 + 0x18) + uVar7 * 8);
      uVar5 = (ulong)*(uint *)(lVar8 + 0x14);
      if (0 < (int)*(uint *)(lVar8 + 0x14)) {
        PVar2 = this[0x53];
        while ((uVar5 = uVar5 - 1, PVar2 != (Processor)0x0 || (this[0x52] == (Processor)0x0))) {
          if (this[0x50] == (Processor)0x0) {
            pAVar6 = *(AstNode **)(*(long *)(lVar8 + 8) + uVar5 * 8);
            uVar3 = GetCurrentStackPosition();
            if (uVar3 < *(ulong *)(this + 0x48)) {
              this[0x50] = (Processor)0x1;
            }
            else {
              VisitNoStackOverflowCheck(this,pAVar6);
            }
          }
          *(undefined8 *)(*(long *)(lVar8 + 8) + uVar5 * 8) = *(undefined8 *)(this + 8);
          if ((long)uVar5 < 1) break;
          PVar2 = this[0x53];
        }
      }
    } while (0 < (long)uVar7);
  }
  uVar4 = AssignUndefinedBefore(this,(Statement *)param_1);
  *(undefined8 *)(this + 8) = uVar4;
  this[0x52] = (Processor)0x1;
  this[0x53] = PVar1;
  return;
}

