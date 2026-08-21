
/* v8::internal::Runtime_ConstructConsString(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_ConstructConsString(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_0159b12c(param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *param_2;
  if (((uVar4 & 1) == 0) ||
     (uVar6 = uVar4 & 0xffffffff00000000 | 7, 0x3f < *(ushort *)(uVar6 + *(uint *)(uVar4 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  uVar5 = param_2[-1];
  if (((uVar5 & 1) == 0) ||
     (uVar7 = uVar5 & 0xffffffff00000000 | 7, 0x3f < *(ushort *)(uVar7 + *(uint *)(uVar5 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  if ((*(byte *)(uVar6 + *(uint *)(uVar4 - 1)) >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","left->IsOneByteRepresentation()");
  }
  if ((*(byte *)(uVar7 + *(uint *)(uVar5 - 1)) >> 3 & 1) != 0) {
    puVar2 = (undefined8 *)
             Factory::NewConsString
                       ((Factory *)param_3,param_2,param_2 + -1,
                        *(int *)(uVar5 + 7) + *(int *)(uVar4 + 7),1);
    uVar8 = *puVar2;
    *(undefined8 *)(param_3 + 0x95a0) = uVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","right->IsOneByteRepresentation()");
}

