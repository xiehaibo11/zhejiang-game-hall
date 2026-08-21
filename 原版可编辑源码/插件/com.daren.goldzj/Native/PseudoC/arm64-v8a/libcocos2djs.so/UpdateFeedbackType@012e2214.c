
/* v8::internal::compiler::RepresentationSelector::UpdateFeedbackType(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::RepresentationSelector::UpdateFeedbackType
          (RepresentationSelector *this,Node *param_1)

{
  uint uVar1;
  Node *pNVar2;
  undefined8 uVar3;
  long lVar4;
  Node *pNVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_58;
  
  lVar4 = *(long *)param_1;
  if (*(int *)(lVar4 + 0x20) == 0) goto LAB_012e28e8;
  uVar8 = *(uint *)(param_1 + 0x14);
  uVar6 = (ulong)uVar8;
  lVar12 = *(long *)(this + 0x18);
  plVar7 = (long *)(lVar12 + (uVar6 & 0xffffff) * 0x28 + 0x18);
  lVar11 = *plVar7;
  if ((*(short *)(lVar4 + 0x10) != 0x23) && (0 < *(int *)(lVar4 + 0x14))) {
    lVar9 = 0;
    do {
      pNVar2 = param_1 + 0x20;
      if ((uVar8 & 0xf000000) == 0xf000000) {
        pNVar2 = (Node *)(*(long *)(param_1 + 0x20) + 0x10);
      }
      if (*(long *)(lVar12 + ((ulong)*(uint *)(*(long *)(pNVar2 + lVar9 * 8) + 0x14) & 0xffffff) *
                             0x28 + 0x18) == 0) {
        return 0;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(lVar4 + 0x14));
  }
  uVar1 = uVar8 & 0xf000000;
  uVar8 = uVar8 >> 0x18 & 0xf;
  if (uVar1 == 0xf000000) {
    if (0 < *(int *)(*(long *)(param_1 + 0x20) + 8)) goto LAB_012e22fc;
LAB_012e22e8:
    lVar9 = 0;
  }
  else {
    if (uVar8 == 0) goto LAB_012e22e8;
LAB_012e22fc:
    pNVar2 = param_1 + 0x20;
    if (uVar1 == 0xf000000) {
      pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
    }
    lVar9 = *(long *)(lVar12 + ((ulong)*(uint *)(*(long *)pNVar2 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar9 == 0) {
      lVar9 = 1;
    }
  }
  if (uVar1 == 0xf000000) {
    uVar8 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
  }
  if ((int)uVar8 < 2) {
    lVar10 = 0;
  }
  else {
    pNVar2 = param_1 + 0x20;
    if (uVar1 == 0xf000000) {
      pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
    }
    lVar10 = *(long *)(lVar12 + ((ulong)*(uint *)(*(long *)(pNVar2 + 8) + 0x14) & 0xffffff) * 0x28 +
                      0x18);
    if (lVar10 == 0) {
      lVar10 = 1;
    }
  }
  local_58 = lVar11;
  switch(*(short *)(lVar4 + 0x10)) {
  case 0x22:
    pNVar2 = param_1 + 0x20;
    pNVar5 = pNVar2;
    if (uVar1 == 0xf000000) {
      pNVar5 = (Node *)(*(long *)pNVar2 + 0x10);
    }
    lVar4 = *(long *)(lVar12 + ((ulong)*(uint *)(*(long *)(pNVar5 + 8) + 0x14) & 0xffffff) * 0x28 +
                     0x18);
    if (lVar4 == 0) {
      lVar4 = 1;
    }
    if (uVar1 == 0xf000000) {
      pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
    }
    lVar12 = *(long *)(lVar12 + ((ulong)*(uint *)(*(long *)(pNVar2 + 0x10) + 0x14) & 0xffffff) *
                                0x28 + 0x18);
    if (lVar12 == 0) {
      lVar12 = 1;
    }
    lVar4 = OperationTyper::Merge((OperationTyper *)(this + 0x140),lVar4,lVar12);
    break;
  case 0x23:
    uVar8 = *(uint *)(lVar4 + 0x14);
    pNVar2 = param_1 + 0x20;
    pNVar5 = pNVar2;
    if (uVar1 == 0xf000000) {
      pNVar5 = (Node *)(*(long *)pNVar2 + 0x10);
    }
    lVar4 = *(long *)(lVar12 + ((ulong)*(uint *)(*(long *)pNVar5 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar4 == 0) {
      lVar4 = 1;
    }
    if (1 < (int)uVar8) {
      lVar12 = 0;
      while( true ) {
        pNVar5 = pNVar2;
        if ((~(uint)uVar6 & 0xf000000) == 0) {
          pNVar5 = (Node *)(*(long *)pNVar2 + 0x10);
        }
        lVar9 = *(long *)(*(long *)(this + 0x18) +
                          ((ulong)*(uint *)(*(long *)(pNVar5 + lVar12 * 8 + 8) + 0x14) & 0xffffff) *
                          0x28 + 0x18);
        if (lVar9 == 0) {
          lVar9 = 1;
        }
        lVar4 = OperationTyper::Merge((OperationTyper *)(this + 0x140),lVar4,lVar9);
        if ((ulong)uVar8 - 2 == lVar12) break;
        uVar6 = (ulong)*(uint *)(param_1 + 0x14);
        lVar12 = lVar12 + 1;
      }
    }
    if (lVar11 != 0) {
      local_58 = lVar4;
      lVar4 = Weaken(this,param_1,lVar11);
    }
    break;
  default:
    if (lVar11 != 0) goto LAB_012e28e8;
    *plVar7 = *(long *)(param_1 + 8);
    goto LAB_012e2928;
  case 0x3a:
    pNVar2 = param_1 + 0x20;
    if (uVar1 == 0xf000000) {
      pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
    }
    lVar12 = *(long *)(lVar12 + ((ulong)*(uint *)(*(long *)pNVar2 + 0x14) & 0xffffff) * 0x28 + 0x18)
    ;
    if (lVar12 == 0) {
      lVar12 = 1;
    }
    lVar4 = OperationTyper::TypeTypeGuard((OperationTyper *)(this + 0x140),lVar4,lVar12);
    break;
  case 0x76:
    lVar4 = OperationTyper::SameValue((OperationTyper *)(this + 0x140));
    break;
  case 0x7c:
    lVar4 = OperationTyper::NumberAdd((OperationTyper *)(this + 0x140));
    break;
  case 0x7d:
    lVar4 = OperationTyper::NumberSubtract((OperationTyper *)(this + 0x140));
    break;
  case 0x7e:
    lVar4 = OperationTyper::NumberMultiply((OperationTyper *)(this + 0x140));
    break;
  case 0x7f:
    lVar4 = OperationTyper::NumberDivide((OperationTyper *)(this + 0x140));
    break;
  case 0x80:
    lVar4 = OperationTyper::NumberModulus((OperationTyper *)(this + 0x140));
    break;
  case 0x81:
    lVar4 = OperationTyper::NumberBitwiseOr((OperationTyper *)(this + 0x140));
    break;
  case 0x82:
    lVar4 = OperationTyper::NumberBitwiseXor((OperationTyper *)(this + 0x140));
    break;
  case 0x83:
    lVar4 = OperationTyper::NumberBitwiseAnd((OperationTyper *)(this + 0x140));
    break;
  case 0x84:
    lVar4 = OperationTyper::NumberShiftLeft((OperationTyper *)(this + 0x140));
    break;
  case 0x85:
    lVar4 = OperationTyper::NumberShiftRight((OperationTyper *)(this + 0x140));
    break;
  case 0x86:
    lVar4 = OperationTyper::NumberShiftRightLogical((OperationTyper *)(this + 0x140));
    break;
  case 0x87:
    lVar4 = OperationTyper::NumberAtan2(this + 0x140);
    break;
  case 0x88:
    lVar4 = OperationTyper::NumberImul(this + 0x140);
    break;
  case 0x89:
    lVar4 = OperationTyper::NumberMax((OperationTyper *)(this + 0x140));
    break;
  case 0x8a:
    lVar4 = OperationTyper::NumberMin((OperationTyper *)(this + 0x140));
    break;
  case 0x8b:
    lVar4 = OperationTyper::NumberPow(this + 0x140);
    break;
  case 0x8e:
    uVar3 = OperationTyper::SpeculativeNumberAdd((OperationTyper *)(this + 0x140));
    goto LAB_012e288c;
  case 0x8f:
    uVar3 = OperationTyper::SpeculativeNumberSubtract((OperationTyper *)(this + 0x140));
    goto LAB_012e288c;
  case 0x90:
    uVar3 = OperationTyper::SpeculativeNumberMultiply((OperationTyper *)(this + 0x140));
    goto LAB_012e288c;
  case 0x91:
    uVar3 = OperationTyper::SpeculativeNumberDivide((OperationTyper *)(this + 0x140));
    goto LAB_012e288c;
  case 0x92:
    uVar3 = OperationTyper::SpeculativeNumberModulus((OperationTyper *)(this + 0x140));
    goto LAB_012e288c;
  case 0x93:
    uVar3 = OperationTyper::SpeculativeNumberBitwiseAnd((OperationTyper *)(this + 0x140));
    goto LAB_012e288c;
  case 0x94:
    uVar3 = OperationTyper::SpeculativeNumberBitwiseOr((OperationTyper *)(this + 0x140));
    goto LAB_012e288c;
  case 0x95:
    uVar3 = OperationTyper::SpeculativeNumberBitwiseXor((OperationTyper *)(this + 0x140));
    goto LAB_012e288c;
  case 0x96:
    uVar3 = OperationTyper::SpeculativeNumberShiftLeft((OperationTyper *)(this + 0x140));
    goto LAB_012e288c;
  case 0x97:
    uVar3 = OperationTyper::SpeculativeNumberShiftRight((OperationTyper *)(this + 0x140));
    goto LAB_012e288c;
  case 0x98:
    uVar3 = OperationTyper::SpeculativeNumberShiftRightLogical((OperationTyper *)(this + 0x140));
    goto LAB_012e288c;
  case 0x99:
    uVar3 = OperationTyper::SpeculativeSafeIntegerAdd((OperationTyper *)(this + 0x140));
    goto LAB_012e288c;
  case 0x9a:
    uVar3 = OperationTyper::SpeculativeSafeIntegerSubtract((OperationTyper *)(this + 0x140));
    goto LAB_012e288c;
  case 0x9b:
    lVar4 = OperationTyper::NumberAbs((OperationTyper *)(this + 0x140));
    break;
  case 0x9c:
    lVar4 = OperationTyper::NumberAcos(this + 0x140);
    break;
  case 0x9d:
    lVar4 = OperationTyper::NumberAcosh(this + 0x140);
    break;
  case 0x9e:
    lVar4 = OperationTyper::NumberAsin(this + 0x140);
    break;
  case 0x9f:
    lVar4 = OperationTyper::NumberAsinh(this + 0x140);
    break;
  case 0xa0:
    lVar4 = OperationTyper::NumberAtan(this + 0x140);
    break;
  case 0xa1:
    lVar4 = OperationTyper::NumberAtanh(this + 0x140);
    break;
  case 0xa2:
    lVar4 = OperationTyper::NumberCbrt(this + 0x140);
    break;
  case 0xa3:
    lVar4 = OperationTyper::NumberCeil((OperationTyper *)(this + 0x140));
    break;
  case 0xa4:
    lVar4 = OperationTyper::NumberClz32(this + 0x140);
    break;
  case 0xa5:
    lVar4 = OperationTyper::NumberCos(this + 0x140);
    break;
  case 0xa6:
    lVar4 = OperationTyper::NumberCosh(this + 0x140);
    break;
  case 0xa7:
    lVar4 = OperationTyper::NumberExp(this + 0x140);
    break;
  case 0xa8:
    lVar4 = OperationTyper::NumberExpm1(this + 0x140);
    break;
  case 0xa9:
    lVar4 = OperationTyper::NumberFloor((OperationTyper *)(this + 0x140));
    break;
  case 0xaa:
    lVar4 = OperationTyper::NumberFround(this + 0x140);
    break;
  case 0xab:
    lVar4 = OperationTyper::NumberLog(this + 0x140);
    break;
  case 0xac:
    lVar4 = OperationTyper::NumberLog1p(this + 0x140);
    break;
  case 0xad:
    lVar4 = OperationTyper::NumberLog2(this + 0x140);
    break;
  case 0xae:
    lVar4 = OperationTyper::NumberLog10(this + 0x140);
    break;
  case 0xaf:
    lVar4 = OperationTyper::NumberRound((OperationTyper *)(this + 0x140));
    break;
  case 0xb0:
    lVar4 = OperationTyper::NumberSign((OperationTyper *)(this + 0x140));
    break;
  case 0xb1:
    lVar4 = OperationTyper::NumberSin(this + 0x140);
    break;
  case 0xb2:
    lVar4 = OperationTyper::NumberSinh(this + 0x140);
    break;
  case 0xb3:
    lVar4 = OperationTyper::NumberSqrt(this + 0x140);
    break;
  case 0xb4:
    lVar4 = OperationTyper::NumberTan(this + 0x140);
    break;
  case 0xb5:
    lVar4 = OperationTyper::NumberTanh(this + 0x140);
    break;
  case 0xb6:
    lVar4 = OperationTyper::NumberTrunc((OperationTyper *)(this + 0x140));
    break;
  case 0xb7:
    lVar4 = OperationTyper::NumberToBoolean((OperationTyper *)(this + 0x140));
    break;
  case 0xb8:
    lVar4 = OperationTyper::NumberToInt32((OperationTyper *)(this + 0x140));
    break;
  case 0xb9:
    lVar4 = OperationTyper::NumberToString((OperationTyper *)(this + 0x140));
    break;
  case 0xba:
    lVar4 = OperationTyper::NumberToUint32((OperationTyper *)(this + 0x140));
    break;
  case 0xbb:
    lVar4 = OperationTyper::NumberToUint8Clamped((OperationTyper *)(this + 0x140));
    break;
  case 0xbc:
    lVar4 = OperationTyper::NumberSilenceNaN((OperationTyper *)(this + 0x140));
    break;
  case 0xc0:
    uVar3 = OperationTyper::SpeculativeToNumber((OperationTyper *)(this + 0x140));
    goto LAB_012e288c;
  case 0xc2:
    uVar3 = OperationTyper::SpeculativeBigIntAdd((OperationTyper *)(this + 0x140));
    goto LAB_012e288c;
  case 0xc3:
    uVar3 = OperationTyper::SpeculativeBigIntSubtract((OperationTyper *)(this + 0x140));
    goto LAB_012e288c;
  case 0xc4:
    lVar4 = OperationTyper::ToNumber((OperationTyper *)(this + 0x140));
    break;
  case 0xd4:
    uVar3 = OperationTyper::CheckBounds((OperationTyper *)(this + 0x140));
    goto LAB_012e288c;
  case 0xd7:
    uVar3 = OperationTyper::CheckNumber((OperationTyper *)(this + 0x140));
    goto LAB_012e288c;
  case 0xdf:
    uVar3 = OperationTyper::CheckFloat64Hole((OperationTyper *)(this + 0x140));
LAB_012e288c:
    lVar4 = Type::Intersect(uVar3,*(undefined8 *)(lVar12 + (uVar6 & 0xffffff) * 0x28 + 0x10),
                            *(undefined8 *)**(undefined8 **)this);
    break;
  case 0xe4:
    lVar4 = OperationTyper::ConvertReceiver((OperationTyper *)(this + 0x140),lVar9);
    break;
  case 0xe5:
    pNVar2 = param_1 + 0x20;
    if (uVar1 == 0xf000000) {
      pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
    }
    lVar4 = *(long *)(lVar12 + ((ulong)*(uint *)(*(long *)pNVar2 + 0x14) & 0xffffff) * 0x28 + 0x18);
    if (lVar4 == 0) {
      lVar4 = 1;
    }
    lVar4 = OperationTyper::ConvertTaggedHoleToUndefined
                      ((OperationTyper *)(this + 0x140),lVar4,lVar10);
  }
  local_58 = lVar4;
  local_58 = Type::Intersect(*(undefined8 *)(param_1 + 8),lVar4,*(undefined8 *)**(undefined8 **)this
                            );
  if ((lVar11 == 0) ||
     ((local_58 != lVar11 && (uVar6 = Type::SlowIs((Type *)&local_58,lVar11), (uVar6 & 1) == 0)))) {
    *(long *)(*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 + 0x18)
         = local_58;
    if (FLAG_trace_representation != '\0') {
      PrintNodeFeedbackType(this,param_1);
    }
LAB_012e2928:
    uVar3 = 1;
  }
  else {
LAB_012e28e8:
    uVar3 = 0;
  }
  return uVar3;
}

