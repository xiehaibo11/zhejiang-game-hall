
/* v8::internal::BigInt::EqualToNumber(v8::internal::Handle<v8::internal::BigInt>,
   v8::internal::Handle<v8::internal::Object>) */

bool v8::internal::BigInt::EqualToNumber(long *param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = *param_2;
  if ((uVar5 & 1) == 0) {
    lVar7 = *param_1;
    iVar4 = (int)uVar5 >> 1;
    uVar1 = *(uint *)(lVar7 + 3) & 0x7ffffffe;
    if (iVar4 == 0) {
      bVar3 = uVar1 == 0;
    }
    else {
      if ((uVar1 != 2) || ((*(uint *)(lVar7 + 3) & 1) != -((int)uVar5 >> 0x1f))) {
        return false;
      }
      lVar6 = (long)iVar4;
      lVar2 = -lVar6;
      if (-1 < lVar6) {
        lVar2 = lVar6;
      }
      bVar3 = *(long *)(lVar7 + 7) == lVar2;
    }
  }
  else {
    iVar4 = CompareToDouble(*(undefined8 *)(uVar5 + 3));
    bVar3 = iVar4 == 1;
  }
  return bVar3;
}

