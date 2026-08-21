
/* v8::internal::Object::SameValue(v8::internal::Object) */

ulong __thiscall v8::internal::Object::SameValue(Object *this,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  ulong local_18;
  
  uVar2 = (uint)(param_2 >> 0x20);
  local_18 = *(ulong *)this;
  if ((int)param_2 == (int)local_18) {
    uVar2 = 1;
    goto LAB_01107f04;
  }
  if (((local_18 & 1) == 0) ||
     (uVar3 = local_18 & 0xffffffff00000000 | 7, *(short *)(uVar3 + *(uint *)(local_18 - 1)) == 0x42
     )) {
    if (((param_2 & 1) == 0) ||
       (*(short *)(((ulong)uVar2 << 0x20 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0x42)) {
      if ((local_18 & 1) == 0) {
        dVar6 = (double)((int)local_18 >> 1);
        if ((param_2 & 1) == 0) goto LAB_01107e18;
LAB_01107dec:
        dVar7 = *(double *)(param_2 + 3);
        if (dVar6 != dVar7) goto LAB_01107e28;
      }
      else {
        dVar6 = *(double *)(local_18 + 3);
        if ((param_2 & 1) != 0) goto LAB_01107dec;
LAB_01107e18:
        dVar7 = (double)((int)param_2 >> 1);
        if (dVar6 != dVar7) {
LAB_01107e28:
          if (NAN(dVar6)) {
            uVar2 = (uint)NAN(dVar7);
            goto LAB_01107f04;
          }
          goto LAB_01107f00;
        }
      }
      uVar2 = ((uint)((ulong)dVar7 >> 0x20) ^ (uint)((ulong)dVar6 >> 0x20)) >> 0x1f ^ 1;
      goto LAB_01107f04;
    }
    if ((local_18 & 1) != 0) {
      bVar1 = false;
      uVar3 = local_18 & 0xffffffff00000000 | 7;
      uVar4 = *(uint *)(local_18 - 1);
      goto LAB_01107e70;
    }
  }
  else {
    bVar1 = (param_2 & 1) == 0;
    uVar4 = *(uint *)(local_18 - 1);
    if (!bVar1) {
LAB_01107e70:
      if ((*(ushort *)(uVar3 + uVar4) < 0x40) &&
         (uVar5 = (ulong)uVar2 << 0x20 | 7, *(ushort *)(uVar5 + *(uint *)(param_2 - 1)) < 0x40)) {
        if ((0x1f < *(ushort *)(uVar3 + *(uint *)(local_18 - 1))) ||
           (0x1f < *(ushort *)(uVar5 + *(uint *)(param_2 - 1)))) {
          uVar2 = String::SlowEquals((String *)&local_18);
          goto LAB_01107f04;
        }
        goto LAB_01107f00;
      }
    }
    if ((!bVar1 && *(short *)(uVar3 + *(uint *)(local_18 - 1)) == 0x41) &&
       (*(short *)(((ulong)uVar2 << 0x20 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0x41)) {
      uVar3 = BigInt::EqualToBigInt();
      return uVar3;
    }
  }
LAB_01107f00:
  uVar2 = 0;
LAB_01107f04:
  return (ulong)(uVar2 & 1);
}

