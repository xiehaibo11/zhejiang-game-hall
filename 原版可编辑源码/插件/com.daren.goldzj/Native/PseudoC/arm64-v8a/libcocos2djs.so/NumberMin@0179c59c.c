
/* v8::internal::compiler::OperationTyper::NumberMin(v8::internal::compiler::Type,
   v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::NumberMin(OperationTyper *this,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  long local_48;
  long local_18;
  
  if (param_2 == 1) {
    return 1;
  }
  if (param_3 == 1) {
    return 1;
  }
  if (param_2 == 0x1001) {
    return 0x1001;
  }
  local_48 = param_3;
  local_18 = param_2;
  uVar1 = Type::SlowIs((Type *)&local_18,0x1001);
  if ((uVar1 & 1) != 0) {
    return 0x1001;
  }
  if (param_3 == 0x1001) {
    return 0x1001;
  }
  uVar1 = Type::SlowIs((Type *)&local_48,0x1001);
  if ((uVar1 & 1) != 0) {
    return 0x1001;
  }
  uVar1 = Type::Maybe((Type *)&local_18,0x1001);
  if (((uVar1 & 1) == 0) && (uVar1 = Type::Maybe((Type *)&local_48,0x1001), (uVar1 & 1) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = Type::Union(1,0x1001,*(undefined8 *)this);
  }
  local_18 = Type::Intersect(local_18,0xc5f,*(undefined8 *)this);
  local_48 = Type::Intersect(local_48,0xc5f,*(undefined8 *)this);
  lVar4 = *(long *)(*(long *)(this + 8) + 0x158);
  if (local_18 == lVar4) {
LAB_0179c6c4:
    if ((local_48 == lVar4) || (uVar1 = Type::SlowIs((Type *)&local_48), (uVar1 & 1) != 0)) {
      dVar6 = (double)Type::Max((Type *)&local_18);
      dVar7 = (double)Type::Max((Type *)&local_48);
      if (dVar6 <= dVar7) {
        dVar7 = dVar6;
      }
      dVar8 = (double)Type::Min((Type *)&local_18);
      dVar6 = (double)Type::Min((Type *)&local_48);
      if (dVar8 <= dVar6) {
        dVar6 = dVar8;
      }
      uVar3 = Type::Range(dVar6,dVar7,*(Zone **)this);
      uVar2 = Type::Union(uVar2,uVar3,*(undefined8 *)this);
      if (dVar7 < 0.0) {
        return uVar2;
      }
      if (0.0 < dVar6) {
        return uVar2;
      }
      uVar1 = Type::Maybe((Type *)&local_18,0x801);
      if (((uVar1 & 1) == 0) && (uVar1 = Type::Maybe((Type *)&local_48,0x801), (uVar1 & 1) == 0)) {
        return uVar2;
      }
      uVar5 = *(undefined8 *)this;
      uVar3 = 0x801;
      goto LAB_0179c788;
    }
  }
  else {
    uVar1 = Type::SlowIs((Type *)&local_18);
    if ((uVar1 & 1) != 0) {
      lVar4 = *(long *)(*(long *)(this + 8) + 0x158);
      goto LAB_0179c6c4;
    }
  }
  uVar3 = Type::Union(local_18,local_48,*(undefined8 *)this);
  uVar5 = *(undefined8 *)this;
LAB_0179c788:
  uVar2 = Type::Union(uVar2,uVar3,uVar5);
  return uVar2;
}

