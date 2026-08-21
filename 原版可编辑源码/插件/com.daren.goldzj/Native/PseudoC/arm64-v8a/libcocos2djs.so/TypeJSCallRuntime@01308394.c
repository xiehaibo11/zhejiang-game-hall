
/* v8::internal::compiler::Typer::Visitor::TypeJSCallRuntime(v8::internal::compiler::Node*) */

ulong __thiscall
v8::internal::compiler::Typer::Visitor::TypeJSCallRuntime(Visitor *this,Node *param_1)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  ulong local_30;
  ulong local_28;
  
  piVar2 = (int *)CallRuntimeParametersOf(*(Operator **)param_1);
  uVar3 = 0x201;
  switch(*piVar2) {
  case 0x1db:
  case 0x1f7:
    goto switchD_013083e0_caseD_1db;
  case 0x1dc:
  case 0x1dd:
  case 0x1de:
  case 0x1df:
  case 0x1e0:
  case 0x1e1:
  case 0x1e2:
  case 0x1e3:
  case 0x1e4:
  case 0x1e5:
  case 0x1e6:
  case 0x1e7:
  case 0x1e8:
  case 0x1e9:
  case 0x1ea:
  case 0x1eb:
  case 0x1ec:
  case 0x1ee:
  case 0x1ef:
  case 0x1f1:
    return 0xffffffff;
  case 0x1ed:
    lVar4 = NodeProperties::GetValueInput(param_1,0);
    local_28 = *(ulong *)(lVar4 + 8);
    if (1 < local_28) {
      lVar4 = *(long *)(this + 8);
      uVar1 = BitsetType::SignedSmall();
      uVar3 = Type::Maybe((Type *)&local_28,uVar1 | 1);
      if ((uVar3 & 1) == 0) {
        return *(ulong *)(lVar4 + 0xa0);
      }
      return 0x201;
    }
    break;
  case 0x1f0:
    return 0x20001;
  case 0x1f2:
    lVar4 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar4 + 8)) {
      uVar3 = ObjectIsReceiver(*(ulong *)(lVar4 + 8),*(undefined8 *)(this + 8));
      return uVar3;
    }
    break;
  case 499:
    lVar4 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar4 + 8)) {
      uVar3 = ToLength(*(ulong *)(lVar4 + 8),*(undefined8 *)(this + 8));
      return uVar3;
    }
    break;
  case 500:
    lVar4 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar4 + 8)) {
      uVar3 = OperationTyper::ToNumber((OperationTyper *)(*(long *)(this + 8) + 0x28));
      return uVar3;
    }
    break;
  case 0x1f5:
    lVar4 = NodeProperties::GetValueInput(param_1,0);
    if (1 < *(ulong *)(lVar4 + 8)) {
      uVar3 = ToObject(*(ulong *)(lVar4 + 8),*(undefined8 *)(this + 8));
      return uVar3;
    }
    break;
  case 0x1f6:
    lVar4 = NodeProperties::GetValueInput(param_1,0);
    local_30 = *(ulong *)(lVar4 + 8);
    if (1 < local_30) {
      local_28 = local_30;
      if (((local_30 == 0x8007fff) ||
          (uVar3 = Type::SlowIs((Type *)&local_28,0x8007fff), (uVar3 & 1) != 0)) &&
         (uVar3 = Type::Maybe((Type *)&local_28,0x47f0001), (uVar3 & 1) == 0)) {
        local_30 = local_28;
        if (local_28 == 0x4021) {
          return 0x4021;
        }
      }
      else {
        local_30 = 0x8007fff;
      }
      uVar3 = Type::SlowIs((Type *)&local_30,0x4021);
      if ((uVar3 & 1) == 0) {
        return 0x4021;
      }
      return local_30;
    }
    break;
  default:
    if (*piVar2 != 0xe4) {
      return 0xffffffff;
    }
    return 0x201;
  }
  uVar3 = 1;
switchD_013083e0_caseD_1db:
  return uVar3;
}

