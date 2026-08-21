
/* v8::internal::Runtime_BigIntCompareToBigInt(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_BigIntCompareToBigInt(int param_1,ulong *param_2,Isolate *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_01552cf4(param_1,param_2,param_3);
    return uVar4;
  }
  uVar5 = *param_2;
  if ((uVar5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsSmi()");
  }
  uVar6 = param_2[-1];
  if (((uVar6 & 1) == 0) ||
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x41)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsBigInt()");
  }
  uVar6 = param_2[-2];
  if (((uVar6 & 1) != 0) &&
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x41)) {
    uVar2 = BigInt::CompareToBigInt();
    bVar1 = ComparisonResultToBool((int)uVar5 >> 1,uVar2);
    puVar3 = (undefined8 *)Factory::ToBoolean((Factory *)param_3,(bool)(bVar1 & 1));
    return *puVar3;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[2].IsBigInt()");
}

