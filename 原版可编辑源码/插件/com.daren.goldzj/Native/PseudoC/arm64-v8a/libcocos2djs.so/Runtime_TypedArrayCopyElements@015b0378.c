
/* v8::internal::Runtime_TypedArrayCopyElements(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_TypedArrayCopyElements(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_015b04fc(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) == 0) ||
     (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x41b)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSTypedArray()");
  }
  uVar6 = param_2[-2];
  if ((uVar6 & 1) == 0) {
    if (-1 < (int)uVar6) {
      uVar6 = uVar6 >> 1 & 0x7fffffff;
LAB_015b0428:
      plVar2 = *(long **)(ElementsAccessor::elements_accessors_ +
                         ((ulong)*(byte *)((uVar5 & 0xffffffff00000000 | 10) +
                                          (ulong)*(uint *)(uVar5 - 1)) & 0xf8));
      uVar3 = (**(code **)(*plVar2 + 0xf0))(plVar2,param_2 + -1,param_2,uVar6,0);
      *(undefined8 *)(param_3 + 0x95a0) = uVar4;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar3;
    }
  }
  else {
    if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].IsNumber()");
    }
    dVar7 = *(double *)(uVar6 + 3);
    if ((0.0 <= dVar7) && (dVar7 < 1.8446744073709552e+19)) {
      uVar6 = (ulong)dVar7;
      goto LAB_015b0428;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","TryNumberToSize(*length_obj, &length)");
}

