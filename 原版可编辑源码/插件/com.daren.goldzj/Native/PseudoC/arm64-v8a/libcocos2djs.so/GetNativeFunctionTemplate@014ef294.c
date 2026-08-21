
/* v8::internal::TriggerFailureExtension::GetNativeFunctionTemplate(v8::Isolate*,
   v8::Local<v8::String>) */

void __thiscall
v8::internal::TriggerFailureExtension::GetNativeFunctionTemplate
          (undefined8 param_1_00,undefined8 param_1,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  char *local_48 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  v8::String::Utf8Value::Utf8Value((Utf8Value *)local_48);
  iVar2 = strcmp(local_48[0],"triggerCheckFalse");
  v8::String::Utf8Value::~Utf8Value((Utf8Value *)local_48);
  if (iVar2 == 0) {
    pcVar3 = TriggerCheckFalse;
  }
  else {
    v8::String::Utf8Value::Utf8Value((Utf8Value *)local_48,param_1,param_3);
    iVar2 = strcmp(local_48[0],"triggerAssertFalse");
    v8::String::Utf8Value::~Utf8Value((Utf8Value *)local_48);
    if (iVar2 == 0) {
      pcVar3 = TriggerAssertFalse;
    }
    else {
      v8::String::Utf8Value::Utf8Value((Utf8Value *)local_48,param_1,param_3);
      iVar2 = strcmp(local_48[0],"triggerSlowAssertFalse");
      v8::String::Utf8Value::~Utf8Value((Utf8Value *)local_48);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "0 == strcmp(*v8::String::Utf8Value(isolate, str), \"triggerSlowAssertFalse\")");
      }
      pcVar3 = TriggerSlowAssertFalse;
    }
  }
  FunctionTemplate::New(param_1,pcVar3,0,0,0,1,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

