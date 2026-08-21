
/* v8::internal::compiler::CompilationDependencies::DependOnProtector(v8::internal::compiler::PropertyCellRef
   const&) */

undefined8 __thiscall
v8::internal::compiler::CompilationDependencies::DependOnProtector
          (CompilationDependencies *this,PropertyCellRef *param_1)

{
  int iVar1;
  Zone *pZVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ObjectRef local_40 [16];
  
  local_40 = (ObjectRef  [16])PropertyCellRef::value(param_1);
  iVar1 = ObjectRef::AsSmi(local_40);
  if (iVar1 == 1) {
    pZVar2 = *(Zone **)this;
    puVar4 = *(undefined8 **)(pZVar2 + 0x10);
    if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)puVar4) < 0x18) {
      puVar4 = (undefined8 *)Zone::NewExpand(pZVar2,0x18);
    }
    else {
      *(undefined8 **)(pZVar2 + 0x10) = puVar4 + 3;
    }
    *puVar4 = &PTR_IsValid_01cccd18;
    uVar3 = *(undefined8 *)param_1;
    puVar4[2] = *(undefined8 *)(param_1 + 8);
    puVar4[1] = uVar3;
    if (puVar4 != (undefined8 *)0x0) {
      pZVar2 = *(Zone **)(this + 0x18);
      puVar5 = *(undefined8 **)(pZVar2 + 0x10);
      if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)puVar5) < 0x10) {
        puVar5 = (undefined8 *)Zone::NewExpand(pZVar2,0x10);
      }
      else {
        *(undefined8 **)(pZVar2 + 0x10) = puVar5 + 2;
      }
      puVar5[1] = puVar4;
      *puVar5 = *(undefined8 *)(this + 0x10);
      *(undefined8 **)(this + 0x10) = puVar5;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

