
/* v8::internal::compiler::CompilationDependencies::DependOnGlobalProperty(v8::internal::compiler::PropertyCellRef
   const&) */

void __thiscall
v8::internal::compiler::CompilationDependencies::DependOnGlobalProperty
          (CompilationDependencies *this,PropertyCellRef *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  Zone *pZVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = PropertyCellRef::property_details(param_1);
  uVar2 = PropertyCellRef::property_details(param_1);
  pZVar5 = *(Zone **)this;
  puVar3 = *(undefined8 **)(pZVar5 + 0x10);
  if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar3) < 0x20) {
    puVar3 = (undefined8 *)Zone::NewExpand(pZVar5,0x20);
  }
  else {
    *(undefined8 **)(pZVar5 + 0x10) = puVar3 + 4;
  }
  *puVar3 = &PTR_IsValid_01ccccf0;
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)param_1;
  *(uint *)(puVar3 + 3) = uVar1 >> 6 & 3;
  *(byte *)((long)puVar3 + 0x1c) = (byte)(uVar2 >> 3) & 1;
  puVar3[2] = uVar7;
  puVar3[1] = uVar6;
  if (puVar3 != (undefined8 *)0x0) {
    pZVar5 = *(Zone **)(this + 0x18);
    puVar4 = *(undefined8 **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar4) < 0x10) {
      puVar4 = (undefined8 *)Zone::NewExpand(pZVar5,0x10);
    }
    else {
      *(undefined8 **)(pZVar5 + 0x10) = puVar4 + 2;
    }
    puVar4[1] = puVar3;
    *puVar4 = *(undefined8 *)(this + 0x10);
    *(undefined8 **)(this + 0x10) = puVar4;
  }
  return;
}

