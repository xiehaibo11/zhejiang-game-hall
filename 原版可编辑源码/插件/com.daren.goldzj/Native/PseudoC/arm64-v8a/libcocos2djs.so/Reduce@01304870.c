
/* v8::internal::compiler::Typer::Visitor::Reduce(v8::internal::compiler::Node*) */

undefined8 __thiscall v8::internal::compiler::Typer::Visitor::Reduce(Visitor *this,Node *param_1)

{
  OperationTyper *pOVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  Zone *pZVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  char *pcVar12;
  Operator *pOVar13;
  double dVar14;
  undefined8 *puVar15;
  int *piVar16;
  int *piVar17;
  long lVar18;
  int iVar19;
  double dVar20;
  int *local_50;
  int *local_48;
  
  pOVar13 = *(Operator **)param_1;
  if (*(int *)(pOVar13 + 0x20) == 0) {
    return 0;
  }
  uVar5 = 0;
  switch(*(undefined2 *)(pOVar13 + 0x10)) {
  case 0:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x30:
    pcVar12 = (char *)0x3800001;
    break;
  default:
    goto switchD_013048c0_caseD_1;
  case 7:
  case 0xe9:
  case 0xf0:
  case 0x2e9:
  case 0x2ea:
  case 0x2eb:
    pcVar12 = (char *)0xc7f7fff;
    break;
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x24:
  case 0x26:
  case 0x27:
  case 0x2f:
  case 0x34:
  case 0x36:
  case 0x38:
  case 0x39:
  case 0x3e:
  case 0x78:
  case 0xd5:
  case 0xd6:
  case 0xe1:
  case 0xe2:
  case 0xe8:
  case 0xee:
  case 0xf1:
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf7:
  case 0xf8:
  case 0xf9:
  case 0xfa:
  case 0xff:
  case 0x101:
  case 0x11c:
  case 0x120:
  case 0x121:
  case 0x2ec:
  case 0x2ed:
  case 0x2ee:
  case 0x2ef:
  case 0x2f0:
  case 0x2f1:
  case 0x2f7:
  case 0x30d:
  case 0x30f:
  case 0x310:
switchD_013048c0_caseD_17:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x1b:
  case 0x1d:
  case 0x113:
    pcVar12 = (char *)0x2000001;
    break;
  case 0x1c:
    pcVar12 = (char *)Type::NewConstant(*(double *)(pOVar13 + 0x30),
                                        (Zone *)**(undefined8 **)(*(long *)(this + 8) + 8));
    break;
  case 0x1e:
    uVar5 = HeapConstantOf(pOVar13);
    pcVar12 = (char *)Type::NewConstant(*(undefined8 *)(*(long *)(this + 8) + 0x20),uVar5,
                                        **(undefined8 **)(*(long *)(this + 8) + 8));
    break;
  case 0x22:
    lVar11 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar11 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    lVar11 = NodeProperties::GetValueInput(param_1,2);
    lVar11 = *(long *)(lVar11 + 8);
    puVar15 = *(undefined8 **)(*(long *)(this + 8) + 8);
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    goto LAB_013063a4;
  case 0x23:
    iVar3 = *(int *)(pOVar13 + 0x14);
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    pcVar12 = *(char **)(lVar11 + 8);
    if (pcVar12 == (char *)0x0) {
      pcVar12 = (char *)0x1;
    }
    if (1 < iVar3) {
      iVar19 = 1;
      do {
        lVar11 = NodeProperties::GetValueInput(param_1,iVar19);
        lVar11 = *(long *)(lVar11 + 8);
        if (lVar11 == 0) {
          lVar11 = 1;
        }
        pcVar12 = (char *)Type::Union(pcVar12,lVar11,**(undefined8 **)(*(long *)(this + 8) + 8));
        iVar19 = iVar19 + 1;
      } while (iVar3 != iVar19);
    }
    break;
  case 0x25:
    pcVar12 = (char *)TypeInductionVariablePhi(this,param_1);
    break;
  case 0x28:
  case 0x35:
  case 0xde:
    iVar3 = 0;
    goto LAB_01304b10;
  case 0x31:
  case 0xec:
  case 0x30b:
  case 0x30c:
  case 0x30e:
  case 0x312:
  case 0x313:
  case 0x314:
  case 0x31a:
  case 0x31d:
    pcVar12 = (char *)0xffffffff;
    break;
  case 0x32:
    pcVar12 = (char *)TypeParameter(this,param_1);
    break;
  case 0x33:
    iVar3 = OsrValueIndexOf(pOVar13);
    pcVar12 = "a";
    if (iVar3 != -1) {
      pcVar12 = (char *)0xffffffff;
    }
    break;
  case 0x37:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    local_48 = *(int **)(lVar11 + 8);
    if (local_48 == (int *)0x0) {
      local_48 = (int *)0x1;
    }
    if (local_48 == (int *)0x1) {
LAB_0130717c:
      piVar7 = (int *)0x1;
    }
    else {
      uVar6 = Type::SlowIs((Type *)&local_48,1);
      piVar7 = (int *)0x1;
      if ((uVar6 & 1) == 0) {
        uVar6 = ProjectionIndexOf(*(Operator **)param_1);
        if (((((ulong)local_48 & 1) == 0) && (*local_48 == 2)) &&
           (lVar11 = Type::AsTuple((Type *)&local_48), (int)uVar6 < *(int *)(lVar11 + 4))) {
          lVar11 = Type::AsTuple((Type *)&local_48);
          piVar7 = *(int **)(*(long *)(lVar11 + 8) +
                            (-(uVar6 >> 0x1f & 1) & 0xfffffff800000000 | (uVar6 & 0xffffffff) << 3))
          ;
        }
        else {
          piVar7 = (int *)&DAT_ffffffff;
        }
      }
    }
    goto LAB_013073c4;
  case 0x3a:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    pcVar12 = (char *)OperationTyper::TypeTypeGuard
                                ((OperationTyper *)(*(long *)(this + 8) + 0x28),
                                 *(undefined8 *)param_1,lVar11);
    break;
  case 0x3b:
  case 0x3c:
  case 0x3d:
    goto switchD_013048c0_caseD_3b;
  case 0x6f:
  case 0x72:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      lVar18 = *(long *)(this + 8);
      pOVar1 = (OperationTyper *)(lVar18 + 0x28);
      uVar5 = OperationTyper::ToNumber(pOVar1,lVar11);
      uVar10 = OperationTyper::ToNumber(pOVar1,lVar9);
      pcVar12 = (char *)JSEqualTyper(uVar5,uVar10,lVar18);
    }
    break;
  case 0x70:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 == 1) || (lVar9 == 1)) break;
    lVar18 = *(long *)(this + 8);
    uVar5 = OperationTyper::ToNumber((OperationTyper *)(lVar18 + 0x28),lVar11);
    uVar10 = OperationTyper::ToNumber((OperationTyper *)(lVar18 + 0x28),lVar9);
    uVar4 = NumberCompareTyper(uVar5,uVar10);
    if (uVar4 != 0) goto joined_r0x01306b80;
    goto LAB_01306b8c;
  case 0x71:
  case 0x74:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar9 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    lVar11 = NodeProperties::GetValueInput(param_1,1);
    lVar11 = *(long *)(lVar11 + 8);
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    if ((lVar9 == 1) || (lVar11 == 1)) break;
    lVar18 = *(long *)(this + 8);
    lVar11 = OperationTyper::ToNumber((OperationTyper *)(lVar18 + 0x28));
    lVar9 = OperationTyper::ToNumber((OperationTyper *)(lVar18 + 0x28),lVar9);
    goto LAB_01306294;
  case 0x73:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 == 1) || (lVar9 == 1)) break;
    lVar18 = *(long *)(this + 8);
    uVar5 = OperationTyper::ToNumber((OperationTyper *)(lVar18 + 0x28),lVar11);
    uVar10 = OperationTyper::ToNumber((OperationTyper *)(lVar18 + 0x28),lVar9);
    uVar4 = NumberCompareTyper(uVar5,uVar10);
    if (uVar4 == 0) goto LAB_01306b8c;
