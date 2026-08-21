
/* v8::internal::compiler::Typer::Visitor::TypeNode(v8::internal::compiler::Node*) */

char * __thiscall v8::internal::compiler::Typer::Visitor::TypeNode(Visitor *this,Node *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  Zone *pZVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  OperationTyper *pOVar9;
  long lVar10;
  code *pcVar11;
  Operator *pOVar12;
  int *piVar13;
  undefined8 *puVar14;
  long lVar15;
  char *pcVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  char *local_48;
  int *local_28;
  
  pOVar12 = *(Operator **)param_1;
  pcVar16 = (char *)0x3800001;
  switch(*(undefined2 *)(pOVar12 + 0x10)) {
  case 0:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x30:
    break;
  default:
    goto switchD_012fee28_caseD_1;
  case 7:
  case 0xe9:
  case 0xf0:
  case 0x2e9:
  case 0x2ea:
  case 0x2eb:
    pcVar16 = (char *)0xc7f7fff;
    break;
  case 0x1b:
  case 0x1d:
  case 0x113:
    pcVar16 = (char *)0x2000001;
    break;
  case 0x1c:
    pcVar16 = (char *)Type::NewConstant(*(double *)(pOVar12 + 0x30),
                                        (Zone *)**(undefined8 **)(*(long *)(this + 8) + 8));
    return pcVar16;
  case 0x1e:
    uVar8 = HeapConstantOf(pOVar12);
    pcVar16 = (char *)Type::NewConstant(*(undefined8 *)(*(long *)(this + 8) + 0x20),uVar8,
                                        **(undefined8 **)(*(long *)(this + 8) + 8));
    return pcVar16;
  case 0x22:
    lVar10 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar10 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    lVar10 = NodeProperties::GetValueInput(param_1,2);
    lVar10 = *(long *)(lVar10 + 8);
    puVar14 = *(undefined8 **)(*(long *)(this + 8) + 8);
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    goto LAB_01301638;
  case 0x23:
    iVar1 = *(int *)(pOVar12 + 0x14);
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    pcVar16 = *(char **)(lVar10 + 8);
    if (pcVar16 == (char *)0x0) {
      pcVar16 = (char *)0x1;
    }
    if (1 < iVar1) {
      iVar17 = 1;
      do {
        lVar10 = NodeProperties::GetValueInput(param_1,iVar17);
        lVar10 = *(long *)(lVar10 + 8);
        if (lVar10 == 0) {
          lVar10 = 1;
        }
        pcVar16 = (char *)Type::Union(pcVar16,lVar10,**(undefined8 **)(*(long *)(this + 8) + 8));
        iVar17 = iVar17 + 1;
      } while (iVar1 != iVar17);
    }
    break;
  case 0x25:
    pcVar16 = (char *)TypeInductionVariablePhi(this,param_1);
    return pcVar16;
  case 0x28:
  case 0x35:
  case 0xde:
    iVar1 = 0;
    goto LAB_012ff094;
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
    pcVar16 = (char *)0xffffffff;
    break;
  case 0x32:
    pcVar16 = (char *)TypeParameter(this,param_1);
    return pcVar16;
  case 0x33:
    iVar1 = OsrValueIndexOf(pOVar12);
    pcVar16 = "a";
    if (iVar1 != -1) {
      pcVar16 = (char *)0xffffffff;
    }
    break;
  case 0x37:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    local_28 = *(int **)(lVar10 + 8);
    if (local_28 == (int *)0x0) {
      local_28 = (int *)0x1;
    }
    if (local_28 != (int *)0x1) {
      uVar6 = Type::SlowIs((Type *)&local_28,1);
      if ((uVar6 & 1) != 0) {
        return (char *)0x1;
      }
      uVar6 = ProjectionIndexOf(*(Operator **)param_1);
      if (((((ulong)local_28 & 1) == 0) && (*local_28 == 2)) &&
         (lVar10 = Type::AsTuple((Type *)&local_28), (int)uVar6 < *(int *)(lVar10 + 4))) {
        lVar10 = Type::AsTuple((Type *)&local_28);
        return *(char **)(*(long *)(lVar10 + 8) +
                         (-(uVar6 >> 0x1f & 1) & 0xfffffff800000000 | (uVar6 & 0xffffffff) << 3));
      }
      return (char *)0xffffffff;
    }
    goto LAB_0130189c;
  case 0x3a:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    pcVar16 = (char *)OperationTyper::TypeTypeGuard
                                ((OperationTyper *)(*(long *)(this + 8) + 0x28),
                                 *(undefined8 *)param_1,lVar10);
    return pcVar16;
  case 0x3b:
  case 0x3c:
  case 0x3d:
    goto switchD_012fee28_caseD_3b;
  case 0x6f:
  case 0x72:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      lVar15 = *(long *)(this + 8);
      lVar10 = OperationTyper::ToNumber((OperationTyper *)(lVar15 + 0x28),lVar10);
      lVar7 = OperationTyper::ToNumber((OperationTyper *)(lVar15 + 0x28),lVar7);
LAB_01300610:
      pcVar16 = (char *)JSEqualTyper(lVar10,lVar7,lVar15);
      return pcVar16;
    }
    break;
  case 0x70:
  case 0x73:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if (lVar10 == 1) {
      return (char *)0x1;
    }
    if (lVar7 == 1) {
      return (char *)0x1;
    }
    lVar15 = *(long *)(this + 8);
    uVar8 = OperationTyper::ToNumber((OperationTyper *)(lVar15 + 0x28),lVar10);
    uVar4 = OperationTyper::ToNumber((OperationTyper *)(lVar15 + 0x28),lVar7);
    uVar3 = NumberCompareTyper(uVar8,uVar4);
    goto LAB_01301708;
  case 0x71:
  case 0x74:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar7 = *(long *)(lVar10 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    lVar10 = NodeProperties::GetValueInput(param_1,1);
    lVar10 = *(long *)(lVar10 + 8);
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    if (lVar7 == 1) {
      return (char *)0x1;
    }
    if (lVar10 == 1) {
      return (char *)0x1;
    }
    lVar15 = *(long *)(this + 8);
    lVar10 = OperationTyper::ToNumber((OperationTyper *)(lVar15 + 0x28));
    lVar7 = OperationTyper::ToNumber((OperationTyper *)(lVar15 + 0x28),lVar7);
    goto LAB_013016f8;
  case 0x75:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    piVar13 = *(int **)(lVar10 + 8);
    if (piVar13 == (int *)0x0) {
      piVar13 = (int *)0x1;
    }
    lVar10 = NodeProperties::GetValueInput(param_1,1);
    local_28 = *(int **)(lVar10 + 8);
    if (local_28 == (int *)0x0) {
      local_28 = (int *)0x1;
    }
    if (piVar13 == (int *)0x1) {
      return (char *)0x1;
    }
    if (local_28 == (int *)0x1) {
      return (char *)0x1;
    }
    lVar10 = *(long *)(this + 8);
    if (((((ulong)piVar13 & 1) == 0) && (*piVar13 == 0)) &&
       ((local_28 == piVar13 || (uVar6 = Type::SlowIs((Type *)&local_28,piVar13), (uVar6 & 1) != 0))
       )) {
      return *(char **)(lVar10 + 0xa8);
    }
LAB_01301608:
    pcVar16 = (char *)0x201;
    break;
  case 0x76:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::SameValue
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x77:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::SameValueNumbersOnly(*(long *)(this + 8) + 0x28,lVar10);
      return pcVar16;
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
    pcVar16 = (char *)0x201;
    break;
  case 0x7c:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::NumberAdd
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x7d:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::NumberSubtract
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x7e:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::NumberMultiply
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x7f:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::NumberDivide
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x80:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::NumberModulus
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x81:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::NumberBitwiseOr
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x82:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::NumberBitwiseXor
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x83:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::NumberBitwiseAnd
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x84:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::NumberShiftLeft
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x85:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::NumberShiftRight
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x86:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pOVar9 = (OperationTyper *)(*(long *)(this + 8) + 0x28);
LAB_0130103c:
      pcVar16 = (char *)OperationTyper::NumberShiftRightLogical(pOVar9,lVar10,lVar7);
      return pcVar16;
    }
    break;
  case 0x87:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::NumberAtan2(*(long *)(this + 8) + 0x28,lVar10);
      return pcVar16;
    }
    break;
  case 0x88:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::NumberImul(*(long *)(this + 8) + 0x28,lVar10);
      return pcVar16;
    }
    break;
  case 0x89:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::NumberMax
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x8a:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::NumberMin
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x8b:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::NumberPow(*(long *)(this + 8) + 0x28,lVar10);
      return pcVar16;
    }
    break;
  case 0x8c:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::BigIntAdd
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x8d:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::BigIntSubtract
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x8e:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::SpeculativeNumberAdd
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x8f:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::SpeculativeNumberSubtract
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x90:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::SpeculativeNumberMultiply
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x91:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::SpeculativeNumberDivide
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x92:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::SpeculativeNumberModulus
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x93:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::SpeculativeNumberBitwiseAnd
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x94:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::SpeculativeNumberBitwiseOr
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x95:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::SpeculativeNumberBitwiseXor
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x96:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::SpeculativeNumberShiftLeft
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x97:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::SpeculativeNumberShiftRight
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x98:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::SpeculativeNumberShiftRightLogical
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x99:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::SpeculativeSafeIntegerAdd
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x9a:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::SpeculativeSafeIntegerSubtract
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x9b:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberAbs((OperationTyper *)(*(long *)(this + 8) + 0x28));
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0x9c:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberAcos(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0x9d:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberAcosh(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0x9e:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberAsin(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0x9f:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberAsinh(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xa0:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberAtan(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xa1:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberAtanh(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xa2:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberCbrt(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xa3:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberCeil((OperationTyper *)(*(long *)(this + 8) + 0x28));
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xa4:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberClz32(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xa5:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberCos(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xa6:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberCosh(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xa7:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberExp(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xa8:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberExpm1(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xa9:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberFloor((OperationTyper *)(*(long *)(this + 8) + 0x28));
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xaa:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberFround(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xab:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberLog(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xac:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberLog1p(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xad:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberLog2(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xae:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberLog10(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xaf:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberRound((OperationTyper *)(*(long *)(this + 8) + 0x28));
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xb0:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberSign((OperationTyper *)(*(long *)(this + 8) + 0x28));
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xb1:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberSin(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xb2:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberSinh(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xb3:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberSqrt(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xb4:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberTan(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xb5:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberTanh(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xb6:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberTrunc((OperationTyper *)(*(long *)(this + 8) + 0x28));
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xb7:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberToBoolean
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28));
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xb8:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberToInt32
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28));
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xb9:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberToString
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28));
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xba:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberToUint32
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28));
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xbb:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberToUint8Clamped
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28));
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xbc:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::NumberSilenceNaN
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28));
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xbd:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::BigIntAsUintN(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xbe:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::BigIntNegate((OperationTyper *)(*(long *)(this + 8) + 0x28))
      ;
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xbf:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::CheckBigInt(*(long *)(this + 8) + 0x28);
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xc0:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::SpeculativeToNumber
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28));
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xc1:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::SpeculativeBigIntNegate
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28));
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0xc2:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::SpeculativeBigIntAdd
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0xc3:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::SpeculativeBigIntSubtract
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0xc4:
  case 0xc9:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
LAB_01300af0:
      pcVar16 = (char *)OperationTyper::ToNumber((OperationTyper *)(*(long *)(this + 8) + 0x28));
      return pcVar16;
    }
    goto switchD_012fee28_caseD_3b;
  case 0xc5:
    pcVar16 = (char *)0x44f;
    break;
  case 0xc6:
  case 0x122:
  case 0x2cd:
    pcVar16 = (char *)0x1c5f;
    break;
  case 200:
  case 0xce:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0x118:
  case 0x119:
    pcVar16 = (char *)0x4021;
    break;
  case 0xca:
    pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x80);
    break;
  case 0xcb:
    dVar18 = 0.0;
    pZVar5 = (Zone *)**(undefined8 **)(*(long *)(this + 8) + 8);
    dVar19 = 1114111.0;
    goto LAB_013014c0;
  case 0xcc:
  case 0xcd:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    pcVar16 = (char *)0x4021;
    if (*(ulong *)(lVar10 + 8) < 2) {
      pcVar16 = (char *)0x1;
    }
    break;
  case 0xcf:
    dVar18 = -1.0;
    pZVar5 = (Zone *)**(undefined8 **)(*(long *)(this + 8) + 8);
    dVar19 = 268435440.0;
    goto LAB_013014c0;
  case 0xd0:
    pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x1e8);
    break;
  case 0xd4:
    lVar7 = *(long *)(this + 8);
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar15 = NodeProperties::GetValueInput(param_1,1);
    lVar15 = *(long *)(lVar15 + 8);
    if (lVar15 == 0) {
      lVar15 = 1;
    }
    pcVar16 = (char *)OperationTyper::CheckBounds((OperationTyper *)(lVar7 + 0x28),lVar10,lVar15);
    return pcVar16;
  case 0xd7:
    lVar7 = *(long *)(this + 8);
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    pcVar16 = (char *)OperationTyper::CheckNumber((OperationTyper *)(lVar7 + 0x28),lVar10);
    return pcVar16;
  case 0xd8:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar7 = *(long *)(this + 8);
    lVar10 = *(long *)(lVar10 + 8);
    uVar2 = 0x4001;
    goto LAB_01301510;
  case 0xd9:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar7 = *(long *)(this + 8);
    lVar10 = *(long *)(lVar10 + 8);
    uVar2 = 0x47f0001;
    goto LAB_01301510;
  case 0xda:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar7 = *(long *)(this + 8);
    lVar10 = *(long *)(lVar10 + 8);
    uVar2 = 0x47f0181;
    goto LAB_01301510;
  case 0xdb:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar7 = *(long *)(this + 8);
    lVar10 = *(long *)(lVar10 + 8);
    uVar2 = 0x4021;
    goto LAB_01301510;
  case 0xdc:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar7 = *(long *)(this + 8);
    lVar10 = *(long *)(lVar10 + 8);
    uVar2 = 0x2001;
    goto LAB_01301510;
  case 0xdd:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    uVar2 = BitsetType::SignedSmall();
    uVar2 = uVar2 | 1;
    puVar14 = *(undefined8 **)(*(long *)(this + 8) + 8);
    goto LAB_0130151c;
  case 0xdf:
    lVar7 = *(long *)(this + 8);
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    pcVar16 = (char *)OperationTyper::CheckFloat64Hole((OperationTyper *)(lVar7 + 0x28),lVar10);
    return pcVar16;
  case 0xe0:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar7 = *(long *)(this + 8);
    lVar10 = *(long *)(lVar10 + 8);
    uVar2 = 0xc7f7fff;
LAB_01301510:
    puVar14 = *(undefined8 **)(lVar7 + 8);
    if (lVar10 == 0) {
      lVar10 = 1;
    }
LAB_0130151c:
    pcVar16 = (char *)Type::Intersect(lVar10,uVar2,*puVar14);
    return pcVar16;
  case 0xe4:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    pcVar16 = (char *)OperationTyper::ConvertReceiver
                                ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
    return pcVar16;
  case 0xe5:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    pcVar16 = (char *)OperationTyper::ConvertTaggedHoleToUndefined
                                ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
    return pcVar16;
  case 0xe6:
    pcVar16 = (char *)0x4001;
    break;
  case 0xe7:
    pcVar16 = (char *)AllocateTypeOf(pOVar12);
    return pcVar16;
  case 0xea:
    lVar10 = FieldAccessOf(pOVar12);
    pcVar16 = *(char **)(lVar10 + 0x18);
    break;
  case 0xeb:
    lVar10 = ElementAccessOf(pOVar12);
    pcVar16 = *(char **)(lVar10 + 8);
    break;
  case 0xed:
    uVar3 = ExternalArrayTypeOf(pOVar12);
    switch(uVar3) {
    case 1:
      pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x58);
      break;
    case 2:
      pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x60);
      break;
    case 3:
      pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x78);
      break;
    case 4:
      pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x80);
      break;
    case 5:
      pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x90);
      break;
    case 6:
      pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x98);
      break;
    case 7:
      pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0xb8);
      break;
    case 8:
      pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0xc0);
      break;
    case 9:
