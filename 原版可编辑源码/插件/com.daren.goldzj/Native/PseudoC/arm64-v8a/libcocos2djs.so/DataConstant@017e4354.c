
/* WARNING: Removing unreachable block (ram,0x017e4480) */
/* v8::internal::compiler::PropertyAccessInfo::DataConstant(v8::internal::Zone*,
   v8::internal::Handle<v8::internal::Map>,
   v8::internal::ZoneVector<v8::internal::compiler::CompilationDependency const*>&&,
   v8::internal::FieldIndex, v8::internal::Representation, v8::internal::compiler::Type,
   v8::internal::Handle<v8::internal::Map>, v8::internal::MaybeHandle<v8::internal::Map>,
   v8::internal::MaybeHandle<v8::internal::JSObject>, v8::internal::MaybeHandle<v8::internal::Map>)
    */

void __thiscall
v8::internal::compiler::PropertyAccessInfo::DataConstant
          (undefined4 *param_1_00,PropertyAccessInfo *this,undefined8 param_1,undefined8 *param_4,
          undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)puVar1) < 8) {
    puVar1 = (undefined8 *)Zone::NewExpand((Zone *)this,8);
  }
  else {
    *(undefined8 **)(this + 0x10) = puVar1 + 1;
  }
  *puVar1 = param_1;
  *(undefined8 *)(param_1_00 + 2) = 0;
  *(undefined8 *)(param_1_00 + 4) = 0;
  *param_1_00 = 3;
  *(undefined8 *)(param_1_00 + 6) = 0;
  *(PropertyAccessInfo **)(param_1_00 + 8) = this;
  puVar2 = *(undefined8 **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)puVar2) < 8) {
    puVar2 = (undefined8 *)Zone::NewExpand((Zone *)this,8);
  }
  else {
    *(undefined8 **)(this + 0x10) = puVar2 + 1;
  }
  *(undefined8 **)(param_1_00 + 2) = puVar2;
  *(undefined8 **)(param_1_00 + 4) = puVar2;
  *(undefined8 **)(param_1_00 + 6) = puVar2 + 1;
  *puVar2 = *puVar1;
  *(long *)(param_1_00 + 4) = *(long *)(param_1_00 + 4) + 8;
  uVar3 = *param_4;
  *(undefined8 *)(param_1_00 + 0xc) = param_4[1];
  *(undefined8 *)(param_1_00 + 10) = uVar3;
  uVar3 = param_4[2];
  *(undefined8 *)(param_1_00 + 0x10) = param_4[3];
  *(undefined8 *)(param_1_00 + 0xe) = uVar3;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  *(undefined8 *)(param_1_00 + 0x12) = 0;
  *(undefined8 *)(param_1_00 + 0x14) = param_11;
  *(undefined8 *)(param_1_00 + 0x16) = param_10;
  *(undefined8 *)(param_1_00 + 0x18) = param_5;
  *(undefined1 *)(param_1_00 + 0x1a) = param_6;
  *(undefined8 *)(param_1_00 + 0x1c) = param_7;
  *(undefined8 *)(param_1_00 + 0x1e) = param_8;
  *(undefined8 *)(param_1_00 + 0x20) = param_9;
  return;
}