joined_r0x01306b80:
    if ((uVar4 & 6) == 0) {
      pcVar12 = *(char **)(lVar18 + 0xa8);
      break;
    }
    if ((uVar4 & 1) == 0) {
      pcVar12 = *(char **)(lVar18 + 0xa0);
      break;
    }
    goto LAB_01306334;
  case 0x75:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    piVar17 = *(int **)(lVar11 + 8);
    if (piVar17 == (int *)0x0) {
      piVar17 = (int *)0x1;
    }
    lVar11 = NodeProperties::GetValueInput(param_1,1);
    piVar16 = *(int **)(lVar11 + 8);
    if (piVar16 == (int *)0x0) {
      piVar16 = (int *)0x1;
    }
    piVar7 = (int *)0x1;
    if ((piVar17 != (int *)0x1) && (piVar16 != (int *)0x1)) {
      lVar11 = *(long *)(this + 8);
      local_48 = piVar16;
      if (((((ulong)piVar17 & 1) == 0) && (*piVar17 == 0)) &&
         ((piVar16 == piVar17 || (uVar6 = Type::SlowIs((Type *)&local_48,piVar17), (uVar6 & 1) != 0)
          ))) {
        piVar7 = *(int **)(lVar11 + 0xa8);
      }
      else {
        piVar7 = (int *)0x201;
      }
    }
    goto LAB_013073c4;
  case 0x76:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::SameValue
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x77:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::SameValueNumbersOnly(*(long *)(this + 8) + 0x28,lVar11);
    }
    break;
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 199:
  case 0xe3:
  case 0xfc:
  case 0xfd:
  case 0xfe:
  case 0x100:
  case 0x102:
  case 0x2f2:
  case 0x2f3:
  case 0x2f5:
  case 0x31b:
  case 0x31c:
    pcVar12 = (char *)0x201;
    break;
  case 0x7c:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::NumberAdd
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x7d:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::NumberSubtract
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x7e:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::NumberMultiply
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x7f:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::NumberDivide
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x80:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::NumberModulus
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x81:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::NumberBitwiseOr
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x82:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::NumberBitwiseXor
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x83:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::NumberBitwiseAnd
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x84:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::NumberShiftLeft
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x85:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::NumberShiftRight
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x86:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::NumberShiftRightLogical
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x87:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::NumberAtan2(*(long *)(this + 8) + 0x28,lVar11);
    }
    break;
  case 0x88:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::NumberImul(*(long *)(this + 8) + 0x28,lVar11);
    }
    break;
  case 0x89:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::NumberMax
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x8a:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::NumberMin
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x8b:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::NumberPow(*(long *)(this + 8) + 0x28,lVar11);
    }
    break;
  case 0x8c:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::BigIntAdd
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x8d:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::BigIntSubtract
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x8e:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::SpeculativeNumberAdd
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x8f:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::SpeculativeNumberSubtract
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x90:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::SpeculativeNumberMultiply
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x91:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::SpeculativeNumberDivide
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x92:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::SpeculativeNumberModulus
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x93:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::SpeculativeNumberBitwiseAnd
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x94:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::SpeculativeNumberBitwiseOr
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x95:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::SpeculativeNumberBitwiseXor
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x96:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::SpeculativeNumberShiftLeft
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x97:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::SpeculativeNumberShiftRight
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x98:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::SpeculativeNumberShiftRightLogical
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x99:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::SpeculativeSafeIntegerAdd
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x9a:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::SpeculativeSafeIntegerSubtract
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x9b:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberAbs((OperationTyper *)(*(long *)(this + 8) + 0x28));
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0x9c:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberAcos(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0x9d:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberAcosh(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0x9e:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberAsin(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0x9f:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberAsinh(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xa0:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberAtan(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xa1:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberAtanh(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xa2:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberCbrt(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xa3:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberCeil((OperationTyper *)(*(long *)(this + 8) + 0x28));
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xa4:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberClz32(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xa5:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberCos(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xa6:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberCosh(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xa7:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberExp(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xa8:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberExpm1(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xa9:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberFloor((OperationTyper *)(*(long *)(this + 8) + 0x28));
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xaa:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberFround(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xab:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberLog(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xac:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberLog1p(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xad:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberLog2(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xae:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberLog10(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xaf:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberRound((OperationTyper *)(*(long *)(this + 8) + 0x28));
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xb0:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberSign((OperationTyper *)(*(long *)(this + 8) + 0x28));
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xb1:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberSin(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xb2:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberSinh(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xb3:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberSqrt(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xb4:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberTan(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xb5:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberTanh(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xb6:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberTrunc((OperationTyper *)(*(long *)(this + 8) + 0x28));
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xb7:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberToBoolean
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28));
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xb8:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberToInt32
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28));
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xb9:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberToString
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28));
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xba:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberToUint32
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28));
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xbb:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberToUint8Clamped
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28));
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xbc:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::NumberSilenceNaN
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28));
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xbd:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::BigIntAsUintN(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xbe:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::BigIntNegate((OperationTyper *)(*(long *)(this + 8) + 0x28))
      ;
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xbf:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::CheckBigInt(*(long *)(this + 8) + 0x28);
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xc0:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::SpeculativeToNumber
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28));
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xc1:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::SpeculativeBigIntNegate
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28));
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xc2:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::SpeculativeBigIntAdd
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0xc3:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::SpeculativeBigIntSubtract
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0xc4:
  case 0xc9:
  case 0x2c8:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::ToNumber((OperationTyper *)(*(long *)(this + 8) + 0x28));
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0xc5:
    pcVar12 = (char *)0x44f;
    break;
  case 0xc6:
  case 0x122:
  case 0x2cd:
    pcVar12 = (char *)0x1c5f;
    break;
  case 200:
  case 0xce:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0x118:
  case 0x119:
    pcVar12 = (char *)0x4021;
    break;
  case 0xca:
    pcVar12 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x80);
    break;
  case 0xcb:
    dVar20 = 0.0;
    pZVar8 = (Zone *)**(undefined8 **)(*(long *)(this + 8) + 8);
    dVar14 = 1114111.0;
    goto LAB_01305fcc;
  case 0xcc:
  case 0xcd:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    pcVar12 = (char *)0x4021;
    if (*(ulong *)(lVar11 + 8) < 2) {
      pcVar12 = (char *)0x1;
    }
    break;
  case 0xcf:
    dVar20 = -1.0;
    pZVar8 = (Zone *)**(undefined8 **)(*(long *)(this + 8) + 8);
    dVar14 = 268435440.0;
LAB_01305fcc:
    pcVar12 = (char *)Type::Range(dVar20,dVar14,pZVar8);
    break;
  case 0xd0:
    pcVar12 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x1e8);
    break;
  case 0xd4:
    lVar9 = *(long *)(this + 8);
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar18 = NodeProperties::GetValueInput(param_1,1);
    lVar18 = *(long *)(lVar18 + 8);
    if (lVar18 == 0) {
      lVar18 = 1;
    }
    pcVar12 = (char *)OperationTyper::CheckBounds((OperationTyper *)(lVar9 + 0x28),lVar11,lVar18);
    break;
  case 0xd7:
    lVar9 = *(long *)(this + 8);
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    pcVar12 = (char *)OperationTyper::CheckNumber((OperationTyper *)(lVar9 + 0x28),lVar11);
    break;
  case 0xd8:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar9 = *(long *)(this + 8);
    lVar11 = *(long *)(lVar11 + 8);
    uVar4 = 0x4001;
    goto LAB_01306e38;
  case 0xd9:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar9 = *(long *)(this + 8);
    lVar11 = *(long *)(lVar11 + 8);
    uVar4 = 1;
    goto LAB_01306a84;
  case 0xda:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar9 = *(long *)(this + 8);
    lVar11 = *(long *)(lVar11 + 8);
    uVar4 = 0x181;
LAB_01306a84:
    uVar4 = uVar4 | 0x47f0000;
    goto LAB_01306e38;
  case 0xdb:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar9 = *(long *)(this + 8);
    lVar11 = *(long *)(lVar11 + 8);
    uVar4 = 0x4021;
    goto LAB_01306e38;
  case 0xdc:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar9 = *(long *)(this + 8);
    lVar11 = *(long *)(lVar11 + 8);
    uVar4 = 0x2001;
    goto LAB_01306e38;
  case 0xdd:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    uVar4 = BitsetType::SignedSmall();
    uVar4 = uVar4 | 1;
    puVar15 = *(undefined8 **)(*(long *)(this + 8) + 8);
    goto LAB_01306e44;
  case 0xdf:
    lVar9 = *(long *)(this + 8);
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    pcVar12 = (char *)OperationTyper::CheckFloat64Hole((OperationTyper *)(lVar9 + 0x28),lVar11);
    break;
  case 0xe0:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar9 = *(long *)(this + 8);
    lVar11 = *(long *)(lVar11 + 8);
    uVar4 = 0xc7f7fff;
LAB_01306e38:
    puVar15 = *(undefined8 **)(lVar9 + 8);
    if (lVar11 == 0) {
      lVar11 = 1;
    }
LAB_01306e44:
    pcVar12 = (char *)Type::Intersect(lVar11,uVar4,*puVar15);
    break;
  case 0xe4:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    pcVar12 = (char *)OperationTyper::ConvertReceiver
                                ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    break;
  case 0xe5:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    pcVar12 = (char *)OperationTyper::ConvertTaggedHoleToUndefined
                                ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    break;
  case 0xe6:
    pcVar12 = (char *)0x4001;
    break;
  case 0xe7:
    pcVar12 = (char *)AllocateTypeOf(pOVar13);
    break;
  case 0xea:
    lVar11 = FieldAccessOf(pOVar13);
    pcVar12 = *(char **)(lVar11 + 0x18);
    break;
  case 0xeb:
    lVar11 = ElementAccessOf(pOVar13);
    pcVar12 = *(char **)(lVar11 + 8);
    break;
  case 0xed:
    uVar2 = ExternalArrayTypeOf(pOVar13);
    switch(uVar2) {
    case 1:
switchD_01305abc_caseD_1:
      pcVar12 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x58);
      break;
    case 2:
switchD_01305abc_caseD_2:
      pcVar12 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x60);
      break;
    case 3:
switchD_01305abc_caseD_3:
      pcVar12 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x78);
      break;
    case 4:
switchD_01305abc_caseD_4:
      pcVar12 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x80);
      break;
    case 5:
switchD_01305abc_caseD_5:
      pcVar12 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x90);
      break;
    case 6:
switchD_01305abc_caseD_6:
      pcVar12 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x98);
      break;
    case 7:
