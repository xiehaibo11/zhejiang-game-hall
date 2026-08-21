
/* v8::internal::Runtime_StringEqual(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_StringEqual(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  Isolate *pIVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar2 = FUN_015977d8(param_1,param_2,param_3);
    return uVar2;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *param_2;
  if (((uVar4 & 1) != 0) &&
     (uVar6 = uVar4 & 0xffffffff00000000 | 7, *(ushort *)(uVar6 + *(uint *)(uVar4 - 1)) < 0x40)) {
    puVar3 = param_2 + -1;
    uVar7 = *puVar3;
    if (((uVar7 & 1) != 0) &&
       (uVar8 = uVar7 & 0xffffffff00000000 | 7, *(ushort *)(uVar8 + *(uint *)(uVar7 - 1)) < 0x40)) {
      if (((puVar3 == param_2) || ((puVar3 != (ulong *)0x0 && (uVar4 == uVar7)))) ||
         (((0x1f < *(ushort *)(uVar6 + *(uint *)(uVar4 - 1)) ||
           (0x1f < *(ushort *)(uVar8 + *(uint *)(uVar7 - 1)))) &&
          (uVar4 = String::SlowEquals(param_3), (uVar4 & 1) != 0)))) {
        pIVar5 = param_3 + 0xb8;
      }
      else {
        pIVar5 = param_3 + 0xc0;
      }
      uVar9 = *(undefined8 *)pIVar5;
      *(undefined8 *)(param_3 + 0x95a0) = uVar2;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar9;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsString()");
}

