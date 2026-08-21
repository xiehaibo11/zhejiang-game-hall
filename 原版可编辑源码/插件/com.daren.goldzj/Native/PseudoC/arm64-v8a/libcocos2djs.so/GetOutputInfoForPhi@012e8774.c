
/* v8::internal::compiler::RepresentationSelector::GetOutputInfoForPhi(v8::internal::compiler::Node*,
   v8::internal::compiler::Type, v8::internal::compiler::Truncation) */

undefined8 __thiscall
v8::internal::compiler::RepresentationSelector::GetOutputInfoForPhi
          (RepresentationSelector *this,undefined8 param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long local_18;
  
  if ((param_3 == 1) ||
     (local_18 = param_3, uVar2 = Type::SlowIs((Type *)&local_18,1), (uVar2 & 1) != 0)) {
    return 0;
  }
  if (local_18 != 1099) {
    uVar2 = Type::SlowIs((Type *)&local_18,1099);
    if ((uVar2 & 1) != 0) {
      return 4;
    }
    if (local_18 == 0x407) {
      return 4;
    }
    uVar2 = Type::SlowIs((Type *)&local_18,0x407);
    if (((uVar2 & 1) == 0) &&
       (((local_18 != 0x801fdf &&
         (uVar2 = Type::SlowIs((Type *)&local_18,0x801fdf), (uVar2 & 1) == 0)) ||
        (uVar2 = Truncation::LessGeneral(param_4,2), (uVar2 & 1) == 0)))) {
      if ((local_18 == 0x201) || (uVar2 = Type::SlowIs((Type *)&local_18,0x201), (uVar2 & 1) != 0))
      {
        return 1;
      }
      if (((local_18 == 0x801fdf) ||
          (uVar2 = Type::SlowIs((Type *)&local_18,0x801fdf), (uVar2 & 1) != 0)) &&
         (uVar2 = Truncation::LessGeneral(param_4,4), (uVar2 & 1) != 0)) {
        return 0xc;
      }
      uVar1 = BitsetType::SignedSmall();
      lVar3 = Type::Union(uVar1 | 1,0x1001,*(undefined8 *)(this + 8));
      if ((local_18 != lVar3) && (uVar2 = Type::SlowIs((Type *)&local_18,lVar3), (uVar2 & 1) == 0))
      {
        if (local_18 == 0x1c5f) {
          return 0xc;
        }
        uVar2 = Type::SlowIs((Type *)&local_18,0x1c5f);
        if ((uVar2 & 1) != 0) {
          return 0xc;
        }
        if ((((local_18 == 0x8000001) ||
             (uVar2 = Type::SlowIs((Type *)&local_18,0x8000001), (uVar2 & 1) != 0)) &&
            (uVar2 = Truncation::LessGeneral(param_4,3), (uVar2 & 1) != 0)) ||
           ((local_18 == 0x2000001 ||
            (uVar2 = Type::SlowIs((Type *)&local_18,0x2000001), (uVar2 & 1) != 0)))) {
          return 5;
        }
      }
      return 8;
    }
  }
  return 4;
}

