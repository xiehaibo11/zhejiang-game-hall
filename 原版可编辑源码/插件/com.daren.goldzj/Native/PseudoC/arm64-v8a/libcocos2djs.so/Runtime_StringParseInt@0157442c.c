
/* v8::internal::Runtime_StringParseInt(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_StringParseInt(int param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  double dVar11;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar6 = FUN_0157466c(param_1,param_2,param_3);
    return uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar4 = param_2 + -1;
  uVar8 = *param_2;
  if (((uVar8 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
    param_2 = (ulong *)Object::ConvertToString(param_3);
  }
  if (param_2 == (ulong *)0x0) {
LAB_0157450c:
    pIVar5 = param_3 + 0x180;
    goto LAB_01574610;
  }
  uVar3 = String::Flatten(param_3,param_2,0);
  uVar8 = *puVar4;
  if (((uVar8 & 1) != 0) &&
     (uVar10 = uVar8 & 0xffffffff00000000 | 7, *(short *)(uVar10 + *(uint *)(uVar8 - 1)) != 0x42)) {
    if (*(short *)(uVar10 + *(uint *)(uVar8 - 1)) != 0x42) {
      puVar4 = (ulong *)Object::ConvertToNumberOrNumeric(param_3,puVar4,0);
    }
    if (puVar4 == (ulong *)0x0) goto LAB_0157450c;
    uVar8 = *puVar4;
  }
  if ((uVar8 & 1) == 0) {
    dVar11 = (double)((int)uVar8 >> 1);
  }
  else {
    dVar11 = *(double *)(uVar8 + 3);
  }
  if ((((dVar11 < -2147483648.0) || (2147483647.0 < dVar11)) || (ABS(dVar11) == INFINITY)) ||
     ((NAN(ABS(dVar11)) || (iVar7 = (int)dVar11, dVar11 != (double)(int)dVar11)))) {
    uVar1 = 0xfffffbce;
    if (((ulong)dVar11 & 0x7ff0000000000000) != 0) {
      uVar1 = ((uint)((ulong)dVar11 >> 0x34) & 0x7ff) - 0x433;
    }
    if ((int)uVar1 < 0) {
      if (-0x35 < (int)uVar1) {
        uVar8 = (ulong)dVar11 & 0xfffffffffffff;
        if (((ulong)dVar11 & 0x7ff0000000000000) != 0) {
          uVar8 = (ulong)dVar11 & 0xfffffffffffff | 0x10000000000000;
        }
        iVar9 = (int)(uVar8 >> ((ulong)-uVar1 & 0x3f));
        goto LAB_015745dc;
      }
    }
    else if ((int)uVar1 < 0x20) {
      uVar8 = (ulong)dVar11 & 0xfffffffffffff;
      if (((ulong)dVar11 & 0x7ff0000000000000) != 0) {
        uVar8 = (ulong)dVar11 & 0xfffffffffffff | 0x10000000000000;
      }
      iVar9 = (int)(uVar8 << ((ulong)uVar1 & 0x3f));
LAB_015745dc:
      iVar7 = -iVar9;
      if (-1 < (long)dVar11) {
        iVar7 = iVar9;
      }
      goto LAB_015745e4;
    }
    iVar7 = 0;
  }
  else {
LAB_015745e4:
    if ((iVar7 != 0) && (0x22 < iVar7 - 2U)) {
      pIVar5 = param_3 + 0x430;
      goto LAB_01574610;
    }
  }
  dVar11 = (double)StringToInt(param_3,uVar3,iVar7);
  pIVar5 = (Isolate *)Factory::NewNumber<(v8::internal::AllocationType)0>((Factory *)param_3,dVar11)
  ;
LAB_01574610:
  uVar3 = *(undefined8 *)pIVar5;
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar3;
}

