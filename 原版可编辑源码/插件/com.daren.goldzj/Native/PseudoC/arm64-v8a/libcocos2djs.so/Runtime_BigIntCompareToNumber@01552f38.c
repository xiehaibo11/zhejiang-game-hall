
/* v8::internal::Runtime_BigIntCompareToNumber(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_BigIntCompareToNumber(int param_1,ulong *param_2,Isolate *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_01552ff0(param_1,param_2,param_3);
    return uVar4;
  }
  uVar5 = *param_2;
  if ((uVar5 & 1) == 0) {
    uVar6 = param_2[-1];
    if (((uVar6 & 1) != 0) &&
       (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x41)) {
      uVar2 = BigInt::CompareToNumber(param_2 + -1,param_2 + -2);
      bVar1 = ComparisonResultToBool((int)uVar5 >> 1,uVar2);
      puVar3 = (undefined8 *)Factory::ToBoolean((Factory *)param_3,(bool)(bVar1 & 1));
      return *puVar3;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsBigInt()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsSmi()");
}

