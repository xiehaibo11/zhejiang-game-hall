
undefined4 FUN_015023a4(ulong *param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_28;
  
  local_28 = *param_1;
  uVar5 = local_28 & 0xffffffff00000000;
  if ((local_28 & 1) == 0) {
    bVar1 = false;
  }
  else {
    uVar4 = uVar5 | 7;
    if (*(short *)(uVar4 + *(uint *)(local_28 - 1)) == 0x423) {
      uVar2 = *(uint *)(local_28 + 0xb);
      if ((uVar2 & 1) == 0) {
        uVar4 = (ulong)(double)((int)uVar2 >> 1);
      }
      else {
        uVar4 = (ulong)*(double *)((uVar5 | uVar2) + 3);
      }
    }
    else if (*(short *)(uVar4 + *(uint *)(local_28 - 1)) == 0x41b) {
      uVar4 = *(ulong *)(local_28 + 0x1f);
    }
    else if (*(ushort *)(uVar4 + *(uint *)(local_28 - 1)) < 0xaa) {
      if (0x3f < *(ushort *)(uVar4 + *(uint *)(local_28 - 1))) {
        bVar1 = false;
        goto LAB_01502464;
      }
      uVar4 = (ulong)*(int *)(local_28 + 7);
    }
    else {
      uVar4 = (long)((ulong)*(uint *)((uVar5 | *(uint *)(local_28 + 7)) + 3) << 0x20) >> 0x21;
    }
    bVar1 = uVar4 <= param_2;
  }
LAB_01502464:
  if ((((param_2 < 0xffffffff) && (bVar1)) &&
      (*(short *)((uVar5 | 7) + (ulong)*(uint *)(local_28 - 1)) == 0x423)) &&
     (uVar5 = v8::internal::JSObject::WouldConvertToSlowElements
                        ((JSObject *)&local_28,(uint)param_2), (uVar5 & 1) == 0)) {
    uVar3 = 1;
  }
  else {
    uVar5 = *param_1;
    if ((bool)(bVar1 & (byte)((*(byte *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1))
                                        + 10) >> 3) - 0x11) < 0xb)) {
      uVar3 = 2;
    }
    else {
      local_28 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 7);
      uVar5 = v8::internal::FixedArrayBase::IsCowArray((FixedArrayBase *)&local_28);
      uVar3 = 3;
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

