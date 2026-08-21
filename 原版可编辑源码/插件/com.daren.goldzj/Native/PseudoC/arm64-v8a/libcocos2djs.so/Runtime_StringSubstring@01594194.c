
/* v8::internal::Runtime_StringSubstring(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_StringSubstring(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  int local_54;
  ulong local_50;
  int local_44;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_015943a8(param_1,param_2,param_3);
    return uVar5;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  local_50 = param_2[-1];
  if (((local_50 & 1) != 0) &&
     (*(short *)((local_50 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_50 - 1)) != 0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsNumber()");
  }
  local_44 = 0;
  uVar5 = Object::ToInt32((Object *)&local_50,&local_44);
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].ToInt32(&start)");
  }
  uVar5 = param_2[-2];
  if (((uVar5 & 1) != 0) &&
     (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsNumber()");
  }
  local_54 = 0;
  local_50 = uVar5;
  uVar5 = Object::ToInt32((Object *)&local_50,&local_54);
  if ((uVar5 & 1) != 0) {
    lVar6 = *(long *)(param_3 + 0x9520);
    if (*(char *)(lVar6 + 0x1c18) == '\0') {
      *(char *)(lVar6 + 0x1c18) = '\x01';
      piVar3 = (int *)StatsCounterBase::FindLocationInStatsTable
                                ((StatsCounterBase *)(lVar6 + 0x1c00));
      *(int **)(lVar6 + 0x1c10) = piVar3;
    }
    else {
      piVar3 = *(int **)(lVar6 + 0x1c10);
    }
    if (piVar3 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
    if ((local_44 != 0) || (uVar5 = *param_2, *(int *)(uVar5 + 7) != local_54)) {
      puVar4 = (ulong *)Factory::NewProperSubString((Factory *)param_3,param_2);
      uVar5 = *puVar4;
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[2].ToInt32(&end)");
}

