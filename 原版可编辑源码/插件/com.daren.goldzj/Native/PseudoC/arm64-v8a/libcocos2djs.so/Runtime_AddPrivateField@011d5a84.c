
/* v8::internal::Runtime_AddPrivateField(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_AddPrivateField(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  LookupIterator aLStack_98 [4];
  int local_94;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_011d5c40(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) != 0) &&
     (0xa8 < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)))) {
    puVar7 = param_2 + -1;
    uVar5 = *puVar7;
    if (((uVar5 & 1) == 0) ||
       (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x40)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsSymbol()");
    }
    LookupIterator::PropertyOrElement(aLStack_98,param_3,param_2,puVar7,1);
    if (local_94 == 4) {
      uVar2 = Object::AddDataProperty(aLStack_98,param_2 + -2,0,0x100000001,0);
      if ((uVar2 & 0xff) == 0) {
        v8::V8::FromJustIsNothing();
      }
      if (uVar2 < 0x100) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "Object::AddDataProperty(&it, value, NONE, Just(kDontThrow), StoreOrigin::kMaybeKeyed) .FromJust()"
                );
      }
      uVar6 = *(undefined8 *)(param_3 + 0xa0);
    }
    else {
      puVar3 = (undefined8 *)Factory::NewTypeError((Factory *)param_3,0xb0,puVar7,0,0);
      uVar6 = Isolate::Throw(param_3,*puVar3,0);
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
}

