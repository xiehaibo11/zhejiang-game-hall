
/* v8::internal::Runtime_AtomicsNumWaitersForTesting(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_AtomicsNumWaitersForTesting(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  double dVar7;
  ulong local_48;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_01561fcc(param_1,param_2,param_3);
    return uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  local_48 = *param_2;
  if (((local_48 & 1) == 0) ||
     (*(short *)((local_48 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_48 - 1)) != 0x41b)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSTypedArray()");
  }
  uVar6 = param_2[-1];
  if ((uVar6 & 1) == 0) {
    if (-1 < (int)uVar6) {
      uVar6 = uVar6 >> 1 & 0x7fffffff;
LAB_01561e6c:
      if ((*(uint *)((local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + 0xb)) + 0x1b) >> 2
          & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!sta->WasDetached()");
      }
      plVar3 = (long *)JSTypedArray::GetBuffer((JSTypedArray *)&local_48);
      if ((*(uint *)(*plVar3 + 0x1b) >> 4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","sta->GetBuffer()->is_shared()");
      }
      if (*(ulong *)(*param_2 + 0x1f) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","index < sta->length()");
      }
      local_48 = *param_2;
      iVar2 = JSTypedArray::type((JSTypedArray *)&local_48);
      if (iVar2 == 5) {
        local_48 = *param_2;
        uVar4 = JSTypedArray::GetBuffer((JSTypedArray *)&local_48);
        uVar4 = FutexEmulation::NumWaitersForTesting(uVar4,*(long *)(*param_2 + 0xf) + uVar6 * 4);
        *(undefined8 *)(param_3 + 0x95a0) = uVar5;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(long *)(param_3 + 0x95a8) != lVar1) {
          *(long *)(param_3 + 0x95a8) = lVar1;
          HandleScope::DeleteExtensions(param_3);
        }
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","sta->type() == kExternalInt32Array");
    }
  }
  else {
    if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsNumber()");
    }
    dVar7 = *(double *)(uVar6 + 3);
    if ((0.0 <= dVar7) && (dVar7 < 1.8446744073709552e+19)) {
      uVar6 = (ulong)dVar7;
      goto LAB_01561e6c;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","TryNumberToSize(*index_object, &index)");
}