switchD_01305abc_caseD_7:
      pcVar12 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0xb8);
      break;
    case 8:
switchD_01305abc_caseD_8:
      pcVar12 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0xc0);
      break;
    case 9:
switchD_01305abc_caseD_9:
      pcVar12 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x68);
      break;
    case 10:
switchD_01305abc_caseD_a:
      pcVar12 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 200);
      break;
    case 0xb:
switchD_01305abc_caseD_b:
      pcVar12 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0xd0);
      break;
    default:
      goto switchD_013048c0_caseD_17;
    }
    break;
  case 0xef:
    uVar2 = ExternalArrayTypeOf(pOVar13);
    switch(uVar2) {
    case 1:
      goto switchD_01305abc_caseD_1;
    case 2:
      goto switchD_01305abc_caseD_2;
    case 3:
      goto switchD_01305abc_caseD_3;
    case 4:
      goto switchD_01305abc_caseD_4;
    case 5:
      goto switchD_01305abc_caseD_5;
    case 6:
      goto switchD_01305abc_caseD_6;
    case 7:
      goto switchD_01305abc_caseD_7;
    case 8:
      goto switchD_01305abc_caseD_8;
    case 9:
      goto switchD_01305abc_caseD_9;
    case 10:
      goto switchD_01305abc_caseD_a;
    case 0xb:
      goto switchD_01305abc_caseD_b;
    default:
      goto switchD_013048c0_caseD_17;
    }
  case 0xfb:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::ToBoolean((OperationTyper *)(*(long *)(this + 8) + 0x28));
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0x103:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (*(int **)(lVar11 + 8) < (int *)0x2) goto LAB_01306ce8;
    lVar9 = *(long *)(this + 8);
    local_48 = *(int **)(lVar11 + 8);
    uVar6 = Type::Maybe((Type *)&local_48,0x20001);
