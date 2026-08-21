
/* v8::internal::compiler::CompilationDependencies::DependOnFieldType(v8::internal::compiler::MapRef
   const&, v8::internal::InternalIndex) */

void __thiscall
v8::internal::compiler::CompilationDependencies::DependOnFieldType
          (CompilationDependencies *this,MapRef *param_1,undefined8 param_3)

{
  Zone *pZVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  MapRef local_50 [16];
  
  local_50 = (MapRef  [16])MapRef::FindFieldOwner(param_1,param_3);
  auVar4 = MapRef::GetFieldType(local_50,param_3);
  pZVar1 = *(Zone **)this;
  puVar2 = *(undefined8 **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar2) < 0x30) {
    puVar2 = (undefined8 *)Zone::NewExpand(pZVar1,0x30);
  }
  else {
    *(undefined8 **)(pZVar1 + 0x10) = puVar2 + 6;
  }
  *puVar2 = &PTR_IsValid_01cccde0;
  puVar2[3] = param_3;
  *(undefined1 (*) [16])(puVar2 + 4) = auVar4;
  *(MapRef (*) [16])(puVar2 + 1) = local_50;
  if (puVar2 != (undefined8 *)0x0) {
    pZVar1 = *(Zone **)(this + 0x18);
    puVar3 = *(undefined8 **)(pZVar1 + 0x10);
    if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar3) < 0x10) {
      puVar3 = (undefined8 *)Zone::NewExpand(pZVar1,0x10);
    }
    else {
      *(undefined8 **)(pZVar1 + 0x10) = puVar3 + 2;
    }
    puVar3[1] = puVar2;
    *puVar3 = *(undefined8 *)(this + 0x10);
    *(undefined8 **)(this + 0x10) = puVar3;
  }
  return;
}

