
/* v8::internal::Runtime_BigIntEqualToBigInt(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_BigIntEqualToBigInt(int param_1,ulong *param_2,Isolate *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_0155368c(param_1,param_2,param_3);
    return uVar4;
  }
  uVar2 = *param_2;
  if (((uVar2 & 1) != 0) &&
     (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x41)) {
    uVar2 = param_2[-1];
    if (((uVar2 & 1) != 0) &&
       (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x41)) {
      bVar1 = BigInt::EqualToBigInt();
      puVar3 = (undefined8 *)Factory::ToBoolean((Factory *)param_3,(bool)(bVar1 & 1));
      return *puVar3;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsBigInt()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsBigInt()");
}

