
/* v8::internal::Runtime_AllocateInOldGeneration(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_AllocateInOldGeneration(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_0156a2ec(param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  iVar4 = (int)uVar5;
  if ((uVar5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsSmi()");
  }
  uVar6 = (uint)param_2[-1];
  if ((param_2[-1] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsSmi()");
  }
  if ((uVar5 & 6) == 0) {
    if (iVar4 < 2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","size > 0");
    }
    if ((0x40001 < iVar4) && ((uVar6 >> 2 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","size <= kMaxRegularHeapObjectSize");
    }
    puVar2 = (undefined8 *)
             Factory::NewFillerObject((Factory *)param_3,iVar4 >> 1,uVar6 >> 1 & 1,1,0);
    uVar7 = *puVar2;
    *(undefined8 *)(param_3 + 0x95a0) = uVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsAligned(size, kTaggedSize)");
}