switchD_013002cc_caseD_9:
      pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x68);
      break;
    case 10:
switchD_013002cc_caseD_a:
      pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 200);
      break;
    case 0xb:
switchD_013002cc_caseD_b:
      pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0xd0);
      break;
    default:
      goto switchD_012fee28_caseD_1;
    }
    break;
  case 0xef:
    uVar3 = ExternalArrayTypeOf(pOVar12);
    switch(uVar3) {
    case 1:
      pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x58);
      break;
    case 2:
      pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x60);
      break;
    case 3:
      pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x78);
      break;
    case 4:
      pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x80);
      break;
    case 5:
      pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x90);
      break;
    case 6:
      pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0x98);
      break;
    case 7:
      pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0xb8);
      break;
    case 8:
      pcVar16 = *(char **)(*(long *)(*(long *)(this + 8) + 0x18) + 0xc0);
      break;
    case 9:
      goto switchD_013002cc_caseD_9;
    case 10:
      goto switchD_013002cc_caseD_a;
    case 0xb:
      goto switchD_013002cc_caseD_b;
    default:
      goto switchD_012fee28_caseD_1;
    }
    break;
  case 0xfb:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::ToBoolean((OperationTyper *)(*(long *)(this + 8) + 0x28));
      return pcVar16;
    }
    goto switchD_012fee28_caseD_3b;
  case 0x103:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    local_28 = *(int **)(lVar10 + 8);
    if (1 < local_28) {
      lVar10 = *(long *)(this + 8);
      uVar6 = Type::Maybe((Type *)&local_28,0x20001);
joined_r0x01301604:
      if ((uVar6 & 1) == 0) {
        return *(char **)(lVar10 + 0xa0);
      }
      goto LAB_01301608;
    }
    goto switchD_012fee28_caseD_3b;
  case 0x104:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)ObjectIsBigInt(*(ulong *)(lVar10 + 8),*(undefined8 *)(this + 8));
      return pcVar16;
    }
    goto switchD_012fee28_caseD_3b;
  case 0x105:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)ObjectIsCallable(*(ulong *)(lVar10 + 8),*(undefined8 *)(this + 8));
      return pcVar16;
    }
    goto switchD_012fee28_caseD_3b;
  case 0x106:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    local_28 = *(int **)(lVar10 + 8);
    if (1 < local_28) {
      lVar10 = *(long *)(this + 8);
      uVar2 = 0x6d0001;
LAB_013015fc:
      uVar6 = Type::Maybe((Type *)&local_28,uVar2);
      goto joined_r0x01301604;
    }
    goto switchD_012fee28_caseD_3b;
  case 0x107:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)ObjectIsDetectableCallable(*(ulong *)(lVar10 + 8),*(undefined8 *)(this + 8))
      ;
      return pcVar16;
    }
    goto switchD_012fee28_caseD_3b;
  case 0x108:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)ObjectIsMinusZero(*(ulong *)(lVar10 + 8),*(undefined8 *)(this + 8));
      return pcVar16;
    }
    goto switchD_012fee28_caseD_3b;
  case 0x109:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)NumberIsMinusZero(*(ulong *)(lVar10 + 8),*(undefined8 *)(this + 8));
      return pcVar16;
    }
    goto switchD_012fee28_caseD_3b;
  case 0x10a:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)ObjectIsNaN(*(ulong *)(lVar10 + 8),*(undefined8 *)(this + 8));
      return pcVar16;
    }
    goto switchD_012fee28_caseD_3b;
  case 0x10b:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)NumberIsNaN(*(ulong *)(lVar10 + 8),*(undefined8 *)(this + 8));
      return pcVar16;
    }
    goto switchD_012fee28_caseD_3b;
  case 0x10c:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)ObjectIsNonCallable(*(ulong *)(lVar10 + 8),*(undefined8 *)(this + 8));
      return pcVar16;
    }
    goto switchD_012fee28_caseD_3b;
  case 0x10d:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)ObjectIsNumber(*(ulong *)(lVar10 + 8),*(undefined8 *)(this + 8));
      return pcVar16;
    }
    goto switchD_012fee28_caseD_3b;
  case 0x10e:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)ObjectIsReceiver(*(ulong *)(lVar10 + 8),*(undefined8 *)(this + 8));
      return pcVar16;
    }
    goto switchD_012fee28_caseD_3b;
  case 0x10f:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    local_28 = *(int **)(lVar10 + 8);
    if (1 < local_28) {
      lVar10 = *(long *)(this + 8);
      uVar2 = BitsetType::SignedSmall();
      uVar2 = uVar2 | 1;
      goto LAB_013015fc;
    }
    goto switchD_012fee28_caseD_3b;
  case 0x110:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)ObjectIsString(*(ulong *)(lVar10 + 8),*(undefined8 *)(this + 8));
      return pcVar16;
    }
    goto switchD_012fee28_caseD_3b;
  case 0x111:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)ObjectIsSymbol(*(ulong *)(lVar10 + 8),*(undefined8 *)(this + 8));
      return pcVar16;
    }
    goto switchD_012fee28_caseD_3b;
  case 0x112:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)ObjectIsUndetectable(*(ulong *)(lVar10 + 8),*(undefined8 *)(this + 8));
      return pcVar16;
    }
    goto switchD_012fee28_caseD_3b;
  case 0x114:
    lVar10 = TypeCache::Get();
    pcVar16 = *(char **)(lVar10 + 0x238);
    break;
  case 0x115:
  case 0x116:
  case 0x117:
  case 0x2f8:
  case 0x2f9:
  case 0x2fa:
  case 0x2fb:
  case 0x308:
    pcVar16 = "a";
    break;
  case 0x11a:
  case 0x11b:
    iVar1 = 1;
