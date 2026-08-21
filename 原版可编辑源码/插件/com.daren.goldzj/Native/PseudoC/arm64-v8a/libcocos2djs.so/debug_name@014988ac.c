
/* v8::internal::CallRuntime::debug_name() */

char * __thiscall v8::internal::CallRuntime::debug_name(CallRuntime *this)

{
  if (*(long *)(this + 0x10) != 0) {
    return *(char **)(*(long *)(this + 0x10) + 8);
  }
  return "(context function)";
}

