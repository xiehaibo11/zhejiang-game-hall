
/* v8::internal::V8HeapExplorer::TagBuiltinCodeObject(v8::internal::Code, char const*) */

void v8::internal::V8HeapExplorer::TagBuiltinCodeObject(V8HeapExplorer *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = StringsStorage::GetFormatted(*(char **)(param_1 + 0x18),"(%s builtin)");
  TagObject(param_1,param_2,uVar1);
  return;
}

