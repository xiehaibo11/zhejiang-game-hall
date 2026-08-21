
/* v8::internal::compiler::CompilationDependencies::DependOnPretenureMode(v8::internal::compiler::AllocationSiteRef
   const&) */

undefined4 __thiscall
v8::internal::compiler::CompilationDependencies::DependOnPretenureMode
          (CompilationDependencies *this,AllocationSiteRef *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Zone *pZVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = AllocationSiteRef::GetAllocationType(param_1);
  pZVar4 = *(Zone **)this;
  puVar2 = *(undefined8 **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar2) < 0x20) {
    puVar2 = (undefined8 *)Zone::NewExpand(pZVar4,0x20);
  }
  else {
    *(undefined8 **)(pZVar4 + 0x10) = puVar2 + 4;
  }
  *puVar2 = &PTR_IsValid_01cccca0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)param_1;
  *(char *)(puVar2 + 3) = (char)uVar1;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
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
  return uVar1;
}