LAB_012ff094:
    lVar10 = NodeProperties::GetValueInput(param_1,iVar1);
    pcVar16 = *(char **)(lVar10 + 8);
    if (pcVar16 == (char *)0x0) {
      pcVar16 = (char *)0x1;
    }
    break;
  case 0x11d:
  case 0x11e:
    dVar19 = 134217725.0;
    dVar18 = -1.0;
    pZVar5 = (Zone *)**(undefined8 **)(*(long *)(this + 8) + 8);
LAB_013014c0:
    pcVar16 = (char *)Type::Range(dVar18,dVar19,pZVar5);
    return pcVar16;
  case 0x11f:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar7 = *(long *)(lVar10 + 8);
    puVar14 = *(undefined8 **)(*(long *)(this + 8) + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    lVar10 = *(long *)(*(long *)(*(long *)(this + 8) + 0x18) + 0xe0);
    goto LAB_01301638;
  case 0x2b1:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      lVar15 = *(long *)(this + 8);
      goto LAB_01300610;
    }
    break;
  case 0x2b2:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)OperationTyper::StrictEqual
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28),lVar10);
      return pcVar16;
    }
    break;
  case 0x2b3:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar7 = *(long *)(lVar10 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    lVar10 = NodeProperties::GetValueInput(param_1,1);
    lVar10 = *(long *)(lVar10 + 8);
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    if (lVar7 == 1) {
      return (char *)0x1;
    }
    if (lVar10 == 1) {
      return (char *)0x1;
    }
    lVar15 = *(long *)(this + 8);
    goto LAB_013016a0;
  case 0x2b4:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if (lVar10 == 1) {
      return (char *)0x1;
    }
    if (lVar7 == 1) {
      return (char *)0x1;
    }
    lVar15 = *(long *)(this + 8);
LAB_013016a0:
    uVar3 = JSCompareTyper(lVar7,lVar10,lVar15);
    goto LAB_01301708;
  case 0x2b5:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar7 = *(long *)(lVar10 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    lVar10 = NodeProperties::GetValueInput(param_1,1);
    lVar10 = *(long *)(lVar10 + 8);
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    if (lVar7 == 1) {
      return (char *)0x1;
    }
    if (lVar10 == 1) {
      return (char *)0x1;
    }
    lVar15 = *(long *)(this + 8);
    goto LAB_013016f8;
  case 0x2b6:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if (lVar10 == 1) {
      return (char *)0x1;
    }
    if (lVar7 == 1) {
      return (char *)0x1;
    }
    lVar15 = *(long *)(this + 8);
LAB_013016f8:
    uVar3 = JSCompareTyper(lVar10,lVar7,lVar15);
    uVar3 = Invert(uVar3);
LAB_01301708:
    pcVar16 = (char *)FalsifyUndefined(uVar3,lVar15);
    return pcVar16;
  case 0x2b7:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      uVar8 = *(undefined8 *)(this + 8);
      pcVar11 = NumberBitwiseOr;
LAB_013017cc:
      pcVar16 = (char *)BinaryNumberOpTyper(lVar10,lVar7,uVar8,pcVar11);
      return pcVar16;
    }
    break;
  case 0x2b8:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      uVar8 = *(undefined8 *)(this + 8);
      pcVar11 = NumberBitwiseXor;
      goto LAB_013017cc;
    }
    break;
  case 0x2b9:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      uVar8 = *(undefined8 *)(this + 8);
      pcVar11 = NumberBitwiseAnd;
      goto LAB_013017cc;
    }
    break;
  case 0x2ba:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      uVar8 = *(undefined8 *)(this + 8);
      pcVar11 = NumberShiftLeft;
      goto LAB_013017cc;
    }
    break;
  case 699:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      uVar8 = *(undefined8 *)(this + 8);
      pcVar11 = NumberShiftRight;
      goto LAB_013017cc;
    }
    break;
  case 700:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pOVar9 = (OperationTyper *)(*(long *)(this + 8) + 0x28);
      lVar10 = OperationTyper::ToNumber(pOVar9,lVar10);
      lVar7 = OperationTyper::ToNumber(pOVar9,lVar7);
      goto LAB_0130103c;
    }
    break;
  case 0x2bd:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      pcVar16 = (char *)JSAddTyper(lVar10,lVar7,*(undefined8 *)(this + 8));
      return pcVar16;
    }
    break;
  case 0x2be:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      uVar8 = *(undefined8 *)(this + 8);
      pcVar11 = NumberSubtract;
      goto LAB_013017cc;
    }
    break;
  case 0x2bf:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      uVar8 = *(undefined8 *)(this + 8);
      pcVar11 = NumberMultiply;
      goto LAB_013017cc;
    }
    break;
  case 0x2c0:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      uVar8 = *(undefined8 *)(this + 8);
      pcVar11 = NumberDivide;
      goto LAB_013017cc;
    }
    break;
  case 0x2c1:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    lVar10 = *(long *)(lVar10 + 8);
    pcVar16 = (char *)0x1;
    if (lVar10 == 0) {
      lVar10 = 1;
    }
    lVar7 = NodeProperties::GetValueInput(param_1,1);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 == 0) {
      lVar7 = 1;
    }
    if ((lVar10 != 1) && (lVar7 != 1)) {
      uVar8 = *(undefined8 *)(this + 8);
      pcVar11 = NumberModulus;
      goto LAB_013017cc;
    }
    break;
  case 0x2c2:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    uVar6 = *(ulong *)(lVar10 + 8);
    lVar10 = NodeProperties::GetValueInput(param_1,1);
    pcVar16 = (char *)0x8001c5f;
    if (*(ulong *)(lVar10 + 8) < 2 || uVar6 < 2) {
      pcVar16 = (char *)0x1;
    }
    return pcVar16;
  case 0x2c3:
  case 0x2c4:
  case 0x2c5:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    uVar6 = *(ulong *)(lVar10 + 8);
    lVar10 = NodeProperties::GetValueInput(param_1,1);
    pcVar16 = (char *)0x201;
    if (*(ulong *)(lVar10 + 8) < 2 || uVar6 < 2) {
      pcVar16 = (char *)0x1;
    }
    break;
  case 0x2c6:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)ToLength(*(ulong *)(lVar10 + 8),*(undefined8 *)(this + 8));
      return pcVar16;
    }
    goto switchD_012fee28_caseD_3b;
  case 0x2c7:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)ToName(*(ulong *)(lVar10 + 8),*(undefined8 *)(this + 8));
      return pcVar16;
    }
