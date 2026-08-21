
undefined8 FUN_0157466c(undefined8 param_1,ulong *param_2,Factory *param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  Factory *pFVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  double dVar13;
  byte **local_a0;
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
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x183);
  }
  if (DAT_01d47120 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47120 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47120;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d47120 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_StringParseInt",0,0,0,0,0,0,0,
                       &local_50,0);
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
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_StringParseInt";
    local_98 = pbVar3;
    local_88 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar7 = param_2 + -1;
  uVar10 = *param_2;
  if (((uVar10 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)))) {
    param_2 = (ulong *)v8::internal::Object::ConvertToString(param_3,param_2);
  }
  if (param_2 == (ulong *)0x0) {
LAB_01574834:
    pFVar8 = param_3 + 0x180;
    goto LAB_01574938;
  }
  uVar6 = v8::internal::String::Flatten(param_3,param_2,0);
  uVar10 = *puVar7;
  if (((uVar10 & 1) != 0) &&
     (uVar12 = uVar10 & 0xffffffff00000000 | 7, *(short *)(uVar12 + *(uint *)(uVar10 - 1)) != 0x42))
  {
    if (*(short *)(uVar12 + *(uint *)(uVar10 - 1)) != 0x42) {
      puVar7 = (ulong *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,puVar7,0);
    }
    if (puVar7 == (ulong *)0x0) goto LAB_01574834;
    uVar10 = *puVar7;
  }
  if ((uVar10 & 1) == 0) {
    dVar13 = (double)((int)uVar10 >> 1);
  }
  else {
    dVar13 = *(double *)(uVar10 + 3);
  }
  if ((((dVar13 < -2147483648.0) || (2147483647.0 < dVar13)) || (ABS(dVar13) == INFINITY)) ||
     ((NAN(ABS(dVar13)) || (iVar9 = (int)dVar13, dVar13 != (double)(int)dVar13)))) {
    uVar1 = 0xfffffbce;
    if (((ulong)dVar13 & 0x7ff0000000000000) != 0) {
      uVar1 = ((uint)((ulong)dVar13 >> 0x34) & 0x7ff) - 0x433;
    }
    if ((int)uVar1 < 0) {
      if (-0x35 < (int)uVar1) {
        uVar10 = (ulong)dVar13 & 0xfffffffffffff;
        if (((ulong)dVar13 & 0x7ff0000000000000) != 0) {
          uVar10 = (ulong)dVar13 & 0xfffffffffffff | 0x10000000000000;
        }
        iVar11 = (int)(uVar10 >> ((ulong)-uVar1 & 0x3f));
        goto LAB_01574904;
      }
    }
    else if ((int)uVar1 < 0x20) {
      uVar10 = (ulong)dVar13 & 0xfffffffffffff;
      if (((ulong)dVar13 & 0x7ff0000000000000) != 0) {
        uVar10 = (ulong)dVar13 & 0xfffffffffffff | 0x10000000000000;
      }
      iVar11 = (int)(uVar10 << ((ulong)uVar1 & 0x3f));
LAB_01574904:
      iVar9 = -iVar11;
      if (-1 < (long)dVar13) {
        iVar9 = iVar11;
      }
      goto LAB_0157490c;
    }
    iVar9 = 0;
  }
  else {
LAB_0157490c:
    if ((iVar9 != 0) && (0x22 < iVar9 - 2U)) {
      pFVar8 = param_3 + 0x430;
      goto LAB_01574938;
    }
  }
  dVar13 = (double)v8::internal::StringToInt(param_3,uVar6,iVar9);
  pFVar8 = (Factory *)
           v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>(param_3,dVar13);
LAB_01574938:
  uVar6 = *(undefined8 *)pFVar8;
  *(undefined8 *)(param_3 + 0x95a0) = uVar5;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_98,local_90,local_88);
  }
  if (local_80 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return uVar6;
}

