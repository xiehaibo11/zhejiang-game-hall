
/* v8::internal::Runtime_StringLessThan(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_StringLessThan(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_0159694c(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) != 0) &&
     (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0x40)) {
    uVar5 = param_2[-1];
    if (((uVar5 & 1) != 0) &&
       (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0x40)) {
      uVar3 = String::Compare(param_3);
      uVar5 = ComparisonResultToBool(0x12,uVar3);
      lVar1 = 0xb8;
      if ((uVar5 & 1) == 0) {
        lVar1 = 0xc0;
      }
      uVar6 = *(undefined8 *)(param_3 + lVar1);
      *(undefined8 *)(param_3 + 0x95a0) = uVar4;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar2) {
        *(long *)(param_3 + 0x95a8) = lVar2;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar6;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsString()");
}

