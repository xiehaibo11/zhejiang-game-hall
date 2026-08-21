
/* v8::internal::Runtime_BigIntCompareToString(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_BigIntCompareToString(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_01553350(param_1,param_2,param_3);
    return uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if ((uVar6 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsSmi()");
  }
  uVar7 = param_2[-1];
  if (((uVar7 & 1) == 0) ||
     (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x41)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsBigInt()");
  }
  uVar7 = param_2[-2];
  if (((uVar7 & 1) != 0) &&
     (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0x40)) {
    uVar3 = BigInt::CompareToString(param_3);
    bVar2 = ComparisonResultToBool((int)uVar6 >> 1,uVar3);
    puVar4 = (undefined8 *)Factory::ToBoolean((Factory *)param_3,(bool)(bVar2 & 1));
    uVar8 = *puVar4;
    *(undefined8 *)(param_3 + 0x95a0) = uVar5;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[2].IsString()");
}

