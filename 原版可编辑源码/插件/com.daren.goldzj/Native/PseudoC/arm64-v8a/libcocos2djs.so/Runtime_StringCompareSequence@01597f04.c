
/* v8::internal::Runtime_StringCompareSequence(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_StringCompareSequence(int param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  Isolate *pIVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  double dVar10;
  undefined **local_b0;
  long local_a8;
  undefined8 uStack_a0;
  char local_90;
  long local_88;
  undefined **local_80;
  long local_78;
  undefined8 uStack_70;
  char local_60;
  long local_58;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_01598214(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  uVar5 = param_2[-1];
  if (((uVar5 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  uVar5 = param_2[-2];
  if ((uVar5 & 1) == 0) {
    iVar9 = (int)uVar5 >> 1;
    goto LAB_0159808c;
  }
  if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsNumber()");
  }
  dVar10 = *(double *)(uVar5 + 3);
  if ((((-2147483648.0 <= dVar10) && (dVar10 <= 2147483647.0)) && (ABS(dVar10) != INFINITY)) &&
     ((!NAN(ABS(dVar10)) && (iVar9 = (int)dVar10, dVar10 == (double)(int)dVar10))))
  goto LAB_0159808c;
  uVar1 = 0xfffffbce;
  if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
    uVar1 = ((uint)((ulong)dVar10 >> 0x34) & 0x7ff) - 0x433;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x34) goto LAB_01598060;
    uVar5 = (ulong)dVar10 & 0xfffffffffffff;
    if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
      uVar5 = (ulong)dVar10 & 0xfffffffffffff | 0x10000000000000;
    }
    iVar7 = (int)(uVar5 >> ((ulong)-uVar1 & 0x3f));
  }
  else {
    if (0x1f < (int)uVar1) {
LAB_01598060:
      iVar9 = 0;
      goto LAB_0159808c;
    }
    uVar5 = (ulong)dVar10 & 0xfffffffffffff;
    if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
      uVar5 = (ulong)dVar10 & 0xfffffffffffff | 0x10000000000000;
    }
    iVar7 = (int)(uVar5 << ((ulong)uVar1 & 0x3f));
  }
  iVar9 = -iVar7;
  if (-1 < (long)dVar10) {
    iVar9 = iVar7;
  }
LAB_0159808c:
  uVar3 = String::Flatten(param_3,param_2,0);
  FlatStringReader::FlatStringReader((FlatStringReader *)&local_80,param_3,uVar3);
  uVar3 = String::Flatten(param_3,param_2 + -1,0);
  FlatStringReader::FlatStringReader((FlatStringReader *)&local_b0,param_3,uVar3);
  if ((int)*(uint *)(param_2[-1] + 7) < 1) {
LAB_0159813c:
    pIVar6 = param_3 + 0xb8;
  }
  else {
    uVar5 = 0;
    if (local_60 != '\0') goto LAB_01598120;
LAB_015980fc:
    uVar8 = *(ushort *)(local_58 + (long)iVar9 * 2 + uVar5 * 2);
    if (local_90 == '\0') goto LAB_01598128;
    while (uVar8 == *(byte *)(local_88 + uVar5)) {
      while( true ) {
        uVar5 = uVar5 + 1;
        if (*(uint *)(param_2[-1] + 7) == uVar5) goto LAB_0159813c;
        if (local_60 == '\0') goto LAB_015980fc;
LAB_01598120:
        uVar8 = (ushort)*(byte *)(local_58 + iVar9 + uVar5);
        if (local_90 != '\0') break;
LAB_01598128:
        if (uVar8 != *(ushort *)(local_88 + uVar5 * 2)) goto LAB_01598134;
      }
    }
LAB_01598134:
    pIVar6 = param_3 + 0xc0;
  }
  uVar3 = *(undefined8 *)pIVar6;
  local_b0 = &PTR__Relocatable_01cacc40;
  *(undefined8 *)(local_a8 + 0xb790) = uStack_a0;
  *(undefined8 *)(local_78 + 0xb790) = uStack_70;
  *(undefined8 *)(param_3 + 0x95a0) = uVar4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    local_80 = local_b0;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar3;
}

