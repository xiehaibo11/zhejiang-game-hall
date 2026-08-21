
/* v8::internal::compiler::TypedOptimization::Reduce(v8::internal::compiler::Node*) */

long __thiscall
v8::internal::compiler::TypedOptimization::Reduce(TypedOptimization *this,Node *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_18;
  
  lVar3 = 0;
  switch(*(undefined2 *)(*(long *)param_1 + 0x10)) {
  case 0x22:
    lVar3 = ReduceSelect(this,param_1);
    return lVar3;
  case 0x23:
    lVar3 = ReducePhi(this,param_1);
    return lVar3;
  default:
    goto switchD_012fc2f8_caseD_24;
  case 0x72:
  case 0x73:
  case 0x74:
    lVar3 = ReduceSpeculativeNumberComparison(this,param_1);
    return lVar3;
  case 0x75:
    lVar3 = ReduceReferenceEqual(this,param_1);
    return lVar3;
  case 0x76:
    lVar3 = ReduceSameValue(this,param_1);
    return lVar3;
  case 0x79:
  case 0x7a:
  case 0x7b:
    lVar3 = ReduceStringComparison(this,param_1);
    return lVar3;
  case 0x8e:
    lVar3 = ReduceSpeculativeNumberAdd(this,param_1);
    return lVar3;
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
    lVar3 = ReduceSpeculativeNumberBinop(this,param_1);
    return lVar3;
  case 0xa3:
  case 0xaf:
  case 0xb6:
    lVar3 = NodeProperties::GetValueInput(param_1,0);
    local_18 = *(long *)(lVar3 + 8);
    if (local_18 == *(long *)(*(long *)(this + 0x38) + 0x160)) {
      return lVar3;
    }
    break;
  case 0xa9:
    lVar3 = ReduceNumberFloor(this,param_1);
    return lVar3;
  case 0xbb:
    lVar3 = NodeProperties::GetValueInput(param_1,0);
    local_18 = *(long *)(lVar3 + 8);
    if (local_18 == *(long *)(*(long *)(this + 0x38) + 0x60)) {
      return lVar3;
    }
    break;
  case 0xbc:
    lVar3 = NodeProperties::GetValueInput(param_1,0);
    local_18 = *(long *)(lVar3 + 8);
    if (local_18 == 0xc5f) {
      return lVar3;
    }
    uVar2 = Type::SlowIs((Type *)&local_18,0xc5f);
    goto joined_r0x012fc3b8;
  case 0xc0:
  case 0xd7:
    lVar3 = NodeProperties::GetValueInput(param_1,0);
    local_18 = *(long *)(lVar3 + 8);
    if (local_18 == 0x1c5f) goto LAB_012fc5bc;
    uVar2 = Type::SlowIs((Type *)&local_18,0x1c5f);
    goto joined_r0x012fc554;
  case 0xd0:
    lVar3 = ReduceStringLength(this,param_1);
    return lVar3;
  case 0xd6:
    lVar3 = ReduceCheckMaps(this,param_1);
    return lVar3;
  case 0xdb:
    lVar3 = NodeProperties::GetValueInput(param_1,0);
    local_18 = *(long *)(lVar3 + 8);
    if (local_18 == 0x4021) goto LAB_012fc5bc;
    uVar2 = Type::SlowIs((Type *)&local_18,0x4021);
joined_r0x012fc554:
    if ((uVar2 & 1) != 0) {
LAB_012fc5bc:
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,lVar3,0,0);
      return lVar3;
    }
    goto LAB_012fc588;
  case 0xde:
    lVar3 = NodeProperties::GetValueInput(param_1,0);
    local_18 = *(long *)(lVar3 + 8);
    uVar1 = BitsetType::SignedSmall();
    uVar2 = Type::Maybe((Type *)&local_18,uVar1 | 1);
    goto joined_r0x012fc5b8;
  case 0xe0:
    lVar3 = NodeProperties::GetValueInput(param_1,0);
    local_18 = *(long *)(lVar3 + 8);
    uVar2 = Type::Maybe((Type *)&local_18,0x800001);
joined_r0x012fc5b8:
    if ((uVar2 & 1) == 0) goto LAB_012fc5bc;
    goto LAB_012fc588;
  case 0xe1:
  case 0xe2:
    lVar3 = NodeProperties::GetValueInput(param_1,0);
    lVar5 = *(long *)(lVar3 + 8);
    lVar3 = NodeProperties::GetValueInput(param_1,1);
    lVar4 = *(long *)(lVar3 + 8);
    local_18 = lVar4;
    lVar3 = NodeProperties::GetEffectInput(param_1,0);
    if (lVar4 == lVar5) {
      return lVar3;
    }
    uVar2 = Type::SlowIs((Type *)&local_18,lVar5);
joined_r0x012fc3b8:
    if ((uVar2 & 1) != 0) {
      return lVar3;
    }
    goto LAB_012fc588;
  case 0xe4:
    lVar3 = ReduceConvertReceiver(this,param_1);
    return lVar3;
  case 0xe6:
    lVar3 = ReduceTypeOf(this,param_1);
    return lVar3;
  case 0xea:
    lVar3 = ReduceLoadField(this,param_1);
    return lVar3;
  case 0xfb:
    lVar3 = ReduceToBoolean(this,param_1);
    return lVar3;
  }
  uVar2 = Type::SlowIs((Type *)&local_18);
  if ((uVar2 & 1) == 0) {
LAB_012fc588:
    lVar3 = 0;
  }
switchD_012fc2f8_caseD_24:
  return lVar3;
}

