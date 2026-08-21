
/* v8::internal::compiler::LiveRange::IsTopLevel() const */

bool __thiscall v8::internal::compiler::LiveRange::IsTopLevel(LiveRange *this)

{
  return *(LiveRange **)(this + 0x20) == this;
}