switchD_012fee28_caseD_3b:
    pcVar16 = (char *)0x1;
    break;
  case 0x2c8:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) goto LAB_01300af0;
    goto LAB_0130189c;
  case 0x2c9:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::ToNumberConvertBigInt
                                  ((OperationTyper *)(*(long *)(this + 8) + 0x28));
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0x2ca:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)OperationTyper::ToNumeric((OperationTyper *)(*(long *)(this + 8) + 0x28));
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0x2cb:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)ToObject(*(ulong *)(lVar10 + 8),*(undefined8 *)(this + 8));
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0x2cc:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    local_48 = *(char **)(lVar10 + 8);
    if ((char *)0x1 < local_48) {
      local_28 = (int *)local_48;
      if (((local_48 == (char *)0x8007fff) ||
          (uVar6 = Type::SlowIs((Type *)&local_28,0x8007fff), (uVar6 & 1) != 0)) &&
         (uVar6 = Type::Maybe((Type *)&local_28,0x47f0001), (uVar6 & 1) == 0)) {
        local_48 = (char *)local_28;
        if (local_28 == (int *)0x4021) {
          return (char *)0x4021;
        }
      }
      else {
        local_48 = (char *)0x8007fff;
      }
      uVar6 = Type::SlowIs((Type *)&local_48,0x4021);
      if ((uVar6 & 1) == 0) {
        return (char *)0x4021;
      }
      return local_48;
    }
    goto LAB_0130189c;
  case 0x2ce:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      lVar10 = *(long *)(this + 8);
      pOVar9 = (OperationTyper *)(lVar10 + 0x28);
      local_28 = (int *)OperationTyper::ToNumeric(pOVar9);
      piVar13 = (int *)0x1c5f;
      if ((local_28 != (int *)0x1c5f) &&
         (uVar6 = Type::SlowIs((Type *)&local_28,0x1c5f), piVar13 = local_28, (uVar6 & 1) == 0)) {
        return (char *)0x8001c5f;
      }
      pcVar16 = (char *)OperationTyper::NumberBitwiseXor
                                  (pOVar9,piVar13,*(undefined8 *)(*(long *)(lVar10 + 0x18) + 0xf8));
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0x2cf:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      lVar10 = *(long *)(this + 8);
      pOVar9 = (OperationTyper *)(lVar10 + 0x28);
      local_28 = (int *)OperationTyper::ToNumeric(pOVar9);
      piVar13 = (int *)0x1c5f;
      if ((local_28 != (int *)0x1c5f) &&
         (uVar6 = Type::SlowIs((Type *)&local_28,0x1c5f), piVar13 = local_28, (uVar6 & 1) == 0)) {
        return (char *)0x8001c5f;
      }
      pcVar16 = (char *)OperationTyper::NumberSubtract
                                  (pOVar9,piVar13,*(undefined8 *)(*(long *)(lVar10 + 0x18) + 0xe8));
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0x2d0:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      lVar10 = *(long *)(this + 8);
      pOVar9 = (OperationTyper *)(lVar10 + 0x28);
      local_28 = (int *)OperationTyper::ToNumeric(pOVar9);
      piVar13 = (int *)0x1c5f;
      if ((local_28 != (int *)0x1c5f) &&
         (uVar6 = Type::SlowIs((Type *)&local_28,0x1c5f), piVar13 = local_28, (uVar6 & 1) == 0)) {
        return (char *)0x8001c5f;
      }
      pcVar16 = (char *)OperationTyper::NumberAdd
                                  (pOVar9,piVar13,*(undefined8 *)(*(long *)(lVar10 + 0x18) + 0xe8));
      return pcVar16;
    }
    goto LAB_0130189c;
  case 0x2d1:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      lVar10 = *(long *)(this + 8);
      pOVar9 = (OperationTyper *)(lVar10 + 0x28);
      local_28 = (int *)OperationTyper::ToNumeric(pOVar9);
      piVar13 = (int *)0x1c5f;
      if ((local_28 != (int *)0x1c5f) &&
         (uVar6 = Type::SlowIs((Type *)&local_28,0x1c5f), piVar13 = local_28, (uVar6 & 1) == 0)) {
        return (char *)0x8001c5f;
      }
      pcVar16 = (char *)OperationTyper::NumberMultiply
                                  (pOVar9,piVar13,*(undefined8 *)(*(long *)(lVar10 + 0x18) + 0xf8));
      return pcVar16;
    }
    goto LAB_0130189c;
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
    pcVar16 = (char *)0x20001;
    break;
  case 0x2d3:
    pcVar16 = (char *)0x4670001;
    break;
  case 0x2d4:
    pcVar16 = (char *)CreateArgumentsTypeOf(pOVar12);
    if ((ulong)(long)*pcVar16 < 3) {
      return *(char **)(&DAT_01a02190 + (long)*pcVar16 * 8);
    }
