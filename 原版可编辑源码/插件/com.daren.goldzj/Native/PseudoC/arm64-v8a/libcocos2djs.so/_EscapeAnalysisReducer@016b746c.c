
/* v8::internal::compiler::EscapeAnalysisReducer::~EscapeAnalysisReducer() */

void __thiscall
v8::internal::compiler::EscapeAnalysisReducer::~EscapeAnalysisReducer(EscapeAnalysisReducer *this)

{
  long *plVar1;
  
  *(undefined ***)this = &PTR__EscapeAnalysisReducer_01ccced8;
  std::__ndk1::
  __tree<v8::internal::compiler::Node*,std::__ndk1::less<v8::internal::compiler::Node*>,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
  ::destroy((__tree<v8::internal::compiler::Node*,std::__ndk1::less<v8::internal::compiler::Node*>,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
             *)(this + 0xa0),*(__tree_node **)(this + 0xa8));
  if (*(long *)(this + 0x80) != 0) {
    *(long *)(this + 0x88) = *(long *)(this + 0x80);
  }
  for (plVar1 = *(long **)(this + 0x60); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
  }
  *(undefined8 *)(this + 0x48) = 0;
  operator_delete(this);
  return;
}

