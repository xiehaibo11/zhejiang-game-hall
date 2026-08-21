
/* v8::internal::compiler::CompilationDependencies::FieldRepresentationDependencyOffTheRecord(v8::internal::compiler::MapRef
   const&, v8::internal::InternalIndex) const */

undefined8 * __thiscall
v8::internal::compiler::CompilationDependencies::FieldRepresentationDependencyOffTheRecord
          (CompilationDependencies *this,MapRef *param_1,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  Zone *this_00;
  MapRef local_30 [16];
  
  local_30 = (MapRef  [16])MapRef::FindFieldOwner(param_1,param_3);
  uVar1 = MapRef::GetPropertyDetails(local_30,param_3);
  this_00 = *(Zone **)this;
  puVar2 = *(undefined8 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar2) < 0x28) {
    puVar2 = (undefined8 *)Zone::NewExpand(this_00,0x28);
  }
  else {
    *(undefined8 **)(this_00 + 0x10) = puVar2 + 5;
  }
  *puVar2 = &PTR_IsValid_01cccdb8;
  puVar2[3] = param_3;
  *(byte *)(puVar2 + 4) = (byte)(uVar1 >> 6) & 7;
  *(MapRef (*) [16])(puVar2 + 1) = local_30;
  return puVar2;
}

