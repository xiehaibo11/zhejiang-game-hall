
/* v8::internal::compiler::GraphTrimmer::~GraphTrimmer() */

void __thiscall v8::internal::compiler::GraphTrimmer::~GraphTrimmer(GraphTrimmer *this)

{
  if (*(long *)(this + 0x10) != 0) {
    *(long *)(this + 0x18) = *(long *)(this + 0x10);
  }
  return;
}

