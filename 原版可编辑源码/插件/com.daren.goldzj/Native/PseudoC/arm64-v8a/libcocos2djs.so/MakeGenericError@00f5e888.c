
/* v8::internal::ErrorUtils::MakeGenericError(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSFunction>, v8::internal::MessageTemplate,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::FrameSkipMode) */

void v8::internal::ErrorUtils::MakeGenericError
               (Factory *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  char *local_70;
  undefined8 uStack_68;
  
  if (FLAG_clear_exceptions_on_js_entry != '\0') {
    *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
  }
  if (FLAG_correctness_fuzzer_suppressions == '\0') {
    uVar2 = Object::NoSideEffectsToString(param_1,param_4);
    uVar3 = Object::NoSideEffectsToString(param_1,param_5);
    uVar4 = Object::NoSideEffectsToString(param_1,param_6);
    uVar6 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    local_70 = (char *)(uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) +
                                         0x13));
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(param_1 + 0x95a0);
      if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend((Isolate *)param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
      *puVar5 = (ulong)local_70;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),(ulong)local_70);
      local_70 = (char *)*puVar5;
    }
    NativeContext::IncrementErrorsThrown((NativeContext *)&local_70);
    lVar1 = MessageFormatter::Format(param_1,param_3,uVar2,uVar3,uVar4);
    if (lVar1 == 0) {
      *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
      param_1[0x2c19] = (Factory)0x0;
      uStack_68 = __strlen_chk("<error>",8);
      local_70 = "<error>";
      lVar1 = Factory::NewStringFromOneByte(param_1,&local_70,0);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
    }
  }
  else {
    uStack_68 = __strlen_chk("Message suppressed for fuzzers (--correctness-fuzzer-suppressions)",
                             0x43);
    local_70 = "Message suppressed for fuzzers (--correctness-fuzzer-suppressions)";
    lVar1 = Factory::InternalizeUtf8String(param_1,(Vector *)&local_70);
  }
  Construct(param_1,param_2,param_2,lVar1,param_7,0,0);
  return;
}

