
/* v8::internal::compiler::BytecodeGraphBuilder::Environment::LookupAccumulator() const */

undefined8 __thiscall
v8::internal::compiler::BytecodeGraphBuilder::Environment::LookupAccumulator(Environment *this)

{
  if ((ulong)(long)*(int *)(this + 0x5c) <
      (ulong)(*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0x28) + (long)*(int *)(this + 0x5c) * 8);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

