
/* v8::internal::interpreter::BytecodeGenerator::ControlScope::PopContextToExpectedDepth() */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::ControlScope::PopContextToExpectedDepth
          (ControlScope *this)

{
  if (*(long *)(*(long *)(this + 8) + 0x2f8) != *(long *)(this + 0x18)) {
    BytecodeArrayBuilder::PopContext
              ((BytecodeArrayBuilder *)(*(long *)(this + 8) + 0x18),
               *(undefined4 *)(*(long *)(this + 0x18) + 0x18));
    return;
  }
  return;
}

