
/* v8::internal::compiler::Typer::Visitor::JSCompareTyper(v8::internal::compiler::Type,
   v8::internal::compiler::Type, v8::internal::compiler::Typer*) */

undefined4
v8::internal::compiler::Typer::Visitor::JSCompareTyper(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long local_38;
  long local_30;
  long local_28;
  
  lVar3 = 0x8007fff;
  local_38 = param_2;
  local_30 = param_1;
  local_28 = param_1;
  if ((param_1 == 0x8007fff) ||
     (uVar2 = Type::SlowIs((Type *)&local_28,0x8007fff), (uVar2 & 1) != 0)) {
    uVar2 = Type::Maybe((Type *)&local_28,0x47f0001);
    local_30 = lVar3;
    if ((uVar2 & 1) == 0) {
      local_30 = local_28;
    }
  }
  else {
    local_30 = 0x8007fff;
  }
  local_28 = local_38;
  if (((local_38 == 0x8007fff) ||
      (uVar2 = Type::SlowIs((Type *)&local_28,0x8007fff), (uVar2 & 1) != 0)) &&
     (uVar2 = Type::Maybe((Type *)&local_28,0x47f0001), (uVar2 & 1) == 0)) {
    lVar3 = local_28;
  }
  local_38 = lVar3;
  uVar2 = Type::Maybe((Type *)&local_30,0x4021);
  if (((uVar2 & 1) == 0) || (uVar2 = Type::Maybe((Type *)&local_38,0x4021), (uVar2 & 1) == 0)) {
    local_30 = OperationTyper::ToNumeric((OperationTyper *)(param_3 + 0x28),local_30);
    local_38 = OperationTyper::ToNumeric((OperationTyper *)(param_3 + 0x28),local_38);
    if (((local_30 == 0x1c5f) || (uVar2 = Type::SlowIs((Type *)&local_30,0x1c5f), (uVar2 & 1) != 0))
       && ((lVar3 = 0x1c5f, local_38 == 0x1c5f ||
           (uVar2 = Type::SlowIs((Type *)&local_38,0x1c5f), lVar3 = local_38, (uVar2 & 1) != 0)))) {
      uVar1 = NumberCompareTyper(local_30,lVar3);
    }
    else {
      uVar1 = 7;
    }
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}

