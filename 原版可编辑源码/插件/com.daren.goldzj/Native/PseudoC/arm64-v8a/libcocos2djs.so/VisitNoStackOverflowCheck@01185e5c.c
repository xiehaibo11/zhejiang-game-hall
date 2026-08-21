
/* v8::internal::Processor::VisitNoStackOverflowCheck(v8::internal::AstNode*) */

void __thiscall v8::internal::Processor::VisitNoStackOverflowCheck(Processor *this,AstNode *param_1)

{
  uint uVar1;
  Processor PVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  AstNode *pAVar8;
  Processor PVar9;
  long lVar10;
  
  uVar1 = *(uint *)(param_1 + 4);
  switch(uVar1 & 0x3f) {
  case 0:
  case 1:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    PVar9 = this[0x53];
    this[0x53] = (Processor)0x1;
    if (this[0x50] == (Processor)0x0) {
      pAVar8 = *(AstNode **)(param_1 + 0x18);
      uVar6 = GetCurrentStackPosition();
      if (uVar6 < *(ulong *)(this + 0x48)) {
        this[0x50] = (Processor)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar8);
      }
    }
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 8);
    goto LAB_011860a0;
  case 7:
    if ((uVar1 >> 7 & 1) == 0) {
      if ((uVar1 >> 8 & 1) == 0) {
        bVar3 = false;
      }
      else {
        bVar3 = *(long *)(param_1 + 0x20) != 0;
      }
      PVar9 = this[0x53];
      PVar2 = (Processor)(bVar3 | PVar9 != (Processor)0x0);
      this[0x53] = PVar2;
      uVar6 = (ulong)*(uint *)(param_1 + 0x14);
      if (0 < (int)*(uint *)(param_1 + 0x14)) {
        while ((uVar6 = uVar6 - 1, PVar2 != (Processor)0x0 || (this[0x52] == (Processor)0x0))) {
          if (this[0x50] == (Processor)0x0) {
            pAVar8 = *(AstNode **)(*(long *)(param_1 + 8) + uVar6 * 8);
            uVar7 = GetCurrentStackPosition();
            if (uVar7 < *(ulong *)(this + 0x48)) {
              this[0x50] = (Processor)0x1;
            }
            else {
              VisitNoStackOverflowCheck(this,pAVar8);
            }
          }
          *(undefined8 *)(*(long *)(param_1 + 8) + uVar6 * 8) = *(undefined8 *)(this + 8);
          if ((long)uVar6 < 1) break;
          PVar2 = this[0x53];
        }
      }
      this[0x53] = PVar9;
    }
    break;
  case 8:
    PVar9 = this[0x53];
    this[0x53] = (Processor)0x1;
    uVar6 = (ulong)*(uint *)(param_1 + 0x24);
    if (0 < (int)*(uint *)(param_1 + 0x24)) {
      do {
        uVar6 = uVar6 - 1;
        lVar10 = *(long *)(*(long *)(param_1 + 0x18) + uVar6 * 8);
        uVar7 = (ulong)*(uint *)(lVar10 + 0x14);
        if (0 < (int)*(uint *)(lVar10 + 0x14)) {
          PVar2 = this[0x53];
          while ((uVar7 = uVar7 - 1, PVar2 != (Processor)0x0 || (this[0x52] == (Processor)0x0))) {
            if (this[0x50] == (Processor)0x0) {
              pAVar8 = *(AstNode **)(*(long *)(lVar10 + 8) + uVar7 * 8);
              uVar4 = GetCurrentStackPosition();
              if (uVar4 < *(ulong *)(this + 0x48)) {
                this[0x50] = (Processor)0x1;
              }
              else {
                VisitNoStackOverflowCheck(this,pAVar8);
              }
            }
            *(undefined8 *)(*(long *)(lVar10 + 8) + uVar7 * 8) = *(undefined8 *)(this + 8);
            if ((long)uVar7 < 1) break;
            PVar2 = this[0x53];
          }
        }
      } while (0 < (long)uVar6);
    }
LAB_011860a0:
    uVar5 = AssignUndefinedBefore(this,(Statement *)param_1);
    *(undefined8 *)(this + 8) = uVar5;
    this[0x52] = (Processor)0x1;
    this[0x53] = PVar9;
    return;
  case 9:
    if (this[0x52] == (Processor)0x0) {
      uVar5 = SetResult(this,*(Expression **)(param_1 + 8));
      *(undefined8 *)(param_1 + 8) = uVar5;
      goto switchD_01185ea4_caseD_f;
    }
    break;
  case 10:
  case 0x13:
  case 0x14:
    break;
  case 0xb:
    if (this[0x50] == (Processor)0x0) {
      pAVar8 = *(AstNode **)(param_1 + 0x10);
      uVar6 = GetCurrentStackPosition();
      if (uVar6 < *(ulong *)(this + 0x48)) {
        this[0x50] = (Processor)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar8);
      }
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(this + 8);
    break;
  case 0xc:
    PVar9 = this[0x52];
    if (this[0x50] == (Processor)0x0) {
      pAVar8 = *(AstNode **)(param_1 + 0x10);
      uVar6 = GetCurrentStackPosition();
      if (uVar6 < *(ulong *)(this + 0x48)) {
        this[0x50] = (Processor)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar8);
      }
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(this + 8);
    goto LAB_011861c8;
  case 0xd:
  case 0xe:
    this[0x52] = (Processor)0x0;
    break;
  case 0xf:
switchD_01185ea4_caseD_f:
    this[0x52] = (Processor)0x1;
    break;
  case 0x10:
    if (this[0x50] == (Processor)0x0) {
      pAVar8 = *(AstNode **)(param_1 + 0x18);
      uVar6 = GetCurrentStackPosition();
      if (uVar6 < *(ulong *)(this + 0x48)) {
        this[0x50] = (Processor)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar8);
      }
    }
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 8);
    PVar9 = this[0x52];
    goto joined_r0x011861ac;
  case 0x11:
    PVar9 = this[0x52];
    if (this[0x50] == (Processor)0x0) {
      pAVar8 = *(AstNode **)(param_1 + 8);
      uVar6 = GetCurrentStackPosition();
      if (uVar6 < *(ulong *)(this + 0x48)) {
        this[0x50] = (Processor)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar8);
      }
    }
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 8);
LAB_011861c8:
    PVar2 = this[0x52];
    this[0x52] = PVar9;
    if (this[0x50] == (Processor)0x0) {
      pAVar8 = *(AstNode **)(param_1 + 0x18);
      uVar6 = GetCurrentStackPosition();
      if (uVar6 < *(ulong *)(this + 0x48)) {
        this[0x50] = (Processor)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar8);
      }
    }
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 8);
    if (PVar2 != (Processor)0x0) {
      PVar9 = this[0x52];
joined_r0x011861ac:
      if (PVar9 != (Processor)0x0) goto LAB_01186228;
    }
    param_1 = (AstNode *)AssignUndefinedBefore(this,(Statement *)param_1);
LAB_01186228:
    *(AstNode **)(this + 8) = param_1;
    this[0x52] = (Processor)0x1;
    return;
  case 0x12:
    VisitTryFinallyStatement(this,(TryFinallyStatement *)param_1);
    return;
  default:
    goto switchD_01185ea4_default;
  }
  *(AstNode **)(this + 8) = param_1;
switchD_01185ea4_default:
  return;
}

