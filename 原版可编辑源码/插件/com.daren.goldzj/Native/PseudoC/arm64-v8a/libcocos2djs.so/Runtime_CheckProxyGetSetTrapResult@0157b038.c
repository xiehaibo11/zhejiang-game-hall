
/* v8::internal::Runtime_CheckProxyGetSetTrapResult(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_CheckProxyGetSetTrapResult(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  Isolate *pIVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  double dVar8;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_0157b1dc(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) != 0) &&
     (*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0x41)) {
    uVar6 = param_2[-1];
    if (((uVar6 & 1) != 0) &&
       (0xa8 < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
      uVar6 = param_2[-3];
      if ((uVar6 & 1) == 0) {
        lVar5 = (long)(uVar6 << 0x20) >> 0x21;
      }
      else {
        if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","args[3].IsNumber()");
        }
        dVar8 = *(double *)(uVar6 + 3);
        if (NAN(dVar8)) {
          lVar5 = 0;
        }
        else if (9.223372036854776e+18 <= dVar8) {
          lVar5 = 0x7fffffffffffffff;
        }
        else if (dVar8 <= -9.223372036854776e+18) {
          lVar5 = -0x8000000000000000;
        }
        else {
          lVar5 = (long)dVar8;
        }
      }
      pIVar3 = (Isolate *)
               JSProxy::CheckGetSetTrapResult(param_3,param_2,param_2 + -1,param_2 + -2,lVar5);
      pIVar1 = param_3 + 0x180;
      if (pIVar3 != (Isolate *)0x0) {
        pIVar1 = pIVar3;
      }
      uVar7 = *(undefined8 *)pIVar1;
      *(undefined8 *)(param_3 + 0x95a0) = uVar4;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar2) {
        *(long *)(param_3 + 0x95a8) = lVar2;
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