joined_r0x01305a54:
    if ((uVar6 & 1) != 0) goto LAB_013073ac;
    piVar7 = *(int **)(lVar9 + 0xa0);
    goto LAB_013073c4;
  case 0x104:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    piVar7 = *(int **)(lVar11 + 8);
    if (piVar7 < (int *)0x2) goto LAB_01306ce8;
    lVar11 = *(long *)(this + 8);
    local_48 = piVar7;
    if ((piVar7 == (int *)0x8000001) ||
       (uVar6 = Type::SlowIs((Type *)&local_48,0x8000001), (uVar6 & 1) != 0)) goto LAB_0130698c;
    uVar6 = Type::Maybe((Type *)&local_48,0x8000001);
    if ((uVar6 & 1) != 0) goto LAB_013073ac;
LAB_013073b4:
    puVar15 = (undefined8 *)(lVar11 + 0xa0);
LAB_013073b8:
    piVar7 = (int *)*puVar15;
    goto LAB_013073c4;
  case 0x105:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    piVar7 = *(int **)(lVar11 + 8);
    if ((int *)0x1 < piVar7) {
      lVar11 = *(long *)(this + 8);
      piVar17 = (int *)((long)&__DT_RELA[0x6c6c].r_offset + 1);
LAB_013071ac:
      local_48 = piVar7;
      if ((piVar7 == piVar17) || (uVar6 = Type::SlowIs((Type *)&local_48,piVar17), (uVar6 & 1) != 0)
         ) {
        puVar15 = (undefined8 *)(lVar11 + 0xa8);
      }
      else {
        uVar6 = Type::Maybe((Type *)&local_48,piVar17);
        if ((uVar6 & 1) != 0) goto LAB_013073ac;
        puVar15 = (undefined8 *)(lVar11 + 0xa0);
      }
      goto LAB_013073b8;
    }
    goto LAB_01306ce8;
  case 0x106:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if ((int *)0x1 < *(int **)(lVar11 + 8)) {
      lVar9 = *(long *)(this + 8);
      uVar4 = 0x6d0001;
      local_48 = *(int **)(lVar11 + 8);
LAB_01305a4c:
      uVar6 = Type::Maybe((Type *)&local_48,uVar4);
      goto joined_r0x01305a54;
    }
    goto LAB_01306ce8;
  case 0x107:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    piVar7 = *(int **)(lVar11 + 8);
    if ((int *)0x1 < piVar7) {
      lVar11 = *(long *)(this + 8);
      piVar17 = (int *)((long)&__DT_RELA[0x41c1].r_info + 1);
      goto LAB_013071ac;
    }
    goto LAB_01306ce8;
  case 0x108:
  case 0x109:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    piVar7 = *(int **)(lVar11 + 8);
    if (piVar7 < (int *)0x2) goto LAB_01306ce8;
    lVar11 = *(long *)(this + 8);
    local_48 = piVar7;
    if ((piVar7 == (int *)0x801) ||
       (uVar6 = Type::SlowIs((Type *)&local_48,0x801), (uVar6 & 1) != 0)) goto LAB_0130698c;
    uVar6 = Type::Maybe((Type *)&local_48,0x801);
