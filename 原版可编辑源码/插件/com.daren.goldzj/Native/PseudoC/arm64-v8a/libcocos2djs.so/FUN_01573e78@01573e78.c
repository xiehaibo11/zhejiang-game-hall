
undefined8 FUN_01573e78(undefined8 param_1,ulong *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  byte **ppbVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  double dVar10;
  byte *local_98;
  char *local_90;
  undefined8 local_88;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_50;
  long *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x17f);
  }
  if (DAT_01d47110 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47110 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47110;
  if ((*DAT_01d47110 & 5) == 0) {
    ppbVar6 = (byte **)0x0;
    uVar8 = *param_2;
  }
  else {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_IsValidSmi",0,0,0,0,0,0,0,&local_50,0)
    ;
    plVar4 = local_48;
    local_48 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_50;
    local_50 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    ppbVar6 = &local_98;
    local_90 = "V8.Runtime_Runtime_IsValidSmi";
    uVar8 = *param_2;
    local_98 = pbVar3;
    local_88 = uVar5;
  }
  if ((uVar8 & 1) == 0) {
    iVar7 = (int)uVar8 >> 1;
    goto LAB_01574084;
  }
  if (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsNumber()");
  }
  dVar10 = *(double *)(uVar8 + 3);
  if ((((-2147483648.0 <= dVar10) && (dVar10 <= 2147483647.0)) && (ABS(dVar10) != INFINITY)) &&
     ((!NAN(ABS(dVar10)) && (iVar7 = (int)dVar10, dVar10 == (double)(int)dVar10))))
  goto LAB_01574084;
  uVar1 = 0xfffffbce;
  if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
    uVar1 = ((uint)((ulong)dVar10 >> 0x34) & 0x7ff) - 0x433;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x34) goto LAB_01574058;
    uVar8 = (ulong)dVar10 & 0xfffffffffffff;
    if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
      uVar8 = (ulong)dVar10 & 0xfffffffffffff | 0x10000000000000;
    }
    iVar9 = (int)(uVar8 >> ((ulong)-uVar1 & 0x3f));
  }
  else {
    if (0x1f < (int)uVar1) {
LAB_01574058:
      iVar7 = 0;
      goto LAB_01574084;
    }
    uVar8 = (ulong)dVar10 & 0xfffffffffffff;
    if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
      uVar8 = (ulong)dVar10 & 0xfffffffffffff | 0x10000000000000;
    }
    iVar9 = (int)(uVar8 << ((ulong)uVar1 & 0x3f));
  }
  iVar7 = -iVar9;
  if (-1 < (long)dVar10) {
    iVar7 = iVar9;
  }
LAB_01574084:
  lVar2 = 0xb8;
  if ((long)iVar7 + 0x40000000U >> 0x1f != 0) {
    lVar2 = 0xc0;
  }
  uVar5 = *(undefined8 *)(param_3 + lVar2);
  if ((ppbVar6 != (byte **)0x0) && (*local_98 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_98,local_90,local_88);
  }
  if (local_80 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return uVar5;
}

