
/* v8::internal::compiler::CodeAssembler::CallStubRImpl(v8::internal::StubCallMode,
   v8::internal::CallInterfaceDescriptor const&, unsigned long,
   v8::internal::TNode<v8::internal::Object>, v8::internal::TNode<v8::internal::Object>,
   std::initializer_list<v8::internal::compiler::Node*>) */

void v8::internal::compiler::CodeAssembler::CallStubRImpl
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 *param_7,long param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_70;
  undefined8 local_68 [10];
  undefined8 *local_18;
  
  local_18 = &local_70;
  if (param_8 != 0) {
    local_70 = *param_7;
    local_18 = local_68;
    if (param_8 != 1) {
      lVar2 = param_8 * 8 + -8;
      do {
        param_7 = param_7 + 1;
        lVar2 = lVar2 + -8;
        puVar1 = local_18 + 1;
        *local_18 = *param_7;
        local_18 = puVar1;
      } while (lVar2 != 0);
    }
  }
  if ((*(byte *)(*(long *)(param_3 + 8) + 0xc) & 1) == 0) {
    puVar1 = local_18 + 1;
    *local_18 = param_6;
    local_18 = puVar1;
  }
  CallStubN();
  return;
}

