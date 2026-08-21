
/* v8::internal::compiler::CompilationDependencies::DependOnPrototypeProperty(v8::internal::compiler::JSFunctionRef
   const&) */

undefined1  [16] __thiscall
v8::internal::compiler::CompilationDependencies::DependOnPrototypeProperty
          (CompilationDependencies *this,JSFunctionRef *param_1)

{
  Zone *pZVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  auVar6 = JSFunctionRef::prototype(param_1);
  pZVar1 = *(Zone **)this;
  puVar2 = *(undefined8 **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar2) < 0x28) {
    puVar2 = (undefined8 *)Zone::NewExpand(pZVar1,0x28);
  }
  else {
    *(undefined8 **)(pZVar1 + 0x10) = puVar2 + 5;
  }
  *puVar2 = &PTR_IsValid_01cccc50;
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)param_1;
  *(undefined1 (*) [16])(puVar2 + 3) = auVar6;
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
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
  return auVar6;
}

