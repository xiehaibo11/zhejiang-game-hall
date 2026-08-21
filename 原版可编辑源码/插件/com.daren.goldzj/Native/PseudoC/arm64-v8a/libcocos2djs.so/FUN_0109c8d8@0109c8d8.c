
undefined8
FUN_0109c8d8(undefined8 param_1,long param_2,ulong *param_3,ulong *param_4,ulong param_5,
            ulong param_6)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  ulong local_38;
  
  local_38 = *param_4;
  if (param_6 <= param_5) {
    return 1;
  }
  uVar8 = *(uint *)((*param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7)) + 3);
  uVar3 = (uint)local_38;
  uVar5 = (uint)*(undefined8 *)(param_2 + 0xa0);
  uVar6 = (long)((ulong)uVar8 << 0x20) >> 0x21;
  if ((uVar3 == uVar5) && (uVar6 < param_6)) {
    return 0x101;
  }
  if ((int)uVar8 >> 1 == 0) {
    return 1;
  }
  if (uVar6 <= param_6) {
    param_6 = uVar6;
  }
  iVar4 = (int)param_5;
  if ((local_38 & 1) == 0) {
    dVar9 = (double)((int)uVar3 >> 1);
  }
  else {
    uVar6 = local_38 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar6 + *(uint *)(local_38 - 1)) != 0x42) {
      uVar7 = *param_3 & 0xffffffff00000000;
      uVar6 = uVar7 | *(uint *)(*param_3 + 7);
      uVar8 = (uint)*(undefined8 *)(param_2 + 0xa8);
      if (uVar3 == uVar5) {
        if (param_6 <= param_5) {
          return 1;
        }
        iVar4 = iVar4 << 2;
        while( true ) {
          uVar5 = *(uint *)(uVar6 + 7 + (long)iVar4);
          if (uVar5 == uVar8) {
            return 0x101;
          }
          if (uVar5 == uVar3) break;
          param_5 = param_5 + 1;
          iVar4 = iVar4 + 4;
          if (param_6 <= param_5) {
            return 1;
          }
        }
        return 0x101;
      }
      if (param_6 <= param_5) {
        return 1;
      }
      iVar4 = iVar4 << 2;
      while ((uVar3 = *(uint *)(uVar6 + 7 + (long)iVar4), uVar3 == uVar8 ||
             (uVar2 = v8::internal::Object::SameValueZero((Object *)&local_38,uVar7 | uVar3),
             (uVar2 & 1) == 0))) {
        param_5 = param_5 + 1;
        iVar4 = iVar4 + 4;
        if (param_6 <= param_5) {
          return 1;
        }
      }
      return 0x101;
    }
    dVar9 = *(double *)(local_38 + 3);
    if ((*(short *)(uVar6 + *(uint *)(local_38 - 1)) == 0x42) && (NAN(dVar9))) {
      if (param_6 <= param_5) {
        return 1;
      }
      iVar4 = iVar4 << 2;
      uVar6 = *param_3 & 0xffffffff00000000;
      lVar1 = (uVar6 | *(uint *)(*param_3 + 7)) + 7;
      uVar8 = *(uint *)(lVar1 + iVar4);
      while ((((uVar8 & 1) == 0 ||
              (*(short *)((uVar6 | 7) + (ulong)*(uint *)((uVar6 | uVar8) - 1)) != 0x42)) ||
             (!NAN(*(double *)((uVar6 | uVar8) + 3))))) {
        param_5 = param_5 + 1;
        iVar4 = iVar4 + 4;
        if (param_6 <= param_5) {
          return 1;
        }
        uVar8 = *(uint *)(lVar1 + iVar4);
      }
      return 0x101;
    }
  }
  if (param_6 <= param_5) {
    return 1;
  }
  iVar4 = iVar4 << 2;
  uVar6 = *param_3 & 0xffffffff00000000;
  lVar1 = (uVar6 | *(uint *)(*param_3 + 7)) + 7;
  uVar8 = *(uint *)(lVar1 + iVar4);
  uVar7 = (ulong)uVar8;
  if ((uVar8 & 1) != 0) goto LAB_0109c9a8;
LAB_0109c980:
  dVar10 = (double)((int)uVar7 >> 1);
  do {
    if (dVar10 == dVar9) {
      return 0x101;
    }
    do {
      param_5 = param_5 + 1;
      iVar4 = iVar4 + 4;
      if (param_6 <= param_5) {
        return 1;
      }
      uVar8 = *(uint *)(lVar1 + iVar4);
      uVar7 = (ulong)uVar8;
      if ((uVar8 & 1) == 0) goto LAB_0109c980;
LAB_0109c9a8:
    } while (*(short *)((uVar6 | 7) + (ulong)*(uint *)((uVar6 | uVar7) - 1)) != 0x42);
    dVar10 = *(double *)((uVar6 | uVar7) + 3);
  } while( true );
}

