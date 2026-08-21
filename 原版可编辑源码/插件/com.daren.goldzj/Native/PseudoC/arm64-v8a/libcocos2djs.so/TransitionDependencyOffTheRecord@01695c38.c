
/* v8::internal::compiler::CompilationDependencies::TransitionDependencyOffTheRecord(v8::internal::compiler::MapRef
   const&) const */

undefined8 * __thiscall
v8::internal::compiler::CompilationDependencies::TransitionDependencyOffTheRecord
          (CompilationDependencies *this,MapRef *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  Zone *this_00;
  undefined8 uVar3;
  
  uVar1 = MapRef::CanBeDeprecated((MapRef *)param_1);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    this_00 = *(Zone **)this;
    puVar2 = *(undefined8 **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar2) < 0x18) {
      puVar2 = (undefined8 *)Zone::NewExpand(this_00,0x18);
    }
    else {
      *(undefined8 **)(this_00 + 0x10) = puVar2 + 3;
    }
    *puVar2 = &PTR_IsValid_01cccd90;
    uVar3 = *(undefined8 *)param_1;
    puVar2[2] = *(undefined8 *)(param_1 + 8);
    puVar2[1] = uVar3;
  }
  return puVar2;
}

