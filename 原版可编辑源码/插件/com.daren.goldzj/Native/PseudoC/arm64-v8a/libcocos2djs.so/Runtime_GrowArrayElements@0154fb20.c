
/* v8::internal::Runtime_GrowArrayElements(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_GrowArrayElements(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_0154fcc0(param_1,param_2,param_3);
    return uVar5;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) == 0) ||
     (uVar6 = uVar5 & 0xffffffff00000000,
     *(ushort *)((uVar6 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0xaa)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSObject()");
  }
  uVar7 = param_2[-1];
  if ((uVar7 & 1) == 0) {
    if (-1 < (int)uVar7) {
      uVar4 = (int)uVar7 >> 1;
      goto LAB_0154fbd8;
    }
  }
  else {
    if (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","key->IsHeapNumber()");
    }
    dVar8 = *(double *)(uVar7 + 3);
    uVar7 = 0;
    if ((dVar8 < 0.0) || (4294967295.0 < dVar8)) goto LAB_0154fc3c;
    uVar4 = (uint)dVar8;
LAB_0154fbd8:
    uVar7 = uVar6 | *(uint *)(uVar5 + 7);
    if (uVar4 < (uint)(*(int *)(uVar7 + 3) >> 1)) goto LAB_0154fc3c;
    plVar3 = *(long **)(ElementsAccessor::elements_accessors_ +
                       ((ulong)*(byte *)((uVar6 | 10) + (ulong)*(uint *)(uVar5 - 1)) & 0xf8));
    uVar5 = (**(code **)(*plVar3 + 0x78))(plVar3,param_2);
    if ((uVar5 & 1) != 0) {
      uVar7 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7);
      goto LAB_0154fc3c;
    }
  }
  uVar7 = 0;
LAB_0154fc3c:
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar7;
}

