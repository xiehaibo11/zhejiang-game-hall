
/* v8::internal::Object::StrictEquals(v8::internal::Object) */

ulong __thiscall v8::internal::Object::StrictEquals(Object *this,ulong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  ulong local_18;
  
  uVar2 = (uint)(param_2 >> 0x20);
  iVar3 = (int)param_2;
  local_18 = *(ulong *)this;
  iVar1 = (int)local_18;
  if (((local_18 & 1) == 0) ||
     (uVar4 = local_18 & 0xffffffff00000000 | 7, *(short *)(uVar4 + *(uint *)(local_18 - 1)) == 0x42
     )) {
    if (((param_2 & 1) == 0) ||
       (*(short *)(((ulong)uVar2 << 0x20 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0x42)) {
      if ((local_18 & 1) == 0) {
        dVar6 = (double)(iVar1 >> 1);
        if ((param_2 & 1) == 0) goto LAB_01106190;
LAB_01106178:
        dVar7 = *(double *)(param_2 + 3);
      }
      else {
        dVar6 = *(double *)(local_18 + 3);
        if ((param_2 & 1) != 0) goto LAB_01106178;
LAB_01106190:
        dVar7 = (double)(iVar3 >> 1);
      }
      if (!NAN(dVar6)) {
        uVar2 = (uint)(dVar6 == dVar7);
        goto LAB_01106260;
      }
    }
  }
  else if (*(ushort *)(uVar4 + *(uint *)(local_18 - 1)) < 0x40) {
    if (((param_2 & 1) != 0) &&
       (uVar5 = (ulong)uVar2 << 0x20 | 7, *(ushort *)(uVar5 + *(uint *)(param_2 - 1)) < 0x40)) {
      if (iVar3 == iVar1) {
        uVar2 = 1;
        goto LAB_01106260;
      }
      if ((0x1f < *(ushort *)(uVar4 + *(uint *)(local_18 - 1))) ||
         (0x1f < *(ushort *)(uVar5 + *(uint *)(param_2 - 1)))) {
        uVar2 = String::SlowEquals((String *)&local_18);
        goto LAB_01106260;
      }
    }
  }
  else {
    if (*(short *)(uVar4 + *(uint *)(local_18 - 1)) != 0x41) {
      uVar2 = (uint)(iVar1 == iVar3);
      goto LAB_01106260;
    }
    if (((param_2 & 1) != 0) &&
       (*(short *)(((ulong)uVar2 << 0x20 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0x41)) {
      uVar4 = BigInt::EqualToBigInt();
      return uVar4;
    }
  }
  uVar2 = 0;
LAB_01106260:
  return (ulong)(uVar2 & 1);
}

