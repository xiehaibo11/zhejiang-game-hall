
/* v8::internal::Runtime_ForInHasProperty(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_ForInHasProperty(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  Isolate *pIVar5;
  undefined8 uVar6;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_015601b8(param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *param_2;
  if (((uVar4 & 1) != 0) &&
     (0xa8 < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)))) {
    puVar2 = (ulong *)FUN_01560410(param_3,param_2,param_2 + -1);
    if (puVar2 == (ulong *)0x0) {
      pIVar5 = param_3 + 0x180;
    }
    else if (((*puVar2 & 1) == 0) || ((int)*puVar2 != *(int *)(param_3 + 0xa0))) {
      pIVar5 = param_3 + 0xb8;
    }
    else {
      pIVar5 = param_3 + 0xc0;
    }
    uVar6 = *(undefined8 *)pIVar5;
    *(undefined8 *)(param_3 + 0x95a0) = uVar3;
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

