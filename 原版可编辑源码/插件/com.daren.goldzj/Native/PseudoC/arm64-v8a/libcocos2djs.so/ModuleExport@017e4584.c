
/* WARNING: Removing unreachable block (ram,0x017e467c) */
/* v8::internal::compiler::PropertyAccessInfo::ModuleExport(v8::internal::Zone*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Handle<v8::internal::Cell>) */

void __thiscall
v8::internal::compiler::PropertyAccessInfo::ModuleExport
          (undefined4 *param_1_00,PropertyAccessInfo *this,undefined8 param_1,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
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
  *param_1_00 = 5;
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
  *(undefined8 *)(param_1_00 + 10) = 0;
  *(undefined8 *)(param_1_00 + 0xc) = 0;
  *(undefined8 *)(param_1_00 + 0xe) = 0;
  *(PropertyAccessInfo **)(param_1_00 + 0x10) = this;
  *(undefined8 *)(param_1_00 + 0x12) = param_4;
  *(undefined8 *)(param_1_00 + 0x14) = 0;
  *(undefined8 *)(param_1_00 + 0x16) = 0;
  *(undefined8 *)(param_1_00 + 0x18) = 0;
  *(undefined1 *)(param_1_00 + 0x1a) = 0;
  *(undefined8 *)(param_1_00 + 0x1e) = 0;
  *(undefined8 *)(param_1_00 + 0x20) = 0;
  *(undefined8 *)(param_1_00 + 0x1c) = 0xffffffff;
  return;
}

