
/* v8::internal::Runtime_TypedArraySet(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_TypedArraySet(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_015b15c4(param_1,param_2,param_3);
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
  uVar7 = param_2[-2];
  if (((uVar7 & 1) != 0) &&
     (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsNumber()");
  }
  uVar6 = param_2[-3];
  if (((uVar6 & 1) != 0) &&
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[3].IsNumber()");
  }
  if ((uVar7 & 1) == 0) {
    if ((int)uVar7 < 0) {
LAB_015b1574:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","TryNumberToSize(*length_obj, &length)");
    }
    uVar7 = uVar7 >> 1 & 0x7fffffff;
  }
  else {
    dVar8 = *(double *)(uVar7 + 3);
    if ((dVar8 < 0.0) || (1.8446744073709552e+19 <= dVar8)) goto LAB_015b1574;
    uVar7 = (ulong)dVar8;
  }
  if ((uVar6 & 1) == 0) {
    if (-1 < (int)uVar6) {
      uVar6 = uVar6 >> 1 & 0x7fffffff;
LAB_015b14cc:
      plVar2 = *(long **)(ElementsAccessor::elements_accessors_ +
                         ((ulong)*(byte *)((uVar5 & 0xffffffff00000000 | 10) +
                                          (ulong)*(uint *)(uVar5 - 1)) & 0xf8));
      uVar3 = (**(code **)(*plVar2 + 0xf0))(plVar2,param_2 + -1,param_2,uVar7,uVar6);
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
    dVar8 = *(double *)(uVar6 + 3);
    if ((0.0 <= dVar8) && (dVar8 < 1.8446744073709552e+19)) {
      uVar6 = (ulong)dVar8;
      goto LAB_015b14cc;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","TryNumberToSize(*offset_obj, &offset)",param_2,uVar7);
}

