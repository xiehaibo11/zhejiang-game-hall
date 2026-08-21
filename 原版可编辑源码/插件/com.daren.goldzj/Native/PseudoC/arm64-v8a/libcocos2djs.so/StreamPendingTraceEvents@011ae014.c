
/* v8::internal::CpuProfile::StreamPendingTraceEvents() */

void __thiscall v8::internal::CpuProfile::StreamPendingTraceEvents(CpuProfile *this)

{
  long *plVar1;
  undefined4 uVar2;
  byte *pbVar3;
  TracedValue *pTVar4;
  int iVar5;
  long *plVar6;
  CpuProfile *pCVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  char *__s1;
  TracedValue *local_90;
  undefined1 local_88 [12];
  undefined1 local_7c [4];
  char *local_78;
  TracedValue *local_70;
  long *local_68;
  
  pTVar4 = local_90;
  plVar1 = *(long **)(this + 0x68);
  plVar6 = *(long **)(this + 0x70);
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  if (plVar1 == plVar6) {
    if (*(long *)(this + 0x60) == 0) goto LAB_011ae69c;
    v8::tracing::TracedValue::Create((TracedValue *)this);
    if (*(long *)(this + 0xa0) != *(long *)(this + 0x60)) {
      v8::tracing::TracedValue::BeginDictionary(local_90,"cpuProfile");
      goto LAB_011ae1e0;
    }
  }
  else {
    v8::tracing::TracedValue::Create((TracedValue *)this);
    v8::tracing::TracedValue::BeginDictionary(local_90,"cpuProfile");
    v8::tracing::TracedValue::BeginArray(local_90,"nodes");
    plVar10 = plVar1;
    do {
      lVar12 = *plVar10;
      v8::tracing::TracedValue::BeginDictionary(local_90);
      lVar13 = *(long *)(lVar12 + 8);
      v8::tracing::TracedValue::BeginDictionary(local_90,"callFrame");
      v8::tracing::TracedValue::SetString(local_90,"functionName",*(char **)(lVar13 + 8));
      if (**(char **)(lVar13 + 0x10) != '\0') {
        v8::tracing::TracedValue::SetString(local_90,"url",*(char **)(lVar13 + 0x10));
      }
      v8::tracing::TracedValue::SetInteger(local_90,"scriptId",*(int *)(lVar13 + 0x20));
      if (*(int *)(lVar13 + 0x18) != 0) {
        v8::tracing::TracedValue::SetInteger(local_90,"lineNumber",*(int *)(lVar13 + 0x18) + -1);
      }
      if (*(int *)(lVar13 + 0x1c) != 0) {
        v8::tracing::TracedValue::SetInteger(local_90,"columnNumber",*(int *)(lVar13 + 0x1c) + -1);
      }
      v8::tracing::TracedValue::EndDictionary(local_90);
      v8::tracing::TracedValue::SetInteger(local_90,"id",*(int *)(lVar12 + 0x68));
      if (*(long *)(lVar12 + 0x60) != 0) {
        v8::tracing::TracedValue::SetInteger
                  (local_90,"parent",*(int *)(*(long *)(lVar12 + 0x60) + 0x68));
      }
      if ((((*(long *)(lVar13 + 0x38) != 0) &&
           (__s1 = *(char **)(*(long *)(lVar13 + 0x38) + 8), __s1 != (char *)0x0)) &&
          (*__s1 != '\0')) && (iVar5 = strcmp(__s1,"no reason"), iVar5 != 0)) {
        v8::tracing::TracedValue::SetString(local_90,"deoptReason",__s1);
      }
      v8::tracing::TracedValue::EndDictionary(local_90);
      plVar10 = plVar10 + 1;
    } while (plVar6 != plVar10);
    v8::tracing::TracedValue::EndArray(local_90);
LAB_011ae1e0:
    if (*(long *)(this + 0xa0) != *(long *)(this + 0x60)) {
      v8::tracing::TracedValue::BeginArray(local_90,"samples");
      uVar11 = *(ulong *)(this + 0xa0);
      if (uVar11 < *(ulong *)(this + 0x60)) {
        do {
          uVar8 = (uVar11 + *(long *)(this + 0x58)) / 0xaa;
          v8::tracing::TracedValue::AppendInteger
                    (local_90,*(int *)(*(long *)(*(long *)(*(long *)(this + 0x40) + uVar8 * 8) +
                                                (uVar11 + *(long *)(this + 0x58) + uVar8 * -0xaa) *
                                                0x18) + 0x68));
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(ulong *)(this + 0x60));
      }
      v8::tracing::TracedValue::EndArray(local_90);
    }
    v8::tracing::TracedValue::EndDictionary(local_90);
    if (*(long *)(this + 0xa0) != *(long *)(this + 0x60)) {
      v8::tracing::TracedValue::BeginArray(local_90,"timeDeltas");
      uVar11 = *(ulong *)(this + 0xa0);
      if (uVar11 == 0) {
        pCVar7 = this + 0x28;
      }
      else {
        uVar8 = (uVar11 + *(long *)(this + 0x58)) - 1;
        pCVar7 = (CpuProfile *)
                 (*(long *)(*(long *)(this + 0x40) + (uVar8 / 0xaa) * 8) + (uVar8 % 0xaa) * 0x18 + 8
                 );
      }
      if (uVar11 < *(ulong *)(this + 0x60)) {
        lVar12 = *(long *)(this + 0x58);
        lVar13 = *(long *)(this + 0x40);
        do {
          uVar8 = (lVar12 + uVar11) / 0xaa;
          local_70 = (TracedValue *)
                     (*(long *)(*(long *)(lVar13 + uVar8 * 8) +
                                (uVar11 + lVar12 + uVar8 * -0xaa) * 0x18 + 8) - *(long *)pCVar7);
          iVar5 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_70);
          v8::tracing::TracedValue::AppendInteger(local_90,iVar5);
          lVar12 = *(long *)(this + 0x58);
          lVar13 = *(long *)(this + 0x40);
          uVar8 = (uVar11 + lVar12) / 0xaa;
          lVar9 = uVar11 + lVar12 + uVar8 * -0xaa;
          uVar11 = uVar11 + 1;
          pCVar7 = (CpuProfile *)(*(long *)(lVar13 + uVar8 * 8) + lVar9 * 0x18 + 8);
        } while (uVar11 < *(ulong *)(this + 0x60));
      }
      v8::tracing::TracedValue::EndArray(local_90);
      uVar11 = *(ulong *)(this + 0x58);
      lVar12 = *(long *)(this + 0x40);
      plVar6 = (long *)(lVar12 + (uVar11 / 0xaa) * 8);
      if (*(long *)(this + 0x48) == lVar12) {
        lVar13 = 0;
        lVar9 = *(long *)(this + 0xa0);
      }
      else {
        lVar13 = *plVar6 + (uVar11 % 0xaa) * 0x18;
        lVar9 = *(long *)(this + 0xa0);
      }
      if (lVar9 != 0) {
        uVar8 = lVar9 + (lVar13 - *plVar6 >> 3) * -0x5555555555555555;
        if ((long)uVar8 < 1) {
          lVar13 = 0xa9 - uVar8;
          lVar9 = SUB168(SEXT816(lVar13) * SEXT816(-0x6060606060606061),8);
          plVar6 = plVar6 + ((lVar9 >> 6) - (lVar9 >> 0x3f));
          lVar13 = *plVar6 + ((lVar13 / 0xaa) * 0xaa - lVar13) * 0x18 + 0xfd8;
        }
        else {
          plVar6 = plVar6 + uVar8 / 0xaa;
          lVar13 = *plVar6 + (uVar8 % 0xaa) * 0x18;
        }
      }
      lVar9 = *(long *)(this + 0x60);
      if (*(long *)(this + 0x48) == lVar12) {
        lVar12 = 0;
      }
      else {
        lVar12 = *(long *)(lVar12 + ((lVar9 + uVar11) / 0xaa) * 8) +
                 ((lVar9 + uVar11) % 0xaa) * 0x18;
      }
LAB_011ae510:
      if (lVar12 != lVar13) {
        if (*(int *)(lVar13 + 0x10) == 0) goto code_r0x011ae4f8;
        v8::tracing::TracedValue::BeginArray(local_90,"lines");
        uVar11 = *(ulong *)(this + 0xa0);
        if (uVar11 < *(ulong *)(this + 0x60)) {
          do {
            uVar8 = (uVar11 + *(long *)(this + 0x58)) / 0xaa;
            v8::tracing::TracedValue::AppendInteger
                      (local_90,*(int *)(*(long *)(*(long *)(this + 0x40) + uVar8 * 8) +
                                         (uVar11 + *(long *)(this + 0x58) + uVar8 * -0xaa) * 0x18 +
                                        0x10));
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(ulong *)(this + 0x60));
        }
        v8::tracing::TracedValue::EndArray(local_90);
        lVar9 = *(long *)(this + 0x60);
      }
      *(long *)(this + 0xa0) = lVar9;
    }
  }
  if (DAT_01d3f900 == (byte *)0x0) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f900 = (byte *)(**(code **)(*plVar6 + 0x10))
                                     (plVar6,"disabled-by-default-v8.cpu_profiler");
  }
  pbVar3 = DAT_01d3f900;
  if ((*DAT_01d3f900 & 5) != 0) {
    uVar2 = *(undefined4 *)(this + 0xa8);
    local_90 = (TracedValue *)0x0;
    local_78 = "data";
    local_70 = pTVar4;
    local_7c[0] = 8;
    local_68 = (long *)0x0;
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x18))
              (plVar6,0x50,pbVar3,"ProfileChunk",0,uVar2,0,1,&local_78,local_7c,local_88,&local_70,2
              );
    plVar6 = local_68;
    local_68 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    pTVar4 = local_70;
    local_70 = (TracedValue *)0x0;
    if (pTVar4 != (TracedValue *)0x0) {
      (**(code **)(*(long *)pTVar4 + 8))();
    }
  }
  if (local_90 != (TracedValue *)0x0) {
    (**(code **)(*(long *)local_90 + 8))();
  }
LAB_011ae69c:
  if (plVar1 != (long *)0x0) {
    operator_delete(plVar1);
  }
  return;
code_r0x011ae4f8:
  lVar13 = lVar13 + 0x18;
  if (lVar13 - *plVar6 == 0xff0) {
    plVar6 = plVar6 + 1;
    lVar13 = *plVar6;
  }
  goto LAB_011ae510;
}

