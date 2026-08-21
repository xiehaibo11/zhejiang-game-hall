
/* v8::internal::Runtime_AwaitPromisesInitOld(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_AwaitPromisesInitOld(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_015796d8(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar7 = param_2 + -1;
  uVar5 = *puVar7;
  if (((uVar5 & 1) == 0) ||
     (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x42d)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsJSPromise()");
  }
  puVar8 = param_2 + -2;
  uVar5 = *puVar8;
  if (((uVar5 & 1) == 0) ||
     (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x42d)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsJSPromise()");
  }
  uVar5 = param_2[-3];
  if (((uVar5 & 1) != 0) &&
     (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x439)) {
    uVar5 = param_2[-4];
    if ((((uVar5 & 1) != 0) &&
        (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x43)) &&
       ((*(uint *)(uVar5 + 0x17) >> 1 & 0xff) < 2)) {
      iVar2 = *(int *)(param_3 + 0xb8);
      Isolate::RunPromiseHook(param_3,0,puVar7,puVar8);
      puVar3 = (undefined8 *)
               FUN_0157a7b4(param_3,param_2,puVar7,puVar8,param_2 + -3,(int)uVar5 == iVar2);
      uVar6 = *puVar3;
      *(undefined8 *)(param_3 + 0x95a0) = uVar4;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar6;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[4].IsBoolean()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[3].IsJSFunction()");
}

