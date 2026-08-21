
/* v8::internal::Runtime_RegExpExec(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_RegExpExec(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  int *piVar3;
  Isolate *pIVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  ulong local_60;
  int local_54;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_0157e32c(param_1,param_2,param_3);
    return uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) == 0) ||
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x42e)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSRegExp()");
  }
  puVar8 = param_2 + -1;
  uVar6 = *puVar8;
  if (((uVar6 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  local_60 = param_2[-2];
  if (((local_60 & 1) != 0) &&
     (*(short *)((local_60 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_60 - 1)) != 0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsNumber()");
  }
  local_54 = 0;
  uVar6 = Object::ToInt32((Object *)&local_60,&local_54);
  if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].ToInt32(&index)");
  }
  uVar6 = param_2[-3];
  if (((uVar6 & 1) == 0) ||
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x76)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[3].IsRegExpMatchInfo()");
  }
  if (local_54 < 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 <= index");
  }
  if (local_54 <= *(int *)(*puVar8 + 7)) {
    lVar9 = *(long *)(param_3 + 0x9520);
    if (*(char *)(lVar9 + 0x1c38) == '\0') {
      *(char *)(lVar9 + 0x1c38) = '\x01';
      piVar3 = (int *)StatsCounterBase::FindLocationInStatsTable
                                ((StatsCounterBase *)(lVar9 + 0x1c20));
      *(int **)(lVar9 + 0x1c30) = piVar3;
    }
    else {
      piVar3 = *(int **)(lVar9 + 0x1c30);
    }
    if (piVar3 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
    pIVar4 = (Isolate *)RegExp::Exec(param_3,param_2,puVar8,local_54,param_2 + -3);
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
  V8_Fatal("Check failed: %s.","subject->length() >= index");
}

