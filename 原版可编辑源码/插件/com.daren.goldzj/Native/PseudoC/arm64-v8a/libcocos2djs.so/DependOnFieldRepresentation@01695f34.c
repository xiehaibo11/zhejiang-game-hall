
/* v8::internal::compiler::CompilationDependencies::DependOnFieldRepresentation(v8::internal::compiler::MapRef
   const&, v8::internal::InternalIndex) */

void __thiscall
v8::internal::compiler::CompilationDependencies::DependOnFieldRepresentation
          (CompilationDependencies *this,MapRef *param_1,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Zone *pZVar4;
  MapRef local_40 [16];
  
  local_40 = (MapRef  [16])MapRef::FindFieldOwner(param_1,param_3);
  uVar1 = MapRef::GetPropertyDetails(local_40,param_3);
  pZVar4 = *(Zone **)this;
  puVar2 = *(undefined8 **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar2) < 0x28) {
    puVar2 = (undefined8 *)Zone::NewExpand(pZVar4,0x28);
  }
  else {
    *(undefined8 **)(pZVar4 + 0x10) = puVar2 + 5;
  }
  *puVar2 = &PTR_IsValid_01cccdb8;
  puVar2[3] = param_3;
  *(byte *)(puVar2 + 4) = (byte)(uVar1 >> 6) & 7;
  *(MapRef (*) [16])(puVar2 + 1) = local_40;
  if (puVar2 != (undefined8 *)0x0) {
    pZVar4 = *(Zone **)(this + 0x18);
    puVar3 = *(undefined8 **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar3) < 0x10) {
      puVar3 = (undefined8 *)Zone::NewExpand(pZVar4,0x10);
    }
    else {
      *(undefined8 **)(pZVar4 + 0x10) = puVar3 + 2;
    }
    puVar3[1] = puVar2;
    *puVar3 = *(undefined8 *)(this + 0x10);
    *(undefined8 **)(this + 0x10) = puVar3;
  }
  return;
}

