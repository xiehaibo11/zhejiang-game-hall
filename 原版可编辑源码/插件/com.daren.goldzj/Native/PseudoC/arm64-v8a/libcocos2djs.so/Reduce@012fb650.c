
/* v8::internal::compiler::TypeNarrowingReducer::Reduce(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::TypeNarrowingReducer::Reduce(TypeNarrowingReducer *this,Node *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  Node *pNVar4;
  Node *pNVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  long local_40;
  long local_38;
  
  pNVar4 = (Node *)0x0;
  switch(*(undefined2 *)(*(long *)param_1 + 0x10)) {
  case 0x3a:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::TypeTypeGuard
                      ((OperationTyper *)(this + 0x18),*(long *)param_1,
                       *(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  default:
    goto switchD_012fb69c_caseD_3b;
  case 0x70:
    pNVar4 = param_1 + 0x20;
    pNVar5 = pNVar4;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar5 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    local_38 = *(long *)(*(long *)pNVar5 + 8);
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    local_40 = *(long *)(*(long *)(pNVar4 + 8) + 8);
    if (((local_38 == 0x45f) || (uVar3 = Type::SlowIs((Type *)&local_38,0x45f), (uVar3 & 1) != 0))
       && ((local_40 == 0x45f || (uVar3 = Type::SlowIs((Type *)&local_40,0x45f), (uVar3 & 1) != 0)))
       ) {
      dVar7 = (double)Type::Max((Type *)&local_38);
      dVar8 = (double)Type::Min((Type *)&local_40);
      if (dVar8 <= dVar7) {
        dVar7 = (double)Type::Min((Type *)&local_38);
        dVar8 = (double)Type::Max((Type *)&local_40);
        if (dVar7 < dVar8) goto LAB_012fc194;
        uVar1 = *(undefined8 *)(this + 0x48);
      }
      else {
        uVar1 = *(undefined8 *)(this + 0x50);
      }
    }
    else {
LAB_012fc194:
      uVar1 = 0xffffffff;
    }
    break;
  case 0x76:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::SameValue
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8),
                       *(undefined8 *)(*(long *)(pNVar4 + 8) + 8));
    break;
  case 0x7c:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberAdd
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8),
                       *(undefined8 *)(*(long *)(pNVar4 + 8) + 8));
    break;
  case 0x7d:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberSubtract
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8),
                       *(undefined8 *)(*(long *)(pNVar4 + 8) + 8));
    break;
  case 0x7e:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberMultiply
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8),
                       *(undefined8 *)(*(long *)(pNVar4 + 8) + 8));
    break;
  case 0x7f:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberDivide
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8),
                       *(undefined8 *)(*(long *)(pNVar4 + 8) + 8));
    break;
  case 0x80:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberModulus
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8),
                       *(undefined8 *)(*(long *)(pNVar4 + 8) + 8));
    break;
  case 0x81:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberBitwiseOr
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8),
                       *(undefined8 *)(*(long *)(pNVar4 + 8) + 8));
    break;
  case 0x82:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberBitwiseXor
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8),
                       *(undefined8 *)(*(long *)(pNVar4 + 8) + 8));
    break;
  case 0x83:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberBitwiseAnd
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8),
                       *(undefined8 *)(*(long *)(pNVar4 + 8) + 8));
    break;
  case 0x84:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberShiftLeft
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8),
                       *(undefined8 *)(*(long *)(pNVar4 + 8) + 8));
    break;
  case 0x85:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberShiftRight
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8),
                       *(undefined8 *)(*(long *)(pNVar4 + 8) + 8));
    break;
  case 0x86:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberShiftRightLogical
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8),
                       *(undefined8 *)(*(long *)(pNVar4 + 8) + 8));
    break;
  case 0x87:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberAtan2
                      (this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8),
                       *(undefined8 *)(*(long *)(pNVar4 + 8) + 8));
    break;
  case 0x88:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberImul
                      (this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8),
                       *(undefined8 *)(*(long *)(pNVar4 + 8) + 8));
    break;
  case 0x89:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberMax
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8),
                       *(undefined8 *)(*(long *)(pNVar4 + 8) + 8));
    break;
  case 0x8a:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberMin
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8),
                       *(undefined8 *)(*(long *)(pNVar4 + 8) + 8));
    break;
  case 0x8b:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberPow
                      (this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8),
                       *(undefined8 *)(*(long *)(pNVar4 + 8) + 8));
    break;
  case 0x9b:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberAbs
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0x9c:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberAcos(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0x9d:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberAcosh(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0x9e:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberAsin(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0x9f:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberAsinh(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xa0:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberAtan(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xa1:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberAtanh(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xa2:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberCbrt(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xa3:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberCeil
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xa4:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberClz32(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xa5:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberCos(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xa6:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberCosh(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xa7:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberExp(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xa8:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberExpm1(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xa9:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberFloor
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xaa:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberFround(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xab:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberLog(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xac:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberLog1p(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xad:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberLog2(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xae:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberLog10(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xaf:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberRound
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xb0:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberSign
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xb1:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberSin(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xb2:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberSinh(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xb3:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberSqrt(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xb4:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberTan(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xb5:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberTanh(this + 0x18,*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xb6:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberTrunc
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xb7:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberToBoolean
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xb8:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberToInt32
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xb9:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberToString
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xba:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberToUint32
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xbb:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberToUint8Clamped
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xbc:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::NumberSilenceNaN
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8));
    break;
  case 0xfb:
    pNVar4 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    uVar1 = OperationTyper::ToBoolean
                      ((OperationTyper *)(this + 0x18),*(undefined8 *)(*(long *)pNVar4 + 8));
  }
  lVar6 = *(long *)(param_1 + 8);
  local_38 = lVar6;
  lVar2 = Type::Intersect(uVar1,lVar6,*(undefined8 *)**(undefined8 **)(this + 0x10));
  if ((lVar6 == lVar2) || (uVar3 = Type::SlowIs((Type *)&local_38,lVar2), (uVar3 & 1) != 0)) {
    pNVar4 = (Node *)0x0;
  }
  else {
    *(long *)(param_1 + 8) = lVar2;
    pNVar4 = param_1;
  }
switchD_012fb69c_caseD_3b:
  return pNVar4;
}

