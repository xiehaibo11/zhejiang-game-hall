
/* v8::internal::compiler::CompilationDependencies::RecordDependency(v8::internal::compiler::CompilationDependency
   const*) */

void __thiscall
v8::internal::compiler::CompilationDependencies::RecordDependency
          (CompilationDependencies *this,CompilationDependency *param_1)

{
  undefined8 *puVar1;
  Zone *this_00;
  
  if (param_1 != (CompilationDependency *)0x0) {
    this_00 = *(Zone **)(this + 0x18);
    puVar1 = *(undefined8 **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar1) < 0x10) {
      puVar1 = (undefined8 *)Zone::NewExpand(this_00,0x10);
    }
    else {
      *(undefined8 **)(this_00 + 0x10) = puVar1 + 2;
    }
    puVar1[1] = param_1;
    *puVar1 = *(undefined8 *)(this + 0x10);
    *(undefined8 **)(this + 0x10) = puVar1;
  }
  return;
}

