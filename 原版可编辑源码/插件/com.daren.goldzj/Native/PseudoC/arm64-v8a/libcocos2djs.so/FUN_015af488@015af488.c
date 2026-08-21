
undefined8 FUN_015af488(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  byte *pbVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  Isolate *pIVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  double dVar11;
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
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x25e);
  }
  if (DAT_01d47788 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47788 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47788;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d47788 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,"V8.Runtime_Runtime_NewRegExpWithBacktrackLimit",0,0,0,0,0
                       ,0,0,&local_50,0);
    plVar5 = local_48;
    local_48 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_50;
    local_50 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_NewRegExpWithBacktrackLimit";
    local_98 = pbVar3;
    local_88 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if (((uVar8 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  uVar8 = param_2[-1];
  if (((uVar8 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  uVar8 = param_2[-2];
  if ((uVar8 & 1) == 0) {
    if (-1 < (int)uVar8) {
      dVar11 = (double)(uVar8 >> 1 & 0x7fffffff);
LAB_015af654:
      local_50 = (long *)((ulong)local_50 & 0xffffffffffffff00);
      uVar4 = v8::internal::JSRegExp::FlagsFromString(param_3,param_2 + -1,&local_50);
      if ((char)local_50 == '\x01') {
        pIVar7 = (Isolate *)
                 v8::internal::JSRegExp::New(param_3,param_2,uVar4,(ulong)dVar11 & 0xffffffff);
        pIVar1 = param_3 + 0x180;
        if (pIVar7 != (Isolate *)0x0) {
          pIVar1 = pIVar7;
        }
        uVar10 = *(undefined8 *)pIVar1;
        *(undefined8 *)(param_3 + 0x95a0) = uVar6;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(long *)(param_3 + 0x95a8) != lVar2) {
          *(long *)(param_3 + 0x95a8) = lVar2;
          v8::internal::HandleScope::DeleteExtensions(param_3);
        }
        if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
          plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
          (**(code **)(*plVar5 + 0x28))(plVar5,local_98,local_90,local_88);
        }
        if (local_80 != (RuntimeCallStats *)0x0) {
          v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8))
          ;
        }
        return uVar10;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","success");
    }
  }
  else {
    uVar9 = uVar8 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar9 + *(uint *)(uVar8 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].IsNumber()");
    }
    if (*(short *)(uVar9 + *(uint *)(uVar8 - 1)) == 0x42) {
      dVar11 = *(double *)(uVar8 + 3) + 4503599627370496.0;
      if (((ulong)dVar11 >> 0x20 == 0x43300000) &&
         (*(double *)(uVar8 + 3) == (double)((ulong)dVar11 & 0xffffffff))) goto LAB_015af654;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[2].ToUint32(&backtrack_limit)");
}

