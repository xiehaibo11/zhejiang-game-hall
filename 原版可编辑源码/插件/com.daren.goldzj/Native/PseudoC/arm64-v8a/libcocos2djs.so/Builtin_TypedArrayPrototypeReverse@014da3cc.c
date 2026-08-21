
/* v8::internal::Builtin_TypedArrayPrototypeReverse(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Builtin_TypedArrayPrototypeReverse(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  Isolate *pIVar3;
  ulong uVar4;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x95a0);
    lVar2 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    pIVar3 = (Isolate *)JSTypedArray::Validate(param_3,param_2,"%TypedArray%.prototype.reverse");
    if (pIVar3 == (Isolate *)0x0) {
      pIVar3 = param_3 + 0x180;
    }
    else {
      (**(code **)(**(long **)(ElementsAccessor::elements_accessors_ +
                              ((ulong)*(byte *)((*(ulong *)pIVar3 & 0xffffffff00000000 | 10) +
                                               (ulong)*(uint *)(*(ulong *)pIVar3 - 1)) & 0xf8)) +
                  0xe0))();
    }
    uVar4 = *(ulong *)pIVar3;
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar4;
  }
  uVar4 = FUN_014da4c0(param_1,param_2,param_3);
  return uVar4;
}

