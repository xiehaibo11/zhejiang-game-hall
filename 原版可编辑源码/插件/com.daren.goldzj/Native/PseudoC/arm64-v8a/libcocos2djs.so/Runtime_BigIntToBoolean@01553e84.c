
/* v8::internal::Runtime_BigIntToBoolean(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_BigIntToBoolean(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar2 = FUN_01553ef8(param_1);
    return uVar2;
  }
  uVar3 = *param_2;
  if (((uVar3 & 1) != 0) &&
     (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x41)) {
    puVar1 = (undefined8 *)
             Factory::ToBoolean((Factory *)param_3,(*(uint *)(uVar3 + 3) & 0x7ffffffe) != 0);
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsBigInt()");
}