joined_r0x013073a8:
    if ((uVar6 & 1) == 0) goto LAB_013073b4;
LAB_013073ac:
    piVar7 = (int *)0x201;
    goto LAB_013073c4;
  case 0x10a:
  case 0x10b:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    piVar7 = *(int **)(lVar11 + 8);
    if ((int *)0x1 < piVar7) {
      lVar11 = *(long *)(this + 8);
      local_48 = piVar7;
      if ((piVar7 != (int *)0x1001) &&
         (uVar6 = Type::SlowIs((Type *)&local_48,0x1001), (uVar6 & 1) == 0)) {
        uVar6 = Type::Maybe((Type *)&local_48,0x1001);
        goto joined_r0x013073a8;
      }
LAB_0130698c:
      puVar15 = (undefined8 *)(lVar11 + 0xa8);
      goto LAB_013073b8;
    }
    goto LAB_01306ce8;
  case 0x10c:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    piVar7 = *(int **)(lVar11 + 8);
    if ((int *)0x1 < piVar7) {
      lVar11 = *(long *)(this + 8);
      piVar17 = (int *)0x4120001;
      goto LAB_013071ac;
    }
    goto LAB_01306ce8;
  case 0x10d:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    piVar7 = *(int **)(lVar11 + 8);
    if ((int *)0x1 < piVar7) {
      lVar11 = *(long *)(this + 8);
      local_48 = piVar7;
      if ((piVar7 != (int *)0x1c5f) &&
         (uVar6 = Type::SlowIs((Type *)&local_48,0x1c5f), (uVar6 & 1) == 0)) {
        uVar6 = Type::Maybe((Type *)&local_48,0x1c5f);
        goto joined_r0x013073a8;
      }
      goto LAB_0130698c;
    }
    goto LAB_01306ce8;
  case 0x10e:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    piVar7 = *(int **)(lVar11 + 8);
    if ((int *)0x1 < piVar7) {
      lVar11 = *(long *)(this + 8);
      local_48 = piVar7;
      if ((piVar7 != (int *)0x47f0001) &&
         (uVar6 = Type::SlowIs((Type *)&local_48,0x47f0001), (uVar6 & 1) == 0)) {
        uVar6 = Type::Maybe((Type *)&local_48,0x47f0001);
        goto joined_r0x013073a8;
      }
      goto LAB_0130698c;
    }
    goto LAB_01306ce8;
  case 0x10f:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if ((int *)0x1 < *(int **)(lVar11 + 8)) {
      lVar9 = *(long *)(this + 8);
      local_48 = *(int **)(lVar11 + 8);
      uVar4 = BitsetType::SignedSmall();
      uVar4 = uVar4 | 1;
      goto LAB_01305a4c;
    }
    goto LAB_01306ce8;
  case 0x110:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    piVar7 = *(int **)(lVar11 + 8);
    if ((int *)0x1 < piVar7) {
      lVar11 = *(long *)(this + 8);
      local_48 = piVar7;
      if ((piVar7 != (int *)0x4021) &&
         (uVar6 = Type::SlowIs((Type *)&local_48,0x4021), (uVar6 & 1) == 0)) {
        uVar6 = Type::Maybe((Type *)&local_48,0x4021);
        goto joined_r0x013073a8;
      }
      goto LAB_0130698c;
    }
    goto LAB_01306ce8;
  case 0x111:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    piVar7 = *(int **)(lVar11 + 8);
    if ((int *)0x1 < piVar7) {
      lVar11 = *(long *)(this + 8);
      local_48 = piVar7;
      if ((piVar7 != (int *)0x2001) &&
         (uVar6 = Type::SlowIs((Type *)&local_48,0x2001), (uVar6 & 1) == 0)) {
        uVar6 = Type::Maybe((Type *)&local_48,0x2001);
        goto joined_r0x013073a8;
      }
      goto LAB_0130698c;
    }
    goto LAB_01306ce8;
  case 0x112:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    piVar7 = *(int **)(lVar11 + 8);
    if ((int *)0x1 < piVar7) {
      lVar11 = *(long *)(this + 8);
      local_48 = piVar7;
      if ((piVar7 != (int *)0x40181) &&
         (uVar6 = Type::SlowIs((Type *)&local_48,0x40181), (uVar6 & 1) == 0)) {
        uVar6 = Type::Maybe((Type *)&local_48,0x40181);
        goto joined_r0x013073a8;
      }
      goto LAB_0130698c;
    }
