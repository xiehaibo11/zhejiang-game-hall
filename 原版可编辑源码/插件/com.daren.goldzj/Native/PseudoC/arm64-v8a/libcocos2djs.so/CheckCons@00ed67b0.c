
/* v8::ContainsOnlyOneByteHelper::CheckCons(v8::internal::ConsString) */

undefined8 __thiscall
v8::ContainsOnlyOneByteHelper::CheckCons(ContainsOnlyOneByteHelper *this,ulong param_2)

{
  ulong uVar1;
  ContainsOnlyOneByteHelper CVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_2 & 0xffffffff00000000;
  uVar5 = uVar6 | *(uint *)(param_2 + 0xb);
  uVar3 = internal::String::VisitFlat<v8::ContainsOnlyOneByteHelper>(this,uVar5,0);
  CVar2 = *this;
  while( true ) {
    uVar4 = uVar3;
    if (CVar2 == (ContainsOnlyOneByteHelper)0x0) {
      return 0;
    }
    uVar6 = uVar6 | *(uint *)(param_2 + 0xf);
    uVar3 = internal::String::VisitFlat<v8::ContainsOnlyOneByteHelper>(this,uVar6,0);
    if (*this == (ContainsOnlyOneByteHelper)0x0) break;
    if ((int)uVar4 == 0) {
      uVar4 = uVar3;
      if ((int)uVar3 == 0) {
        return 1;
      }
    }
    else if ((int)uVar3 != 0) {
      uVar1 = uVar3;
      if (*(int *)(uVar6 + 7) <= *(int *)(uVar5 + 7)) {
        uVar1 = uVar4;
        uVar4 = uVar3;
      }
      CheckCons(this,uVar4);
      uVar4 = uVar1;
      if (*this == (ContainsOnlyOneByteHelper)0x0) {
        return 0;
      }
    }
    uVar6 = uVar4 & 0xffffffff00000000;
    uVar5 = uVar6 | *(uint *)(uVar4 + 0xb);
    uVar3 = internal::String::VisitFlat<v8::ContainsOnlyOneByteHelper>(this,uVar5,0);
    CVar2 = *this;
    param_2 = uVar4;
  }
  return 0;
}

