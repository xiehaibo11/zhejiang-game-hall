
/* v8::internal::Heap::flags_for_embedder_tracer() const */

uint __thiscall v8::internal::Heap::flags_for_embedder_tracer(Heap *this)

{
  return *(uint *)(this + 0xad4) & 1;
}

