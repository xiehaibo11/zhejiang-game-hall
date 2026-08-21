
/* v8::internal::compiler::CompilationDependencies::AreValid() const */

undefined8 __thiscall
v8::internal::compiler::CompilationDependencies::AreValid(CompilationDependencies *this)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x10);
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return 1;
    }
    uVar1 = (*(code *)**(undefined8 **)plVar2[1])();
    if ((uVar1 & 1) == 0) break;
    plVar2 = (long *)*plVar2;
  }
  return 0;
}

