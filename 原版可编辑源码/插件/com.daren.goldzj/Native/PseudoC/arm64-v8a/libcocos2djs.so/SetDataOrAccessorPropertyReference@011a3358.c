
/* v8::internal::V8HeapExplorer::SetDataOrAccessorPropertyReference(v8::internal::PropertyKind,
   v8::internal::HeapEntry*, v8::internal::Name, v8::internal::Object, char const*, int) */

void __thiscall
v8::internal::V8HeapExplorer::SetDataOrAccessorPropertyReference
          (V8HeapExplorer *this,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6,undefined4 param_7)

{
  if (param_2 == 1) {
    ExtractAccessorPairProperty(this,param_3,param_4,param_5,param_7);
    return;
  }
  SetPropertyReference(this,param_3,param_4,param_5,param_6,param_7);
  return;
}

