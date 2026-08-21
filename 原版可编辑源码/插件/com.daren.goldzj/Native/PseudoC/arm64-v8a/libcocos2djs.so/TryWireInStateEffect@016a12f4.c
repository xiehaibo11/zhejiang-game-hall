
/* v8::internal::compiler::EffectControlLinearizer::TryWireInStateEffect(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::EffectControlLinearizer::TryWireInStateEffect
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  AccessBuilder *pAVar5;
  Node *pNVar6;
  undefined1 *puVar7;
  Node *pNVar8;
  long *plVar9;
  undefined1 uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  Node *pNVar16;
  GraphAssembler *pGVar17;
  undefined1 auVar18 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  Node *local_70;
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pAVar5 = *(AccessBuilder **)param_1;
  uVar14 = 0;
  switch(*(undefined2 *)(pAVar5 + 0x10)) {
  case 0x3c:
    plVar9 = (long *)NodeProperties::GetValueInput(param_1,0);
    local_70 = param_1;
    if (*(short *)(*plVar9 + 0x10) != 0x3b) {
      pNVar16 = (Node *)GraphAssembler::Unreachable((GraphAssembler *)(this + 0x38));
      NodeProperties::ReplaceValueInput(param_1,pNVar16,0);
    }
    break;
  default:
    goto switchD_016a1354_caseD_3d;
  case 0x3f:
    local_70 = (Node *)LowerChangeTaggedSignedToInt32(this,param_1);
    break;
  case 0x40:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) != '\x05') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","machine()->Is64()");
    }
    local_70 = (Node *)ChangeSmiToIntPtr(this,*(Node **)pNVar16);
    break;
  case 0x41:
    local_70 = (Node *)LowerChangeTaggedToInt32(this,param_1);
    break;
  case 0x42:
    local_70 = (Node *)LowerChangeTaggedToInt64(this,param_1);
    break;
  case 0x43:
    local_70 = (Node *)LowerChangeTaggedToUint32(this,param_1);
    break;
  case 0x44:
  case 0x52:
    local_70 = (Node *)LowerTruncateTaggedToFloat64(this,param_1);
    break;
  case 0x45:
    local_70 = (Node *)LowerChangeTaggedToTaggedSigned(this,param_1);
    break;
  case 0x46:
    local_70 = (Node *)LowerChangeInt31ToTaggedSigned(this,param_1);
    break;
  case 0x47:
    local_70 = (Node *)LowerChangeInt32ToTagged(this,param_1);
    break;
  case 0x48:
    local_70 = (Node *)LowerChangeInt64ToTagged(this,param_1);
    break;
  case 0x49:
    local_70 = (Node *)LowerChangeUint32ToTagged(this,param_1);
    break;
  case 0x4a:
    local_70 = (Node *)LowerChangeUint64ToTagged(this,param_1);
    break;
  case 0x4b:
    local_70 = (Node *)LowerChangeFloat64ToTagged(this,param_1);
    break;
  case 0x4c:
    local_70 = (Node *)LowerChangeFloat64ToTaggedPointer(this,param_1);
    break;
  case 0x4d:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    pNVar16 = *(Node **)pNVar16;
    pNVar8 = (Node *)GraphAssembler::TrueConstant((GraphAssembler *)(this + 0x38));
    local_70 = (Node *)GraphAssembler::TaggedEqual((GraphAssembler *)(this + 0x38),pNVar16,pNVar8);
    break;
  case 0x4e:
    local_70 = (Node *)LowerChangeBitToTagged(this,param_1);
    break;
  case 0x4f:
    local_70 = (Node *)LowerChangeUint64ToBigInt(this,param_1);
    break;
  case 0x50:
    local_70 = (Node *)LowerTruncateBigIntToUint64(this,param_1);
    break;
  case 0x51:
    local_70 = (Node *)LowerTruncateTaggedToWord32(this,param_1);
    break;
  case 0x53:
    local_70 = (Node *)LowerTruncateTaggedToBit(this,param_1);
    break;
  case 0x54:
    local_90 = GraphAssembler::NewBasicBlock((GraphAssembler *)(this + 0x38),false);
    uStack_88 = 0;
    uVar2 = (uint)local_98;
    local_98 = CONCAT44(1,uVar2 & 0xffffff00);
    local_60 = 1;
    TruncateTaggedPointerToBit(this,param_1,(GraphAssemblerLabel *)&local_98);
    GraphAssembler::Bind<1ul>((GraphAssembler *)(this + 0x38),(GraphAssemblerLabel *)&local_98);
    break;
  case 0x55:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    pNVar16 = (Node *)GraphAssembler::Int32AddWithOverflow
                                ((GraphAssembler *)(this + 0x38),*(Node **)pNVar16,
                                 *(Node **)(pNVar16 + 8));
    goto LAB_016a1970;
  case 0x56:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    pNVar16 = (Node *)GraphAssembler::Int32SubWithOverflow
                                ((GraphAssembler *)(this + 0x38),*(Node **)pNVar16,
                                 *(Node **)(pNVar16 + 8));
LAB_016a1970:
    pGVar17 = (GraphAssembler *)(this + 0x38);
    uVar14 = GraphAssembler::Projection(pGVar17,1,pNVar16);
    local_98 = 0;
    local_90 = CONCAT44(local_90._4_4_,0xffffffff);
    GraphAssembler::DeoptimizeIf(pGVar17,0x1f,&local_98,uVar14,param_2,1);
    local_70 = (Node *)GraphAssembler::Projection(pGVar17,0,pNVar16);
    break;
  case 0x57:
    local_70 = (Node *)LowerCheckedInt32Div(this,param_1,param_2);
    break;
  case 0x58:
    local_70 = (Node *)LowerCheckedInt32Mod(this,param_1,param_2);
    break;
  case 0x59:
    local_70 = (Node *)LowerCheckedUint32Div(this,param_1,param_2);
    break;
  case 0x5a:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    pNVar8 = *(Node **)pNVar16;
    pNVar16 = *(Node **)(pNVar16 + 8);
    pGVar17 = (GraphAssembler *)(this + 0x38);
    pNVar6 = (Node *)GraphAssembler::Int32Constant(pGVar17,0);
    uVar14 = GraphAssembler::Word32Equal(pGVar17,pNVar16,pNVar6);
    local_98 = 0;
    local_90 = CONCAT44(local_90._4_4_,0xffffffff);
    GraphAssembler::DeoptimizeIf(pGVar17,5,&local_98,uVar14,param_2,1);
    local_70 = (Node *)BuildUint32Mod(this,pNVar8,pNVar16);
    break;
  case 0x5b:
    local_70 = (Node *)LowerCheckedInt32Mul(this,param_1,param_2);
    break;
  case 0x5c:
    local_70 = (Node *)LowerCheckedInt32ToTaggedSigned(this,param_1,param_2);
    break;
  case 0x5d:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    pNVar16 = *(Node **)pNVar16;
    uVar14 = CheckParametersOf((Operator *)pAVar5);
    pGVar17 = (GraphAssembler *)(this + 0x38);
    pNVar8 = (Node *)GraphAssembler::TruncateInt64ToInt32(pGVar17,pNVar16);
    pNVar6 = (Node *)GraphAssembler::ChangeInt32ToInt64(pGVar17,pNVar8);
    uVar12 = GraphAssembler::Word64Equal(pGVar17,pNVar6,pNVar16);
    GraphAssembler::DeoptimizeIfNot(pGVar17,0x10,uVar14,uVar12,param_2,1);
    local_70 = pNVar8;
    break;
  case 0x5e:
    local_70 = (Node *)LowerCheckedInt64ToTaggedSigned(this,param_1,param_2);
    break;
  case 0x5f:
    local_70 = (Node *)LowerCheckedUint32Bounds(this,param_1,param_2);
    break;
  case 0x60:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    pNVar16 = *(Node **)pNVar16;
    puVar13 = (undefined8 *)CheckParametersOf((Operator *)pAVar5);
    pNVar8 = (Node *)GraphAssembler::Int32Constant((GraphAssembler *)(this + 0x38),0);
    uVar14 = GraphAssembler::Int32LessThan((GraphAssembler *)(this + 0x38),pNVar16,pNVar8);
    uVar12 = 0x10;
    goto LAB_016a2148;
  case 0x61:
    local_70 = (Node *)LowerCheckedUint32ToTaggedSigned(this,param_1,param_2);
    break;
  case 0x62:
    uVar14 = CheckParametersOf((Operator *)pAVar5);
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    pNVar8 = *(Node **)pNVar16;
    uVar12 = GraphAssembler::Uint64LessThan
                       ((GraphAssembler *)(this + 0x38),pNVar8,*(Node **)(pNVar16 + 8));
    GraphAssembler::DeoptimizeIfNot((GraphAssembler *)(this + 0x38),0x1e,uVar14,uVar12,param_2,0);
    local_70 = pNVar8;
    break;
  case 99:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    pNVar16 = *(Node **)pNVar16;
    uVar14 = CheckParametersOf((Operator *)pAVar5);
    pGVar17 = (GraphAssembler *)(this + 0x38);
    pNVar8 = (Node *)GraphAssembler::Int64Constant(pGVar17,0x7fffffff);
    uVar12 = GraphAssembler::Uint64LessThanOrEqual(pGVar17,pNVar16,pNVar8);
    GraphAssembler::DeoptimizeIfNot(pGVar17,0x10,uVar14,uVar12,param_2,1);
    local_70 = (Node *)GraphAssembler::TruncateInt64ToInt32(pGVar17,pNVar16);
    break;
  case 100:
    local_70 = (Node *)LowerCheckedUint64ToTaggedSigned(this,param_1,param_2);
    break;
  case 0x65:
    puVar7 = (undefined1 *)CheckMinusZeroParametersOf((Operator *)pAVar5);
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    local_70 = (Node *)BuildCheckedFloat64ToInt32
                                 (this,*puVar7,puVar7 + 8,*(undefined8 *)pNVar16,param_2);
    break;
  case 0x66:
    puVar7 = (undefined1 *)CheckMinusZeroParametersOf((Operator *)pAVar5);
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    local_70 = (Node *)BuildCheckedFloat64ToInt64
                                 (this,*puVar7,puVar7 + 8,*(undefined8 *)pNVar16,param_2);
    break;
  case 0x67:
    if (param_2 == (Node *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("No frame state (zapped by #%d: %s)",
               (ulong)(*(uint *)((long)*(long **)(this + 0x70) + 0x14) & 0xffffff),
               *(undefined8 *)(**(long **)(this + 0x70) + 8));
    }
    local_70 = (Node *)LowerCheckedTaggedSignedToInt32(this,param_1,param_2);
    break;
  case 0x68:
    local_70 = (Node *)LowerCheckedTaggedToInt32(this,param_1,param_2);
    break;
  case 0x69:
    local_70 = (Node *)LowerCheckedTaggedToArrayIndex(this,param_1,param_2);
    break;
  case 0x6a:
    local_70 = (Node *)LowerCheckedTruncateTaggedToWord32(this,param_1,param_2);
    break;
  case 0x6b:
    local_70 = (Node *)LowerCheckedTaggedToFloat64(this,param_1,param_2);
    break;
  case 0x6c:
    local_70 = (Node *)LowerCheckedTaggedToInt64(this,param_1,param_2);
    break;
  case 0x6d:
    local_70 = (Node *)LowerCheckedTaggedToTaggedSigned(this,param_1,param_2);
    break;
  case 0x6e:
    local_70 = (Node *)LowerCheckedTaggedToTaggedPointer(this,param_1,param_2);
    break;
  case 0x76:
    local_70 = (Node *)LowerSameValue(this,param_1);
    break;
  case 0x77:
    local_70 = (Node *)LowerSameValueNumbersOnly(this,param_1);
    break;
  case 0x78:
    local_70 = (Node *)LowerNumberSameValue(this,param_1);
    break;
  case 0x79:
    lVar15 = *(long *)this;
    uVar14 = 0x30;
    goto LAB_016a1bc4;
  case 0x7a:
    lVar15 = *(long *)this;
    uVar14 = 0x34;
    goto LAB_016a1bc4;
  case 0x7b:
    lVar15 = *(long *)this;
    uVar14 = 0x35;
LAB_016a1bc4:
    Builtins::CallableFor((Builtins *)&local_98,*(undefined8 *)(lVar15 + 0x168),uVar14);
    local_70 = (Node *)LowerStringComparison(this,(Callable *)&local_98,param_1);
    break;
  case 0x8c:
    local_70 = (Node *)LowerBigIntAdd(this,param_1,param_2);
    break;
  case 0x8d:
    local_70 = (Node *)LowerBigIntSubtract(this,param_1,param_2);
    break;
  case 0xb9:
    local_70 = (Node *)LowerNumberToString(this,param_1);
    break;
  case 0xbd:
    if (*(uint *)(pAVar5 + 0x2c) == 0x40) {
      pNVar16 = param_1 + 0x20;
      if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
        pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
      }
      local_70 = *(Node **)pNVar16;
    }
    else {
      pNVar16 = param_1 + 0x20;
      if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
        pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
      }
      pNVar16 = *(Node **)pNVar16;
      pNVar8 = (Node *)GraphAssembler::Int64Constant
                                 ((GraphAssembler *)(this + 0x38),
                                  ~(-1L << ((ulong)*(uint *)(pAVar5 + 0x2c) & 0x3f)));
      local_70 = (Node *)GraphAssembler::Word64And((GraphAssembler *)(this + 0x38),pNVar16,pNVar8);
    }
    break;
  case 0xbe:
    local_70 = (Node *)LowerBigIntNegate(this,param_1);
    break;
  case 0xbf:
    local_70 = (Node *)LowerCheckBigInt(this,param_1,param_2);
    break;
  case 0xc4:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    local_70 = (Node *)GraphAssembler::ToNumber
                                 ((GraphAssembler *)(this + 0x38),*(undefined8 *)pNVar16);
    break;
  case 0xc5:
    local_70 = (Node *)LowerPlainPrimitiveToWord32(this,param_1);
    break;
  case 0xc6:
    local_70 = (Node *)LowerPlainPrimitiveToFloat64(this,param_1);
    break;
  case 200:
    local_70 = (Node *)LowerStringConcat(this,param_1);
    break;
  case 0xc9:
    local_70 = (Node *)LowerStringToNumber(this,param_1);
    break;
  case 0xca:
    local_70 = (Node *)LowerStringCharCodeAt(this,param_1);
    break;
  case 0xcb:
    local_70 = (Node *)LowerStringCodePointAt(this,param_1);
    break;
  case 0xcc:
    local_70 = (Node *)LowerStringFromSingleCharCode(this,param_1);
    break;
  case 0xcd:
    local_70 = (Node *)LowerStringFromSingleCodePoint(this,param_1);
    break;
  case 0xce:
    local_70 = (Node *)LowerStringFromCodePointAt(this,param_1);
    break;
  case 0xcf:
    local_70 = (Node *)LowerStringIndexOf(this,param_1);
    break;
  case 0xd0:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    pNVar16 = *(Node **)pNVar16;
    AccessBuilder::ForStringLength(pAVar5);
    local_70 = (Node *)GraphAssembler::LoadField
                                 ((GraphAssembler *)(this + 0x38),(FieldAccess *)&local_98,pNVar16);
    break;
  case 0xd1:
  case 0xd2:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0xd3:
    local_70 = (Node *)LowerStringSubstring(this,param_1);
    break;
  case 0xd5:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    uVar14 = *(undefined8 *)pNVar16;
    puVar7 = (undefined1 *)CheckIfParametersOf((Operator *)pAVar5);
    puVar13 = (undefined8 *)(puVar7 + 8);
    uVar10 = *puVar7;
    goto LAB_016a1b5c;
  case 0xd6:
    LowerCheckMaps(this,param_1,param_2);
    local_70 = (Node *)0x0;
    break;
  case 0xd7:
    local_70 = (Node *)LowerCheckNumber(this,param_1,param_2);
    break;
  case 0xd8:
    local_70 = (Node *)LowerCheckInternalizedString(this,param_1,param_2);
    break;
  case 0xd9:
    local_70 = (Node *)LowerCheckReceiver(this,param_1,param_2);
    break;
  case 0xda:
    local_70 = (Node *)LowerCheckReceiverOrNullOrUndefined(this,param_1,param_2);
    break;
  case 0xdb:
    local_70 = (Node *)LowerCheckString(this,param_1,param_2);
    break;
  case 0xdc:
    local_70 = (Node *)LowerCheckSymbol(this,param_1,param_2);
    break;
  case 0xdf:
    local_70 = (Node *)LowerCheckFloat64Hole(this,param_1,param_2);
    break;
  case 0xe0:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    pNVar16 = *(Node **)pNVar16;
    pNVar8 = (Node *)GraphAssembler::TheHoleConstant((GraphAssembler *)(this + 0x38));
    uVar14 = GraphAssembler::TaggedEqual((GraphAssembler *)(this + 0x38),pNVar16,pNVar8);
    puVar13 = &local_98;
    uVar12 = 6;
    local_98 = 0;
    local_90 = CONCAT44(local_90._4_4_,0xffffffff);
LAB_016a2148:
    GraphAssembler::DeoptimizeIf((GraphAssembler *)(this + 0x38),uVar12,puVar13,uVar14,param_2,1);
    local_70 = pNVar16;
    break;
  case 0xe1:
    LowerCheckEqualsInternalizedString(this,param_1,param_2);
    local_70 = (Node *)0x0;
    break;
  case 0xe2:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    uVar14 = GraphAssembler::TaggedEqual
                       ((GraphAssembler *)(this + 0x38),*(Node **)pNVar16,*(Node **)(pNVar16 + 8));
    local_98 = 0;
    local_90 = CONCAT44(local_90._4_4_,0xffffffff);
    puVar13 = &local_98;
    uVar10 = 0x27;
LAB_016a1b5c:
    GraphAssembler::DeoptimizeIfNot((GraphAssembler *)(this + 0x38),uVar10,puVar13,uVar14,param_2,1)
    ;
    local_70 = (Node *)0x0;
    break;
  case 0xe3:
    local_70 = (Node *)LowerCompareMaps(this,param_1);
    break;
  case 0xe4:
    local_70 = (Node *)LowerConvertReceiver(this,param_1);
    break;
  case 0xe5:
    local_70 = (Node *)LowerConvertTaggedHoleToUndefined(this,param_1);
    break;
  case 0xe6:
    local_70 = (Node *)LowerTypeOf(this,param_1);
    break;
  case 0xe7:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    uVar14 = *(undefined8 *)pNVar16;
    uVar4 = AllocationTypeOf((Operator *)pAVar5);
    local_70 = (Node *)GraphAssembler::Allocate((GraphAssembler *)(this + 0x38),uVar4,uVar14);
    break;
  case 0xe9:
    local_70 = (Node *)LowerLoadFieldByIndex(this,param_1);
    break;
  case 0xec:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    pNVar16 = *(Node **)pNVar16;
    AccessBuilder::ForExternalIntPtr(pAVar5);
    pNVar16 = (Node *)GraphAssembler::LoadField
                                ((GraphAssembler *)(this + 0x38),(FieldAccess *)&local_98,pNVar16);
    local_70 = (Node *)GraphAssembler::BitcastWordToTagged((GraphAssembler *)(this + 0x38),pNVar16);
    break;
  case 0xed:
    local_70 = (Node *)LowerLoadTypedElement(this,param_1);
    break;
  case 0xef:
    local_70 = (Node *)LowerLoadDataViewElement(this,param_1);
    break;
  case 0xf0:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    pNVar8 = *(Node **)pNVar16;
    pNVar16 = *(Node **)(pNVar16 + 8);
    AccessBuilder::ForStackArgument(pAVar5);
    pNVar16 = (Node *)GraphAssembler::LoadElement
                                ((GraphAssembler *)(this + 0x38),(ElementAccess *)&local_98,pNVar8,
                                 pNVar16);
    local_70 = (Node *)GraphAssembler::BitcastWordToTagged((GraphAssembler *)(this + 0x38),pNVar16);
    break;
  case 0xf3:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    pNVar8 = *(Node **)pNVar16;
    pAVar5 = (AccessBuilder *)
             GraphAssembler::BitcastTaggedToWord
                       ((GraphAssembler *)(this + 0x38),*(Node **)(pNVar16 + 8));
    AccessBuilder::ForExternalIntPtr(pAVar5);
    GraphAssembler::StoreField
              ((GraphAssembler *)(this + 0x38),(FieldAccess *)&local_98,pNVar8,(Node *)pAVar5);
    local_70 = (Node *)0x0;
    break;
  case 0xf4:
    LowerStoreTypedElement(this,param_1);
    local_70 = (Node *)0x0;
    break;
  case 0xf6:
    LowerStoreDataViewElement(this,param_1);
    local_70 = (Node *)0x0;
    break;
  case 0xf7:
    LowerStoreSignedSmallElement(this,param_1);
    local_70 = (Node *)0x0;
    break;
  case 0xf8:
    LowerTransitionAndStoreElement(this,param_1);
    local_70 = (Node *)0x0;
    break;
  case 0xf9:
    LowerTransitionAndStoreNumberElement(this,param_1);
    local_70 = (Node *)0x0;
    break;
  case 0xfa:
    LowerTransitionAndStoreNonNumberElement(this,param_1);
    local_70 = (Node *)0x0;
    break;
  case 0xfb:
    local_70 = (Node *)LowerToBoolean(this,param_1);
    break;
  case 0xfc:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    pNVar16 = (Node *)GraphAssembler::Float64ExtractHighWord32
                                ((GraphAssembler *)(this + 0x38),*(Node **)pNVar16);
    iVar11 = -0x80001;
    goto LAB_016a20d4;
  case 0xfd:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    pNVar16 = (Node *)GraphAssembler::Float64Sub
                                ((GraphAssembler *)(this + 0x38),*(Node **)pNVar16,*(Node **)pNVar16
                                );
    local_70 = (Node *)GraphAssembler::Float64Equal((GraphAssembler *)(this + 0x38),pNVar16,pNVar16)
    ;
    break;
  case 0xfe:
    local_70 = (Node *)LowerObjectIsFiniteNumber(this,param_1);
    break;
  case 0xff:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    pNVar16 = *(Node **)pNVar16;
    pNVar8 = (Node *)BuildFloat64RoundTruncate(this,pNVar16);
    pGVar17 = (GraphAssembler *)(this + 0x38);
    pNVar16 = (Node *)GraphAssembler::Float64Sub(pGVar17,pNVar16,pNVar8);
    pNVar8 = (Node *)GraphAssembler::Float64Constant(pGVar17,0.0);
    local_70 = (Node *)GraphAssembler::Float64Equal(pGVar17,pNVar16,pNVar8);
    break;
  case 0x100:
    local_70 = (Node *)LowerObjectIsSafeInteger(this,param_1);
    break;
  case 0x101:
    local_70 = (Node *)LowerNumberIsSafeInteger(this,param_1);
    break;
  case 0x102:
    local_70 = (Node *)LowerObjectIsInteger(this,param_1);
    break;
  case 0x103:
    local_70 = (Node *)LowerObjectIsArrayBufferView(this,param_1);
    break;
  case 0x104:
    local_70 = (Node *)LowerObjectIsBigInt(this,param_1);
    break;
  case 0x105:
    local_70 = (Node *)LowerObjectIsCallable(this,param_1);
    break;
  case 0x106:
    local_70 = (Node *)LowerObjectIsConstructor(this,param_1);
    break;
  case 0x107:
    local_70 = (Node *)LowerObjectIsDetectableCallable(this,param_1);
    break;
  case 0x108:
    local_70 = (Node *)LowerObjectIsMinusZero(this,param_1);
    break;
  case 0x109:
    local_70 = (Node *)LowerNumberIsMinusZero(this,param_1);
    break;
  case 0x10a:
    local_70 = (Node *)LowerObjectIsNaN(this,param_1);
    break;
  case 0x10b:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    pNVar16 = (Node *)GraphAssembler::Float64Equal
                                ((GraphAssembler *)(this + 0x38),*(Node **)pNVar16,*(Node **)pNVar16
                                );
    iVar11 = 0;
LAB_016a20d4:
    pNVar8 = (Node *)GraphAssembler::Int32Constant((GraphAssembler *)(this + 0x38),iVar11);
    local_70 = (Node *)GraphAssembler::Word32Equal((GraphAssembler *)(this + 0x38),pNVar16,pNVar8);
    break;
  case 0x10c:
    local_70 = (Node *)LowerObjectIsNonCallable(this,param_1);
    break;
  case 0x10d:
    local_70 = (Node *)LowerObjectIsNumber(this,param_1);
    break;
  case 0x10e:
    local_70 = (Node *)LowerObjectIsReceiver(this,param_1);
    break;
  case 0x10f:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    pNVar16 = *(Node **)pNVar16;
    pGVar17 = (GraphAssembler *)(this + 0x38);
    pNVar8 = (Node *)GraphAssembler::Int32Constant(pGVar17,1);
    pNVar16 = (Node *)GraphAssembler::Word32And(pGVar17,pNVar16,pNVar8);
    pNVar8 = (Node *)GraphAssembler::Int32Constant(pGVar17,0);
    local_70 = (Node *)GraphAssembler::Word32Equal(pGVar17,pNVar16,pNVar8);
    break;
  case 0x110:
    local_70 = (Node *)LowerObjectIsString(this,param_1);
    break;
  case 0x111:
    local_70 = (Node *)LowerObjectIsSymbol(this,param_1);
    break;
  case 0x112:
    local_70 = (Node *)LowerObjectIsUndetectable(this,param_1);
    break;
  case 0x113:
    local_70 = (Node *)LowerArgumentsFrame((Node *)this);
    break;
  case 0x114:
    local_70 = (Node *)LowerArgumentsLength(this,param_1);
    break;
  case 0x115:
    local_70 = (Node *)LowerNewDoubleElements(this,param_1);
    break;
  case 0x116:
    local_70 = (Node *)LowerNewSmiOrObjectElements(this,param_1);
    break;
  case 0x117:
    local_70 = (Node *)LowerNewArgumentsElements(this,param_1);
    break;
  case 0x118:
    local_70 = (Node *)LowerNewConsString(this,param_1);
    break;
  case 0x11a:
    local_70 = (Node *)LowerEnsureWritableFastElements(this,param_1);
    break;
  case 0x11b:
    local_70 = (Node *)LowerMaybeGrowFastElements(this,param_1,param_2);
    break;
  case 0x11c:
    LowerTransitionElementsKind(this,param_1);
    local_70 = (Node *)0x0;
    break;
  case 0x11d:
    local_70 = (Node *)LowerFindOrderedHashMapEntry(this,param_1);
    break;
  case 0x11e:
    local_70 = (Node *)LowerFindOrderedHashMapEntryForInt32Key(this,param_1);
    break;
  case 0x11f:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    local_70 = *(Node **)pNVar16;
    if (*(int *)(this + 0x18) == 1) {
      local_70 = (Node *)GraphAssembler::Word32PoisonOnSpeculation
                                   ((GraphAssembler *)(this + 0x38),*(Node **)pNVar16);
    }
    break;
  case 0x120:
    LowerRuntimeAbort(this,param_1);
    local_70 = (Node *)0x0;
    break;
  case 0x121:
    local_70 = (Node *)LowerAssertType(this,param_1);
    break;
  case 0x122:
    local_70 = (Node *)LowerDateNow((Node *)this);
    break;
  case 0x182:
    cVar3 = MachineOperatorBuilder::Float64RoundDown
                      (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    if (cVar3 == '\0') {
      pNVar16 = param_1 + 0x20;
      if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
        pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
      }
      local_70 = (Node *)BuildFloat64RoundDown(this,*(Node **)pNVar16);
      break;
    }
    goto LAB_016a1cd4;
  case 0x184:
    auVar18 = LowerFloat64RoundTiesEven(this,param_1);
    goto joined_r0x016a1cec;
  case 0x185:
    cVar3 = MachineOperatorBuilder::Float64RoundTruncate
                      (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
    if (cVar3 != '\0') goto LAB_016a1cd4;
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    local_70 = (Node *)BuildFloat64RoundTruncate(this,*(Node **)pNVar16);
    break;
  case 0x186:
    auVar18 = LowerFloat64RoundUp(this,param_1);
joined_r0x016a1cec:
    local_70 = auVar18._8_8_;
    if ((auVar18._0_8_ & 0xff) == 0) {
LAB_016a1cd4:
      uVar14 = 0;
      goto switchD_016a1354_caseD_3d;
    }
  }
  if (*(uint *)(*(long *)param_1 + 0x20) != (uint)(local_70 != (Node *)0x0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Effect control linearizer lowering of \'%s\': value output count does not agree.",
             *(undefined8 *)(*(long *)param_1 + 8));
  }
  NodeProperties::ReplaceUses
            (param_1,local_70,*(Node **)(this + 0x58),*(Node **)(this + 0x60),(Node *)0x0);
  uVar14 = 1;
switchD_016a1354_caseD_3d:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}

