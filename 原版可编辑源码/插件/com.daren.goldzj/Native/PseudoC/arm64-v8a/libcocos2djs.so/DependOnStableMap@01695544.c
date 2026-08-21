
/* v8::internal::compiler::CompilationDependencies::DependOnStableMap(v8::internal::compiler::MapRef
   const&) */

void __thiscall
v8::internal::compiler::CompilationDependencies::DependOnStableMap
          (CompilationDependencies *this,MapRef *param_1)

{
  ulong uVar1;
  Zone *pZVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar1 = MapRef::CanTransition((MapRef *)param_1);
  if ((uVar1 & 1) != 0) {
    pZVar2 = *(Zone **)this;
    puVar3 = *(undefined8 **)(pZVar2 + 0x10);
    if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)puVar3) < 0x18) {
      puVar3 = (undefined8 *)Zone::NewExpand(pZVar2,0x18);
    }
    else {
      *(undefined8 **)(pZVar2 + 0x10) = puVar3 + 3;
    }
    *puVar3 = &PTR_IsValid_01cccc78;
    uVar5 = *(undefined8 *)param_1;
    puVar3[2] = *(undefined8 *)(param_1 + 8);
    puVar3[1] = uVar5;
    if (puVar3 != (undefined8 *)0x0) {
      pZVar2 = *(Zone **)(this + 0x18);
      puVar4 = *(undefined8 **)(pZVar2 + 0x10);
      if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)puVar4) < 0x10) {
        puVar4 = (undefined8 *)Zone::NewExpand(pZVar2,0x10);
      }
      else {
        *(undefined8 **)(pZVar2 + 0x10) = puVar4 + 2;
      }
      puVar4[1] = puVar3;
      *puVar4 = *(undefined8 *)(this + 0x10);
      *(undefined8 **)(this + 0x10) = puVar4;
    }
  }
  return;
}

