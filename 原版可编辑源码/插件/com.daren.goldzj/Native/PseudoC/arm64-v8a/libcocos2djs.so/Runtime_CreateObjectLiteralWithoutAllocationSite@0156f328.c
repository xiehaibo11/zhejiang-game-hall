
/* v8::internal::Runtime_CreateObjectLiteralWithoutAllocationSite(int, unsigned long*,
   v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_CreateObjectLiteralWithoutAllocationSite
          (int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  Isolate *pIVar3;
  Isolate *pIVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  Isolate *local_70;
  undefined1 *puStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_0156f498(param_1,param_2,param_3);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return uVar5;
    }
    goto LAB_0156f46c;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) == 0) ||
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x82)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsObjectBoilerplateDescription()");
  }
  uVar8 = (uint)param_2[-1];
  if ((param_2[-1] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsSmi()");
  }
  pIVar3 = (Isolate *)FUN_01571608(param_3,param_2,(int)uVar8 >> 1,0);
  if (((uVar8 >> 1 & 1) == 0) || (pIVar4 = pIVar3, FLAG_track_double_fields != '\0')) {
    local_60 = 0;
    local_70 = param_3;
    puStack_68 = (undefined1 *)&local_70;
    pIVar4 = (Isolate *)FUN_01570f78(&puStack_68,pIVar3);
    if (pIVar3 != (Isolate *)0x0) goto joined_r0x0156f3f0;
LAB_0156f3f4:
    pIVar3 = param_3 + 0x180;
  }
  else {
joined_r0x0156f3f0:
    if (pIVar4 == (Isolate *)0x0) goto LAB_0156f3f4;
  }
  uVar7 = *(undefined8 *)pIVar3;
  *(undefined8 *)(param_3 + 0x95a0) = uVar5;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    HandleScope::DeleteExtensions(param_3);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar7;
  }
LAB_0156f46c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

