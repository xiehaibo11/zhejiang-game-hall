
/* v8::internal::Runtime_BigIntUnaryOp(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_BigIntUnaryOp(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  Isolate *pIVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_01554d60(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) != 0) &&
     (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x41)) {
    if ((param_2[-1] & 1) == 0) {
      switch((int)param_2[-1] >> 1) {
      case 0xc:
        pIVar3 = (Isolate *)BigInt::BitwiseNot(param_3);
        break;
      case 0xd:
        pIVar3 = (Isolate *)BigInt::UnaryMinus(param_3);
        break;
      case 0xe:
        pIVar3 = (Isolate *)BigInt::Increment(param_3);
        break;
      case 0xf:
        pIVar3 = (Isolate *)BigInt::Decrement(param_3);
        break;
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      pIVar1 = param_3 + 0x180;
      if (pIVar3 != (Isolate *)0x0) {
        pIVar1 = pIVar3;
      }
      uVar6 = *(undefined8 *)pIVar1;
      *(undefined8 *)(param_3 + 0x95a0) = uVar4;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar2) {
        *(long *)(param_3 + 0x95a8) = lVar2;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar6;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsSmi()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsBigInt()");
}

