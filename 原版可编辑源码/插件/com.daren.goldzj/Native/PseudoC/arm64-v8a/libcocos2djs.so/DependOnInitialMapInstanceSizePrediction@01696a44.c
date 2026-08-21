
/* v8::internal::compiler::CompilationDependencies::DependOnInitialMapInstanceSizePrediction(v8::internal::compiler::JSFunctionRef
   const&) */

undefined8 __thiscall
v8::internal::compiler::CompilationDependencies::DependOnInitialMapInstanceSizePrediction
          (CompilationDependencies *this,JSFunctionRef *param_1)

{
  int iVar1;
  int iVar2;
  Zone *pZVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  MapRef local_50 [16];
  
  auVar8 = JSFunctionRef::initial_map(param_1);
  pZVar3 = *(Zone **)this;
  puVar4 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar4) < 0x28) {
    puVar4 = (undefined8 *)Zone::NewExpand(pZVar3,0x28);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar4 + 5;
  }
  *puVar4 = &PTR_IsValid_01cccc28;
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)param_1;
  *(undefined1 (*) [16])(puVar4 + 3) = auVar8;
  puVar4[2] = uVar7;
  puVar4[1] = uVar6;
  if (puVar4 != (undefined8 *)0x0) {
    pZVar3 = *(Zone **)(this + 0x18);
    puVar5 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar5) < 0x10) {
      puVar5 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar5 + 2;
    }
    puVar5[1] = puVar4;
    *puVar5 = *(undefined8 *)(this + 0x10);
    *(undefined8 **)(this + 0x10) = puVar5;
  }
  iVar1 = JSFunctionRef::InitialMapInstanceSizeWithMinSlack(param_1);
  pZVar3 = *(Zone **)this;
  puVar4 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar4) < 0x20) {
    puVar4 = (undefined8 *)Zone::NewExpand(pZVar3,0x20);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar4 + 4;
  }
  *puVar4 = &PTR_IsValid_01cccd68;
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)param_1;
  *(int *)(puVar4 + 3) = iVar1;
  puVar4[2] = uVar7;
  puVar4[1] = uVar6;
  if (puVar4 != (undefined8 *)0x0) {
    pZVar3 = *(Zone **)(this + 0x18);
    puVar5 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar5) < 0x10) {
      puVar5 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar5 + 2;
    }
    puVar5[1] = puVar4;
    *puVar5 = *(undefined8 *)(this + 0x10);
    *(undefined8 **)(this + 0x10) = puVar5;
  }
  local_50 = (MapRef  [16])auVar8;
  iVar2 = MapRef::GetInObjectPropertiesStartInWords(local_50);
  return CONCAT44((iVar1 >> 2) - iVar2,iVar1);
}

