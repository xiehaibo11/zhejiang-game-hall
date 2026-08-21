
/* v8::internal::Runtime_AddPrivateBrand(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_AddPrivateBrand(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ushort uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  LookupIterator aLStack_98 [4];
  int local_94;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_011d579c(param_1,param_2,param_3);
    return uVar5;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) != 0) &&
     (0xa8 < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)))) {
    puVar6 = param_2 + -1;
    uVar5 = *puVar6;
    if (((uVar5 & 1) == 0) ||
       (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x40)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsSymbol()");
    }
    LookupIterator::PropertyOrElement(aLStack_98,param_3,param_2,puVar6,1);
    if (local_94 == 4) {
      uVar3 = Object::AddDataProperty(aLStack_98,puVar6,7,0x100000001,0);
      if ((uVar3 & 0xff) == 0) {
        v8::V8::FromJustIsNothing();
      }
      if (uVar3 < 0x100) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "Object::AddDataProperty(&it, brand, attributes, Just(kDontThrow), StoreOrigin::kMaybeKeyed) .FromJust()"
                );
      }
      uVar5 = *param_2;
    }
    else {
      puVar4 = (undefined8 *)Factory::NewTypeError((Factory *)param_3,0xb0,puVar6,0,0);
      uVar5 = Isolate::Throw(param_3,*puVar4,0);
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
}

