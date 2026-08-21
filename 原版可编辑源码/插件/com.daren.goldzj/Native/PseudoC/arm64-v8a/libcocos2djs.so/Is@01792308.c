
/* v8::internal::compiler::MapInference::Is(v8::internal::Handle<v8::internal::Map>) */

bool __thiscall v8::internal::compiler::MapInference::Is(MapInference *this,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x10);
  if (plVar1 != *(long **)(this + 0x18)) {
    if (*(int *)(this + 0x28) == 1) {
      *(undefined4 *)(this + 0x28) = 2;
    }
    if ((long)*(long **)(this + 0x18) - (long)plVar1 == 8) {
      return *plVar1 == param_2;
    }
  }
  return false;
}

