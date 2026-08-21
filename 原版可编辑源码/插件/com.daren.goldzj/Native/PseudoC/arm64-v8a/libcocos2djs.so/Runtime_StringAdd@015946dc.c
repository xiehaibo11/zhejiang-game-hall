
/* v8::internal::Runtime_StringAdd(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_StringAdd(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  int *piVar3;
  Isolate *pIVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_0159485c(param_1,param_2,param_3);
    return uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) != 0) &&
     (*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0x40)) {
    uVar6 = param_2[-1];
    if (((uVar6 & 1) != 0) &&
       (*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0x40)) {
      lVar8 = *(long *)(param_3 + 0x9520);
      if (*(char *)(lVar8 + 0x1bf8) == '\0') {
        *(char *)(lVar8 + 0x1bf8) = '\x01';
        piVar3 = (int *)StatsCounterBase::FindLocationInStatsTable
                                  ((StatsCounterBase *)(lVar8 + 0x1be0));
        *(int **)(lVar8 + 0x1bf0) = piVar3;
      }
      else {
        piVar3 = *(int **)(lVar8 + 0x1bf0);
      }
      if (piVar3 != (int *)0x0) {
        *piVar3 = *piVar3 + 1;
      }
      pIVar4 = (Isolate *)Factory::NewConsString((Factory *)param_3,param_2,param_2 + -1);
      pIVar1 = param_3 + 0x180;
      if (pIVar4 != (Isolate *)0x0) {
        pIVar1 = pIVar4;
      }
      uVar7 = *(undefined8 *)pIVar1;
      *(undefined8 *)(param_3 + 0x95a0) = uVar5;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar2) {
        *(long *)(param_3 + 0x95a8) = lVar2;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar7;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsString()");
}

