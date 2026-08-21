
undefined8 FUN_01558ad8(undefined8 param_1,long param_2,Isolate *param_3)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  Isolate *pIVar6;
  double dVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong *puVar12;
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uint local_64;
  long *local_60;
  long *local_58;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0xdf);
  }
  if (DAT_01d46dd0 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46dd0 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d46dd0;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d46dd0 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_StoreKeyedToSuper",0,0,0,0,0,0,0,
                       &local_60,0);
    plVar4 = local_58;
    local_58 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_60;
    local_60 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_StoreKeyedToSuper";
    local_a8 = pbVar3;
    local_98 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar11 = (ulong *)(param_2 + -8);
  uVar8 = *puVar11;
  if (((uVar8 & 1) == 0) ||
     (*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0xaa)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsJSObject()");
  }
  local_64 = 0;
  puVar12 = (ulong *)(param_2 + -0x10);
  uVar8 = *puVar12;
  if ((uVar8 & 1) == 0) {
    if ((int)uVar8 < 0) {
LAB_01558cb0:
      puVar12 = (ulong *)v8::internal::Object::ConvertToName(param_3,puVar12);
      goto LAB_01558cc0;
    }
    dVar7 = (double)(uVar8 >> 1 & 0x7fffffff);
    local_64 = SUB84(dVar7,0);
LAB_01558d48:
    pIVar6 = (Isolate *)FUN_0155ab24(param_3,puVar11,param_2,dVar7,param_2 + -0x18);
joined_r0x01558d2c:
    if (pIVar6 != (Isolate *)0x0) goto LAB_01558d58;
  }
  else {
    uVar9 = uVar8 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar9 + *(uint *)(uVar8 - 1)) == 0x42) {
      dVar7 = *(double *)(uVar8 + 3) + 4503599627370496.0;
      if ((((ulong)dVar7 >> 0x20 == 0x43300000) &&
          (local_64 = SUB84(dVar7,0), local_64 != 0xffffffff)) &&
         (*(double *)(uVar8 + 3) == (double)((ulong)dVar7 & 0xffffffff))) goto LAB_01558d48;
    }
    if (0x40 < *(ushort *)(uVar9 + *(uint *)(uVar8 - 1))) goto LAB_01558cb0;
LAB_01558cc0:
    if (puVar12 != (ulong *)0x0) {
      plVar4 = (long *)*puVar12;
      if (*(ushort *)(((ulong)plVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)plVar4 - 1))
          < 0x40) {
        uVar2 = *(uint *)((long)plVar4 + 3);
        local_60 = plVar4;
        if ((uVar2 & 0xc0000003) == 0) {
          local_64 = uVar2 >> 3 & 0xffffff;
        }
        else if (((uVar2 & 3) == 2) ||
                (uVar8 = v8::internal::String::SlowAsArrayIndex((String *)&local_60,&local_64),
                (uVar8 & 1) == 0)) goto LAB_01558d14;
        dVar7 = (double)(ulong)local_64;
        goto LAB_01558d48;
      }
LAB_01558d14:
      pIVar6 = (Isolate *)FUN_0155aa30(param_3,puVar11,param_2,puVar12,param_2 + -0x18);
      goto joined_r0x01558d2c;
    }
  }
  pIVar6 = param_3 + 0x180;
LAB_01558d58:
  uVar10 = *(undefined8 *)pIVar6;
  *(undefined8 *)(param_3 + 0x95a0) = uVar5;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar10;
}

