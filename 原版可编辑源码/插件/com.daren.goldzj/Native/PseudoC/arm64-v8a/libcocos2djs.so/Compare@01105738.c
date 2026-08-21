
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::Object::Compare(v8::internal::Isolate*, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>) */

ulong v8::internal::Object::Compare(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  
  uVar4 = *param_2;
  if (((uVar4 & 1) != 0) &&
     (0x43 < *(ushort *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1)) + 7))) {
    param_2 = (ulong *)JSReceiver::ToPrimitive(param_2,1);
  }
  if (param_2 == (ulong *)0x0) {
    return 0;
  }
  uVar4 = *param_3;
  if (((uVar4 & 1) != 0) &&
     (0x43 < *(ushort *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1)) + 7))) {
    param_3 = (ulong *)JSReceiver::ToPrimitive(param_3,1);
  }
  if (param_3 == (ulong *)0x0) {
    return 0;
  }
  uVar4 = *param_2;
  if ((uVar4 & 1) == 0) {
LAB_011058e4:
    uVar4 = *param_3;
    if ((((uVar4 & 1) != 0) &&
        (uVar5 = uVar4 & 0xffffffff00000000 | 7, *(short *)(uVar5 + *(uint *)(uVar4 - 1)) != 0x42))
       && ((*(short *)(uVar5 + *(uint *)(uVar4 - 1)) != 0x41 &&
           (param_3 = (ulong *)ConvertToNumberOrNumeric(param_1,param_3,1), param_3 == (ulong *)0x0)
           ))) {
      return 0;
    }
    uVar4 = *param_2;
    if ((uVar4 & 1) == 0) {
      bVar2 = true;
      uVar5 = *param_3;
      if ((uVar5 & 1) != 0) goto LAB_01105940;
LAB_0110597c:
      bVar1 = true;
    }
    else {
      bVar2 = *(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x42;
      uVar5 = *param_3;
      if ((uVar5 & 1) == 0) goto LAB_0110597c;
LAB_01105940:
      bVar1 = *(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x42;
    }
    if ((bool)(bVar2 & bVar1)) {
      if ((uVar4 & 1) == 0) {
        dVar7 = (double)((int)uVar4 >> 1);
      }
      else {
        dVar7 = *(double *)(uVar4 + 3);
      }
      if ((uVar5 & 1) == 0) {
        dVar8 = (double)((int)uVar5 >> 1);
        if (NAN(dVar7) || NAN(dVar8)) {
          return 0x300000001;
        }
      }
      else {
        dVar8 = *(double *)(uVar5 + 3);
        if (NAN(dVar7) || NAN(dVar8)) {
          return 0x300000001;
        }
      }
      if (dVar8 <= dVar7) {
        if (dVar8 < dVar7) {
          return 0x200000001;
        }
        return 0x100000001;
      }
      return 1;
    }
    if (!(bool)(bVar2 | bVar1)) {
      uVar3 = BigInt::CompareToBigInt(param_2,param_3);
      goto LAB_01105a3c;
    }
    if (!bVar2) {
      uVar3 = BigInt::CompareToNumber(param_2,param_3);
      goto LAB_01105a3c;
    }
    uVar3 = BigInt::CompareToNumber(param_3,param_2);
  }
  else {
    uVar5 = uVar4 & 0xffffffff00000000 | 7;
    if (((*(ushort *)(uVar5 + *(uint *)(uVar4 - 1)) < 0x40) && (uVar6 = *param_3, (uVar6 & 1) != 0))
       && (*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0x40)) {
      uVar3 = String::Compare(param_1,param_2,param_3);
      goto LAB_01105a3c;
    }
    if (((*(short *)(uVar5 + *(uint *)(uVar4 - 1)) == 0x41) && (uVar6 = *param_3, (uVar6 & 1) != 0))
       && (*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0x40)) {
      uVar3 = BigInt::CompareToString(param_1,param_2,param_3);
      goto LAB_01105a3c;
    }
    if (((0x3f < *(ushort *)(uVar5 + *(uint *)(uVar4 - 1))) || (uVar6 = *param_3, (uVar6 & 1) == 0))
       || (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x41)) {
      if (((*(short *)(uVar5 + *(uint *)(uVar4 - 1)) != 0x42) &&
          (*(short *)(uVar5 + *(uint *)(uVar4 - 1)) != 0x41)) &&
         (param_2 = (ulong *)ConvertToNumberOrNumeric(param_1,param_2,1), param_2 == (ulong *)0x0))
      {
        return 0;
      }
      goto LAB_011058e4;
    }
    uVar3 = BigInt::CompareToString(param_1,param_3,param_2);
  }
  if (uVar3 == 0) {
    return 0x200000001;
  }
  if (uVar3 == 2) {
    return 1;
  }
LAB_01105a3c:
  return (ulong)uVar3 << 0x20 | 1;
}

