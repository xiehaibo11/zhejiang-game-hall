
/* v8::internal::Runtime_StackGuardWithGap(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_StackGuardWithGap(int param_1,ulong *param_2,Isolate *param_3)

{
  byte *pbVar1;
  Isolate *pIVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  byte **local_70;
  byte *local_68;
  char *local_60;
  undefined8 local_58;
  Isolate *local_50;
  long *local_48;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_01569554(param_1,param_2,param_3);
    return uVar4;
  }
  uVar5 = *param_2;
  if ((uVar5 & 1) == 0) {
    if (-1 < (int)uVar5) {
      dVar7 = (double)(uVar5 >> 1 & 0x7fffffff);
LAB_015693cc:
      if (DAT_01d47018 == (byte *)0x0) {
        plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
        DAT_01d47018 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"v8.execute");
      }
      pbVar1 = DAT_01d47018;
      local_70 = (byte **)0x0;
      if ((*DAT_01d47018 & 5) != 0) {
        local_50 = (Isolate *)0x0;
        local_48 = (long *)0x0;
        plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
        uVar4 = (**(code **)(*plVar3 + 0x18))
                          (plVar3,0x58,pbVar1,"V8.StackGuard",0,0,0,0,0,0,0,&local_50,0);
        plVar3 = local_48;
        local_48 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        pIVar2 = local_50;
        local_50 = (Isolate *)0x0;
        if (pIVar2 != (Isolate *)0x0) {
          (**(code **)(*(long *)pIVar2 + 8))();
        }
        local_70 = &local_68;
        local_60 = "V8.StackGuard";
        local_68 = pbVar1;
        local_58 = uVar4;
      }
      local_50 = param_3;
      uVar5 = StackLimitCheck::JsHasOverflowed
                        ((StackLimitCheck *)&local_50,(ulong)dVar7 & 0xffffffff);
      if ((uVar5 & 1) == 0) {
        uVar4 = StackGuard::HandleInterrupts((StackGuard *)(param_3 + 0x48));
      }
      else {
        uVar4 = Isolate::StackOverflow(param_3);
      }
      if ((local_70 != (byte **)0x0) && (*local_68 != 0)) {
        plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar3 + 0x28))(plVar3,local_68,local_60,local_58);
      }
      return uVar4;
    }
  }
  else {
    uVar6 = uVar5 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar6 + *(uint *)(uVar5 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsNumber()");
    }
    if (*(short *)(uVar6 + *(uint *)(uVar5 - 1)) == 0x42) {
      dVar7 = *(double *)(uVar5 + 3) + 4503599627370496.0;
      if (((ulong)dVar7 >> 0x20 == 0x43300000) &&
         (*(double *)(uVar5 + 3) == (double)((ulong)dVar7 & 0xffffffff))) goto LAB_015693cc;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].ToUint32(&gap)");
}

