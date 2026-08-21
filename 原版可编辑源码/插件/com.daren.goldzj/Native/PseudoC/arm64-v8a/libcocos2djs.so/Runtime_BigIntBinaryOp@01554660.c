
/* v8::internal::Runtime_BigIntBinaryOp(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_BigIntBinaryOp(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_01554880(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if ((param_2[-2] & 1) == 0) {
    uVar5 = *param_2;
    if (((((uVar5 & 1) == 0) ||
         (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x41)) ||
        (uVar5 = param_2[-1], (uVar5 & 1) == 0)) ||
       (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x41)) {
      puVar2 = (undefined8 *)Factory::NewTypeError((Factory *)param_3,0x14,0,0,0);
      uVar3 = Isolate::Throw(param_3,*puVar2,0);
    }
    else {
      switch((int)param_2[-2] >> 1) {
      case 0:
        puVar2 = (undefined8 *)BigInt::Add(param_3);
        break;
      case 1:
        puVar2 = (undefined8 *)BigInt::Subtract(param_3);
        break;
      case 2:
        puVar2 = (undefined8 *)BigInt::Multiply(param_3);
        break;
      case 3:
        puVar2 = (undefined8 *)BigInt::Divide(param_3);
        break;
      case 4:
        puVar2 = (undefined8 *)BigInt::Remainder(param_3);
        break;
      case 5:
        puVar2 = (undefined8 *)BigInt::Exponentiate(param_3);
        break;
      case 6:
        puVar2 = (undefined8 *)BigInt::BitwiseAnd(param_3);
        break;
      case 7:
        puVar2 = (undefined8 *)BigInt::BitwiseOr(param_3);
        break;
      case 8:
        puVar2 = (undefined8 *)BigInt::BitwiseXor(param_3);
        break;
      case 9:
        puVar2 = (undefined8 *)BigInt::LeftShift(param_3);
        break;
      case 10:
        puVar2 = (undefined8 *)BigInt::SignedRightShift(param_3);
        break;
      case 0xb:
        puVar2 = (undefined8 *)BigInt::UnsignedRightShift(param_3);
        break;
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      if (puVar2 == (undefined8 *)0x0) {
        uVar3 = *(undefined8 *)(param_3 + 0x180);
      }
      else {
        uVar3 = *puVar2;
      }
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[2].IsSmi()");
}

