
/* v8::internal::FrameSummary::WasmFrameSummary::function_index() const */

undefined4 __thiscall
v8::internal::FrameSummary::WasmFrameSummary::function_index(WasmFrameSummary *this)

{
  if (*(int *)(this + 8) == 1) {
    return *(undefined4 *)(*(long *)(this + 0x20) + 0x38);
  }
  return *(undefined4 *)(this + 0x1c);
}

