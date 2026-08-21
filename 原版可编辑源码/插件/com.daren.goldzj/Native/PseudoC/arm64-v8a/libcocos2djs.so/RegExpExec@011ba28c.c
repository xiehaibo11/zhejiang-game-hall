
/* v8::internal::RegExpUtils::RegExpExec(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSReceiver>, v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object>) */

ulong * v8::internal::RegExpUtils::RegExpExec
                  (Isolate *param_1,ulong *param_2,undefined8 param_3,ulong *param_4)

{
  ulong *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  char *local_50;
  undefined8 uStack_48;
  
  uVar6 = *param_4;
  if ((uVar6 & 1) != 0) {
    if ((int)uVar6 == *(int *)(param_1 + 0xa0)) {
      param_4 = (ulong *)Object::GetProperty(param_1,param_2,param_1 + 0x6a0);
      if (param_4 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      uVar6 = *param_4;
      if ((uVar6 & 1) == 0) goto LAB_011ba2fc;
    }
    if ((*(byte *)((uVar6 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar6 - 1)) >> 1 & 1) != 0) {
      puVar4 = operator_new__(8,(nothrow_t *)&std::nothrow);
      if (puVar4 != (undefined8 *)0x0) {
LAB_011ba3fc:
        *puVar4 = param_3;
        puVar1 = (ulong *)Execution::Call(param_1,param_4,param_2,1,puVar4);
        if (puVar1 != (ulong *)0x0) {
          uVar6 = *puVar1;
          if (((uVar6 & 1) == 0) ||
             ((*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0xa9 &&
              ((int)uVar6 != *(int *)(param_1 + 0xb0))))) {
            puVar3 = (undefined8 *)Factory::NewTypeError((Factory *)param_1,0x41,0,0,0);
            Isolate::Throw(param_1,*puVar3,0);
            puVar1 = (ulong *)0x0;
          }
        }
        operator_delete__(puVar4);
        return puVar1;
      }
      plVar5 = (long *)V8::GetCurrentPlatform();
      (**(code **)(*plVar5 + 0x18))();
      puVar4 = operator_new__(8,(nothrow_t *)&std::nothrow);
      if (puVar4 != (undefined8 *)0x0) goto LAB_011ba3fc;
      goto LAB_011ba548;
    }
  }
LAB_011ba2fc:
  if (*(short *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) != 0x42e) {
    uStack_48 = __strlen_chk("RegExp.prototype.exec",0x16);
    local_50 = "RegExp.prototype.exec";
    lVar2 = Factory::NewStringFromOneByte(param_1,&local_50,0);
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)Factory::NewTypeError((Factory *)param_1,0x3d,lVar2,param_2,0);
      Isolate::Throw(param_1,*puVar4,0);
      return (ulong *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  uVar6 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                              + 0x13)) + 0x23f);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar6;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
  }
  puVar4 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar4 == (undefined8 *)0x0) {
    plVar5 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar5 + 0x18))();
    puVar4 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar4 == (undefined8 *)0x0) {
LAB_011ba548:
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  *puVar4 = param_3;
  puVar1 = (ulong *)Execution::Call(param_1,puVar1,param_2,1,puVar4);
  operator_delete__(puVar4);
  return puVar1;
}