LAB_01306ce8:
    piVar7 = (int *)0x1;
    goto LAB_013073c4;
  case 0x114:
    lVar11 = TypeCache::Get();
    pcVar12 = *(char **)(lVar11 + 0x238);
    break;
  case 0x115:
  case 0x116:
  case 0x117:
  case 0x2f8:
  case 0x2f9:
  case 0x2fa:
  case 0x2fb:
  case 0x308:
    pcVar12 = "a";
    break;
  case 0x11a:
  case 0x11b:
    iVar3 = 1;
LAB_01304b10:
    lVar11 = NodeProperties::GetValueInput(param_1,iVar3);
    pcVar12 = *(char **)(lVar11 + 8);
    if (pcVar12 == (char *)0x0) {
      pcVar12 = (char *)0x1;
    }
    break;
  case 0x11d:
  case 0x11e:
    pcVar12 = (char *)Type::Range(-1.0,134217725.0,
                                  (Zone *)**(undefined8 **)(*(long *)(this + 8) + 8));
    break;
  case 0x11f:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar9 = *(long *)(lVar11 + 8);
    puVar15 = *(undefined8 **)(*(long *)(this + 8) + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    lVar11 = *(long *)(*(long *)(*(long *)(this + 8) + 0x18) + 0xe0);
    goto LAB_013063a4;
  case 0x2b1:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)JSEqualTyper(lVar11,lVar9,*(undefined8 *)(this + 8));
    }
    break;
  case 0x2b2:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)OperationTyper::StrictEqual
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar11);
    }
    break;
  case 0x2b3:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 == 1) || (lVar9 == 1)) break;
    lVar18 = *(long *)(this + 8);
    uVar4 = JSCompareTyper(lVar11,lVar9,lVar18);
    if (uVar4 == 0) goto LAB_01306b8c;
    if ((uVar4 & 6) == 0) goto LAB_013068bc;
LAB_01306330:
    if ((uVar4 & 1) != 0) goto LAB_01306334;
    goto LAB_013062b8;
  case 0x2b4:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 == 1) || (lVar9 == 1)) break;
    lVar18 = *(long *)(this + 8);
    uVar4 = JSCompareTyper(lVar9,lVar11,lVar18);
    if (uVar4 == 0) goto LAB_01306b8c;
    if ((uVar4 & 6) != 0) goto LAB_01306330;
    goto LAB_013068bc;
  case 0x2b5:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar9 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    lVar11 = NodeProperties::GetValueInput(param_1,1);
    lVar11 = *(long *)(lVar11 + 8);
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    if ((lVar9 == 1) || (lVar11 == 1)) break;
    lVar18 = *(long *)(this + 8);
    goto LAB_01306294;
  case 0x2b6:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 == 1) || (lVar9 == 1)) break;
    lVar18 = *(long *)(this + 8);
