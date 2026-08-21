
/* v8::internal::interpreter::BytecodeRegisterOptimizer::EnsureAllRegistersAreFlushed() const */

undefined8 __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::EnsureAllRegistersAreFlushed
          (BytecodeRegisterOptimizer *this)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(this + 0x20);
  while( true ) {
    if (plVar1 == *(long **)(this + 0x28)) {
      return 1;
    }
    lVar2 = *plVar1;
    if (((*(char *)(lVar2 + 10) != '\0') || (*(long *)(lVar2 + 0x10) != lVar2)) ||
       ((*(char *)(lVar2 + 9) != '\0' && (*(char *)(lVar2 + 8) == '\0')))) break;
    plVar1 = plVar1 + 1;
  }
  return 0;
}

