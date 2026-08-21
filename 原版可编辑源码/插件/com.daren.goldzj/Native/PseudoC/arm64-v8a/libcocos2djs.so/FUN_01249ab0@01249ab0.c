
void FUN_01249ab0(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  Isolate *pIVar6;
  char *local_50;
  undefined8 uStack_48;
  
  pIVar6 = *(Isolate **)(param_1 + 8);
  uVar5 = *(ulong *)(pIVar6 + 0x2bc8) & 0xffffffff00000000;
  uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(pIVar6 + 0x2bc8) - 1))
                                              + 0x13)) + 499);
  if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar6 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar6 + 0x95a8)) {
      puVar1 = (ulong *)v8::internal::HandleScope::Extend(pIVar6);
    }
    *(ulong **)(pIVar6 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar5;
  }
  else {
    puVar1 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar5);
  }
  uVar2 = v8::internal::Factory::NewJSObject((Factory *)pIVar6,puVar1,0);
  local_50 = "instance";
  uStack_48 = 8;
  lVar3 = v8::internal::Factory::NewStringFromOneByte(*(undefined8 *)(param_1 + 8),&local_50,0);
  if (lVar3 != 0) {
    local_50 = "module";
    uStack_48 = 6;
    lVar4 = v8::internal::Factory::NewStringFromOneByte(*(undefined8 *)(param_1 + 8),&local_50,0);
    if (lVar4 != 0) {
      v8::internal::JSObject::AddProperty(*(undefined8 *)(param_1 + 8),uVar2,lVar3,param_2,0);
      v8::internal::JSObject::AddProperty
                (*(undefined8 *)(param_1 + 8),uVar2,lVar4,*(undefined8 *)(param_1 + 0x18),0);
      lVar3 = v8::internal::JSPromise::Resolve(*(undefined8 *)(param_1 + 0x10),uVar2);
      uVar5 = *(ulong *)(*(long *)(param_1 + 8) + 0x2bd8);
      if ((uVar5 & 1) == 0) {
        if (lVar3 != 0) {
LAB_01249c20:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.",
                   "promise_result.is_null() == isolate_->has_pending_exception()");
        }
      }
      else if ((lVar3 != 0) == ((int)uVar5 != *(int *)(*(long *)(param_1 + 8) + 0xa8)))
      goto LAB_01249c20;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

