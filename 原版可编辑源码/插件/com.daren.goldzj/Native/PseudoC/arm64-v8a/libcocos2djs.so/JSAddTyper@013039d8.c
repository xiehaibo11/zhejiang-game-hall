
/* v8::internal::compiler::Typer::Visitor::JSAddTyper(v8::internal::compiler::Type,
   v8::internal::compiler::Type, v8::internal::compiler::Typer*) */

undefined8
v8::internal::compiler::Typer::Visitor::JSAddTyper(long param_1,long param_2,long param_3)

{
  OperationTyper *pOVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long local_48;
  long local_40;
  long local_38;
  long local_18;
  
  lVar7 = 0x8007fff;
  local_48 = param_2;
  local_40 = param_1;
  local_18 = param_1;
  if ((param_1 == 0x8007fff) ||
     (uVar4 = Type::SlowIs((Type *)&local_18,0x8007fff), (uVar4 & 1) != 0)) {
    uVar4 = Type::Maybe((Type *)&local_18,0x47f0001);
    local_40 = lVar7;
    if ((uVar4 & 1) == 0) {
      local_40 = local_18;
    }
  }
  else {
    local_40 = 0x8007fff;
  }
  local_18 = local_48;
  if (((local_48 == 0x8007fff) ||
      (uVar4 = Type::SlowIs((Type *)&local_18,0x8007fff), (uVar4 & 1) != 0)) &&
     (uVar4 = Type::Maybe((Type *)&local_18,0x47f0001), (uVar4 & 1) == 0)) {
    lVar7 = local_18;
  }
  local_48 = lVar7;
  uVar4 = Type::Maybe((Type *)&local_40,0x4021);
  if (((uVar4 & 1) == 0) &&
     (uVar4 = Type::Maybe((Type *)&local_48,0x4021), lVar7 = local_48, (uVar4 & 1) == 0)) {
    pOVar1 = (OperationTyper *)(param_3 + 0x28);
    lVar5 = OperationTyper::ToNumeric(pOVar1,local_40);
    local_18 = lVar5;
    local_38 = OperationTyper::ToNumeric(pOVar1,lVar7);
    if (lVar5 == 0x1c5f) {
      uVar2 = 1;
    }
    else {
      uVar2 = Type::SlowIs((Type *)&local_18,0x1c5f);
    }
    if (((local_38 == 0x1c5f) ||
        (uVar3 = Type::SlowIs((Type *)&local_38,0x1c5f), ((uVar3 ^ 1) & 1) == 0)) &&
       (((uVar2 ^ 1) & 1) == 0)) {
      uVar6 = OperationTyper::NumberAdd(pOVar1,local_18,local_38);
    }
    else if ((uVar2 & 1) == 0) {
      uVar6 = 0x8000001;
      if (local_18 != 0x8000001) {
        uVar4 = Type::SlowIs((Type *)&local_18,0x8000001);
        if ((uVar4 & 1) == 0) {
          uVar6 = 0x8001c5f;
        }
      }
    }
    else {
      uVar6 = 0x1c5f;
    }
  }
  else {
    uVar6 = 0x4021;
    if (local_40 != 0x4021) {
      uVar4 = Type::SlowIs((Type *)&local_40,0x4021);
      uVar6 = 0x4021;
      if (((uVar4 & 1) == 0) && (local_48 != 0x4021)) {
        uVar4 = Type::SlowIs((Type *)&local_48,0x4021);
        uVar6 = 0x4021;
        if ((uVar4 & 1) == 0) {
          uVar6 = 0x8005c7f;
        }
      }
    }
  }
  return uVar6;
}