LAB_01306294:
    uVar4 = JSCompareTyper(lVar11,lVar9,lVar18);
    if (((uVar4 & 4) == 0 && (uVar4 & 1) == 0) && (uVar4 >> 1 & 1) == 0) {
LAB_01306b8c:
      pcVar12 = (char *)0x1;
    }
    else if ((uVar4 & 4) == 0 && (uVar4 & 1) == 0) {
LAB_013068bc:
      pcVar12 = *(char **)(lVar18 + 0xa8);
    }
    else if ((uVar4 >> 1 & 1) == 0) {
LAB_013062b8:
      pcVar12 = *(char **)(lVar18 + 0xa0);
    }
    else {
LAB_01306334:
      pcVar12 = (char *)0x201;
    }
    break;
  case 0x2b7:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)JSBitwiseOrTyper(lVar11,lVar9,*(undefined8 *)(this + 8));
    }
    break;
  case 0x2b8:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)JSBitwiseXorTyper(lVar11,lVar9,*(undefined8 *)(this + 8));
    }
    break;
  case 0x2b9:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)JSBitwiseAndTyper(lVar11,lVar9,*(undefined8 *)(this + 8));
    }
    break;
  case 0x2ba:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)JSShiftLeftTyper(lVar11,lVar9,*(undefined8 *)(this + 8));
    }
    break;
  case 699:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)JSShiftRightTyper(lVar11,lVar9,*(undefined8 *)(this + 8));
    }
    break;
  case 700:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pOVar1 = (OperationTyper *)(*(long *)(this + 8) + 0x28);
      uVar5 = OperationTyper::ToNumber(pOVar1,lVar11);
      uVar10 = OperationTyper::ToNumber(pOVar1,lVar9);
      pcVar12 = (char *)OperationTyper::NumberShiftRightLogical(pOVar1,uVar5,uVar10);
    }
    break;
  case 0x2bd:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)JSAddTyper(lVar11,lVar9,*(undefined8 *)(this + 8));
    }
    break;
  case 0x2be:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)JSSubtractTyper(lVar11,lVar9,*(undefined8 *)(this + 8));
    }
    break;
  case 0x2bf:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)JSMultiplyTyper(lVar11,lVar9,*(undefined8 *)(this + 8));
    }
    break;
  case 0x2c0:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)JSDivideTyper(lVar11,lVar9,*(undefined8 *)(this + 8));
    }
    break;
  case 0x2c1:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    lVar11 = *(long *)(lVar11 + 8);
    pcVar12 = (char *)0x1;
    if (lVar11 == 0) {
      lVar11 = 1;
    }
    lVar9 = NodeProperties::GetValueInput(param_1,1);
    lVar9 = *(long *)(lVar9 + 8);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
    if ((lVar11 != 1) && (lVar9 != 1)) {
      pcVar12 = (char *)JSModulusTyper(lVar11,lVar9,*(undefined8 *)(this + 8));
    }
    break;
  case 0x2c2:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    uVar6 = *(ulong *)(lVar11 + 8);
    lVar11 = NodeProperties::GetValueInput(param_1,1);
    pcVar12 = (char *)0x8001c5f;
    if (*(ulong *)(lVar11 + 8) < 2 || uVar6 < 2) {
      pcVar12 = (char *)0x1;
    }
    break;
  case 0x2c3:
  case 0x2c4:
  case 0x2c5:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    uVar6 = *(ulong *)(lVar11 + 8);
    lVar11 = NodeProperties::GetValueInput(param_1,1);
    pcVar12 = (char *)0x201;
    if (*(ulong *)(lVar11 + 8) < 2 || uVar6 < 2) {
      pcVar12 = (char *)0x1;
    }
    break;
  case 0x2c6:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)ToLength(*(ulong *)(lVar11 + 8),*(undefined8 *)(this + 8));
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0x2c7:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)ToName(*(ulong *)(lVar11 + 8),*(undefined8 *)(this + 8));
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0x2c9:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::ToNumberConvertBigInt
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28));
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0x2ca:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)OperationTyper::ToNumeric((OperationTyper *)(*(long *)(this + 8) + 0x28));
      break;
    }
    goto switchD_013048c0_caseD_3b;
  case 0x2cb:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    piVar7 = *(int **)(lVar11 + 8);
    if (piVar7 < (int *)0x2) goto LAB_0130717c;
    local_48 = piVar7;
    if (piVar7 == (int *)0x47f0001) {
      piVar7 = (int *)0x47f0001;
    }
    else {
      uVar6 = Type::SlowIs((Type *)&local_48,0x47f0001);
      piVar7 = local_48;
      if ((((uVar6 & 1) == 0) && (piVar7 = (int *)0x20001, local_48 != (int *)0x8007fff)) &&
         (uVar6 = Type::SlowIs((Type *)&local_48,0x8007fff), (uVar6 & 1) == 0)) {
        uVar6 = Type::Maybe((Type *)&local_48,0x40001);
        piVar7 = (int *)0x47f0001;
        if ((uVar6 & 1) == 0) {
          piVar7 = (int *)0x47b0001;
        }
      }
    }
    goto LAB_013073c4;
  case 0x2cc:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    piVar7 = *(int **)(lVar11 + 8);
    if (piVar7 < (int *)0x2) goto LAB_01306ce8;
    local_50 = piVar7;
    local_48 = piVar7;
    if (((piVar7 == (int *)0x8007fff) ||
        (uVar6 = Type::SlowIs((Type *)&local_48,0x8007fff), (uVar6 & 1) != 0)) &&
       (uVar6 = Type::Maybe((Type *)&local_48,0x47f0001), (uVar6 & 1) == 0)) {
      local_50 = local_48;
      piVar7 = (int *)0x4021;
      if (local_48 == (int *)0x4021) goto LAB_013073c4;
    }
    else {
      local_50 = (int *)0x8007fff;
    }
    uVar6 = Type::SlowIs((Type *)&local_50,0x4021);
    piVar7 = local_50;
    if ((uVar6 & 1) == 0) {
      piVar7 = (int *)0x4021;
    }
    goto LAB_013073c4;
  case 0x2ce:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (*(ulong *)(lVar11 + 8) < 2) goto LAB_01306ce8;
    lVar11 = *(long *)(this + 8);
    pOVar1 = (OperationTyper *)(lVar11 + 0x28);
    local_48 = (int *)OperationTyper::ToNumeric(pOVar1);
    piVar7 = (int *)0x1c5f;
    if ((local_48 == (int *)0x1c5f) ||
       (uVar6 = Type::SlowIs((Type *)&local_48,0x1c5f), piVar7 = local_48, (uVar6 & 1) != 0)) {
      piVar7 = (int *)OperationTyper::NumberBitwiseXor
                                (pOVar1,piVar7,*(undefined8 *)(*(long *)(lVar11 + 0x18) + 0xf8));
    }
    else {
LAB_01307190:
      piVar7 = (int *)0x8001c5f;
    }
    goto LAB_013073c4;
  case 0x2cf:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (*(ulong *)(lVar11 + 8) < 2) goto LAB_01306ce8;
    lVar11 = *(long *)(this + 8);
    pOVar1 = (OperationTyper *)(lVar11 + 0x28);
    local_48 = (int *)OperationTyper::ToNumeric(pOVar1);
    piVar7 = (int *)0x1c5f;
    if ((local_48 != (int *)0x1c5f) &&
       (uVar6 = Type::SlowIs((Type *)&local_48,0x1c5f), piVar7 = local_48, (uVar6 & 1) == 0))
    goto LAB_01307190;
    piVar7 = (int *)OperationTyper::NumberSubtract
                              (pOVar1,piVar7,*(undefined8 *)(*(long *)(lVar11 + 0x18) + 0xe8));
    goto LAB_013073c4;
  case 0x2d0:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (*(ulong *)(lVar11 + 8) < 2) goto LAB_01306ce8;
    lVar11 = *(long *)(this + 8);
    pOVar1 = (OperationTyper *)(lVar11 + 0x28);
    local_48 = (int *)OperationTyper::ToNumeric(pOVar1);
    piVar7 = (int *)0x1c5f;
    if ((local_48 != (int *)0x1c5f) &&
       (uVar6 = Type::SlowIs((Type *)&local_48,0x1c5f), piVar7 = local_48, (uVar6 & 1) == 0))
    goto LAB_01307190;
    piVar7 = (int *)OperationTyper::NumberAdd
                              (pOVar1,piVar7,*(undefined8 *)(*(long *)(lVar11 + 0x18) + 0xe8));
    goto LAB_013073c4;
  case 0x2d1:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (*(ulong *)(lVar11 + 8) < 2) goto LAB_01306ce8;
    lVar11 = *(long *)(this + 8);
    pOVar1 = (OperationTyper *)(lVar11 + 0x28);
    local_48 = (int *)OperationTyper::ToNumeric(pOVar1);
    piVar7 = (int *)0x1c5f;
    if ((local_48 != (int *)0x1c5f) &&
       (uVar6 = Type::SlowIs((Type *)&local_48,0x1c5f), piVar7 = local_48, (uVar6 & 1) == 0))
    goto LAB_01307190;
    piVar7 = (int *)OperationTyper::NumberMultiply
                              (pOVar1,piVar7,*(undefined8 *)(*(long *)(lVar11 + 0x18) + 0xf8));