switchD_012fee28_caseD_1:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x2d5:
  case 0x2d6:
  case 0x2dc:
  case 0x2e1:
  case 0x2e8:
    pcVar16 = (char *)0x4000001;
    break;
  case 0x2d9:
    pcVar16 = "S0_6HandleIS2_EENS5_INS0_6ObjectEEES8_";
    break;
  case 0x2da:
    pcVar16 = "";
    break;
  case 0x2f4:
    pcVar16 = (char *)0x6d0001;
    break;
  case 0x2f6:
    lVar10 = ContextAccessOf(pOVar12);
    pcVar16 = "a";
    if (1 < *(uint *)(lVar10 + 4)) {
      pcVar16 = (char *)0xffffffff;
    }
    break;
  case 0x2fc:
  case 0x2fd:
  case 0x2fe:
  case 0x2ff:
    lVar10 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar10 + 8)) {
      pcVar16 = (char *)JSCallTyper(*(ulong *)(lVar10 + 8),*(undefined8 *)(this + 8));
      return pcVar16;
    }
LAB_0130189c:
    pcVar16 = (char *)0x1;
    break;
  case 0x300:
  case 0x301:
  case 0x302:
  case 0x303:
  case 0x316:
  case 0x317:
    pcVar16 = (char *)0x47f0001;
    break;
  case 0x307:
    pcVar16 = (char *)TypeJSCallRuntime(this,param_1);
    return pcVar16;
  case 0x309:
    lVar7 = 0x4021;
    lVar10 = 0x101;
    puVar14 = *(undefined8 **)(*(long *)(this + 8) + 8);
LAB_01301638:
    pcVar16 = (char *)Type::Union(lVar7,lVar10,*puVar14);
    return pcVar16;
  case 0x30a:
    uVar2 = BitsetType::SignedSmall();
    uVar8 = Type::Union(uVar2 | 1,0x1000001,**(undefined8 **)(*(long *)(this + 8) + 8));
    pcVar16 = (char *)Type::Tuple(uVar8,0x1000001,
                                  *(undefined8 *)(*(long *)(*(long *)(this + 8) + 0x18) + 0x1b0),
                                  **(undefined8 **)(*(long *)(this + 8) + 8));
    return pcVar16;
  case 0x311:
    uVar2 = BitsetType::SignedSmall();
    pcVar16 = (char *)(ulong)(uVar2 | 1);
    break;
  case 0x315:
  case 0x318:
  case 0x319:
    pcVar16 = (char *)0x101;
  }
  return pcVar16;
}

