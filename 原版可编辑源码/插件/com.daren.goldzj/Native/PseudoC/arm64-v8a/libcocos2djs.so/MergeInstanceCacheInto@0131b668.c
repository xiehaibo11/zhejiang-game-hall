
/* v8::internal::compiler::WasmGraphBuilder::MergeInstanceCacheInto(v8::internal::compiler::WasmInstanceCacheNodes*,
   v8::internal::compiler::WasmInstanceCacheNodes*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::MergeInstanceCacheInto
          (WasmGraphBuilder *this,WasmInstanceCacheNodes *param_1,WasmInstanceCacheNodes *param_2,
          Node *param_3)

{
  undefined8 uVar1;
  
  uVar1 = CreateOrMergeIntoPhi
                    (this,5,param_3,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = CreateOrMergeIntoPhi(this,5,param_3,*(undefined8 *)param_1,*(undefined8 *)param_2);
  *(undefined8 *)param_1 = uVar1;
  if (this[0x62] != (WasmGraphBuilder)0x0) {
    uVar1 = CreateOrMergeIntoPhi
                      (this,5,param_3,*(undefined8 *)(param_1 + 0x10),
                       *(undefined8 *)(param_2 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = uVar1;
  }
  return;
}