LAB_013073c4:
    uVar5 = UpdateType(this,param_1,piVar7);
switchD_013048c0_caseD_1:
    return uVar5;
  case 0x2d2:
  case 0x2d7:
  case 0x2d8:
  case 0x2db:
  case 0x2dd:
  case 0x2de:
  case 0x2df:
  case 0x2e0:
  case 0x2e2:
  case 0x2e3:
  case 0x2e4:
  case 0x2e5:
  case 0x2e6:
  case 0x2e7:
  case 0x304:
  case 0x305:
  case 0x306:
    pcVar12 = (char *)0x20001;
    break;
  case 0x2d3:
    pcVar12 = (char *)0x4670001;
    break;
  case 0x2d4:
    pcVar12 = (char *)CreateArgumentsTypeOf(pOVar13);
    if (2 < (ulong)(long)*pcVar12) goto switchD_013048c0_caseD_17;
    pcVar12 = *(char **)(&DAT_01a02190 + (long)*pcVar12 * 8);
    break;
  case 0x2d5:
  case 0x2d6:
  case 0x2dc:
  case 0x2e1:
  case 0x2e8:
    pcVar12 = (char *)0x4000001;
    break;
  case 0x2d9:
    pcVar12 = "S0_6HandleIS2_EENS5_INS0_6ObjectEEES8_";
    break;
  case 0x2da:
    pcVar12 = "";
    break;
  case 0x2f4:
    pcVar12 = (char *)0x6d0001;
    break;
  case 0x2f6:
    lVar11 = ContextAccessOf(pOVar13);
    pcVar12 = "a";
    if (1 < *(uint *)(lVar11 + 4)) {
      pcVar12 = (char *)0xffffffff;
    }
    break;
  case 0x2fc:
  case 0x2fd:
  case 0x2fe:
  case 0x2ff:
    lVar11 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar11 + 8)) {
      pcVar12 = (char *)JSCallTyper(*(ulong *)(lVar11 + 8),*(undefined8 *)(this + 8));
      break;
    }
switchD_013048c0_caseD_3b:
    pcVar12 = (char *)0x1;
    break;
  case 0x300:
  case 0x301:
  case 0x302:
  case 0x303:
  case 0x316:
  case 0x317:
    pcVar12 = (char *)0x47f0001;
    break;
  case 0x307:
    pcVar12 = (char *)TypeJSCallRuntime(this,param_1);
    break;
  case 0x309:
    lVar9 = 0x4021;
    lVar11 = 0x101;
    puVar15 = *(undefined8 **)(*(long *)(this + 8) + 8);
LAB_013063a4:
    pcVar12 = (char *)Type::Union(lVar9,lVar11,*puVar15);
    break;
  case 0x30a:
    uVar4 = BitsetType::SignedSmall();
    uVar5 = Type::Union(uVar4 | 1,0x1000001,**(undefined8 **)(*(long *)(this + 8) + 8));
    pcVar12 = (char *)Type::Tuple(uVar5,0x1000001,
                                  *(undefined8 *)(*(long *)(*(long *)(this + 8) + 0x18) + 0x1b0),
                                  **(undefined8 **)(*(long *)(this + 8) + 8));
    break;
  case 0x311:
    uVar4 = BitsetType::SignedSmall();
    pcVar12 = (char *)(ulong)(uVar4 | 1);
    break;
  case 0x315:
  case 0x318:
  case 0x319:
    pcVar12 = (char *)0x101;
  }
  uVar5 = UpdateType(this,param_1,pcVar12);
  return uVar5;
}

