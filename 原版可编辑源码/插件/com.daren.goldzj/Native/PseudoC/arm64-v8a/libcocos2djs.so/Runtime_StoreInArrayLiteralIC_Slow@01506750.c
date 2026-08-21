
/* v8::internal::Runtime_StoreInArrayLiteralIC_Slow(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_StoreInArrayLiteralIC_Slow(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  LookupIterator aLStack_a0 [92];
  undefined1 local_44 [4];
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_0150686c(param_1,param_2,param_3);
    return uVar4;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  local_44[0] = 0;
  LookupIterator::PropertyOrElement(aLStack_a0,param_3,param_2 + -1,param_2 + -2,local_44,1);
  uVar3 = JSObject::DefineOwnPropertyIgnoreAttributes(aLStack_a0,param_2,0,1,1);
  if ((uVar3 & 0xff) == 0) {
    v8::V8::FromJustIsNothing();
  }
  if (0xff < uVar3) {
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
  V8_Fatal("Check failed: %s.",
           "JSObject::DefineOwnPropertyIgnoreAttributes( &it, value, NONE, Just(ShouldThrow::kThrowOnError)) .FromJust()"
          );
}

