
/* v8::internal::Runtime_TransitionElementsKind(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_TransitionElementsKind(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_0154e9dc(param_1,param_2,param_3);
    return uVar4;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *param_2;
  if (((uVar4 & 1) != 0) &&
     (0xa9 < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)))) {
    uVar4 = param_2[-1];
    if (((uVar4 & 1) != 0) &&
       (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0xa2)) {
      plVar3 = *(long **)(ElementsAccessor::elements_accessors_ +
                         ((ulong)*(byte *)(uVar4 + 10) & 0xf8));
      (**(code **)(*plVar3 + 0x68))(plVar3,param_2);
      uVar4 = *param_2;
      *(undefined8 *)(param_3 + 0x95a0) = uVar1;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar2) {
        *(long *)(param_3 + 0x95a8) = lVar2;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar4;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsMap()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSObject()");
}

