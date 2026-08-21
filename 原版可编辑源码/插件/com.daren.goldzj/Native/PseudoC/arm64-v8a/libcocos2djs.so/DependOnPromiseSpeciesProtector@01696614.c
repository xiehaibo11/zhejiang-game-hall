
/* v8::internal::compiler::CompilationDependencies::DependOnPromiseSpeciesProtector() */

uint __thiscall
v8::internal::compiler::CompilationDependencies::DependOnPromiseSpeciesProtector
          (CompilationDependencies *this)

{
  uint uVar1;
  ulong uVar2;
  ObjectRef aOStack_30 [16];
  
  ObjectRef::ObjectRef(aOStack_30,*(long **)(this + 8),**(long **)(this + 8) + 0xec8,0);
  uVar2 = ObjectRef::IsPropertyCell(aOStack_30);
  if ((uVar2 & 1) != 0) {
    uVar1 = DependOnProtector(this,(PropertyCellRef *)aOStack_30);
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsPropertyCell()");
}

