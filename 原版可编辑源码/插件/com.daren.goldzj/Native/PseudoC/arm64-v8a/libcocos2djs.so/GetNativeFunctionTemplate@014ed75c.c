
/* v8::internal::ExternalizeStringExtension::GetNativeFunctionTemplate(v8::Isolate*,
   v8::Local<v8::String>) */

void v8::internal::ExternalizeStringExtension::GetNativeFunctionTemplate
               (undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  char *local_48 [2];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  v8::String::Utf8Value::Utf8Value((Utf8Value *)local_48);
  iVar3 = strcmp(local_48[0],"externalizeString");
  v8::String::Utf8Value::~Utf8Value((Utf8Value *)local_48);
  pcVar1 = Externalize;
  if (iVar3 != 0) {
    pcVar1 = IsOneByte;
  }
  FunctionTemplate::New(param_2,pcVar1,0,0,0,1,0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

