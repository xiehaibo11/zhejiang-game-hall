
/* v8::internal::Runtime_ObjectValuesSkipFastPath(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_ObjectValuesSkipFastPath(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long *plVar2;
  Isolate *pIVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_011ca2fc(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) != 0) &&
     (0xa8 < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)))) {
    plVar2 = (long *)JSReceiver::GetOwnValues(param_2,0x12,0);
    if (plVar2 == (long *)0x0) {
      pIVar3 = param_3 + 0x180;
    }
    else {
      pIVar3 = (Isolate *)
               Factory::NewJSArrayWithElements(param_3,plVar2,3,*(int *)(*plVar2 + 3) >> 1,0);
    }
    uVar6 = *(undefined8 *)pIVar3;
    *(undefined8 *)(param_3 + 0x95a0) = uVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
}

