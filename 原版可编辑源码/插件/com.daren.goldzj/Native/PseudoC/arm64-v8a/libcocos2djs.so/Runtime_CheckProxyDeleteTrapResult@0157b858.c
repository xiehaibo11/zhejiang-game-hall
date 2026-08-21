
/* v8::internal::Runtime_CheckProxyDeleteTrapResult(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_CheckProxyDeleteTrapResult(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  long lVar3;
  ushort uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_0157b988(param_1,param_2,param_3);
    return uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) != 0) &&
     (*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0x41)) {
    uVar6 = param_2[-1];
    if (((uVar6 & 1) != 0) &&
       (0xa8 < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
      uVar4 = JSProxy::CheckDeleteTrap(param_3);
      pIVar1 = param_3 + 0xb8;
      if (uVar4 < 0x100) {
        pIVar1 = param_3 + 0xc0;
      }
      pIVar2 = param_3 + 0x180;
      if ((uVar4 & 0xff) != 0) {
        pIVar2 = pIVar1;
      }
      uVar7 = *(undefined8 *)pIVar2;
      *(undefined8 *)(param_3 + 0x95a0) = uVar5;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar3) {
        *(long *)(param_3 + 0x95a8) = lVar3;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar7;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsJSReceiver()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsName()");
}

