
/* v8::internal::Runtime_BigIntEqualToNumber(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_BigIntEqualToNumber(int param_1,ulong *param_2,Isolate *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_0155392c(param_1,param_2,param_3);
    return uVar3;
  }
  uVar4 = *param_2;
  if (((uVar4 & 1) != 0) &&
     (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x41)) {
    bVar1 = BigInt::EqualToNumber(param_2,param_2 + -1);
    puVar2 = (undefined8 *)Factory::ToBoolean((Factory *)param_3,(bool)(bVar1 & 1));
    return *puVar2;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsBigInt()");
}

