
/* v8::internal::compiler::CompilationDependencies::FieldTypeDependencyOffTheRecord(v8::internal::compiler::MapRef
   const&, v8::internal::InternalIndex) const */

void __thiscall
v8::internal::compiler::CompilationDependencies::FieldTypeDependencyOffTheRecord
          (CompilationDependencies *this,MapRef *param_1,undefined8 param_3)

{
  undefined8 *puVar1;
  Zone *this_00;
  undefined1 auVar2 [16];
  MapRef local_40 [16];
  
  local_40 = (MapRef  [16])MapRef::FindFieldOwner(param_1,param_3);
  auVar2 = MapRef::GetFieldType(local_40,param_3);
  this_00 = *(Zone **)this;
  puVar1 = *(undefined8 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar1) < 0x30) {
    puVar1 = (undefined8 *)Zone::NewExpand(this_00,0x30);
  }
  else {
    *(undefined8 **)(this_00 + 0x10) = puVar1 + 6;
  }
  *puVar1 = &PTR_IsValid_01cccde0;
  puVar1[3] = param_3;
  *(undefined1 (*) [16])(puVar1 + 4) = auVar2;
  *(MapRef (*) [16])(puVar1 + 1) = local_40;
  return;
}

