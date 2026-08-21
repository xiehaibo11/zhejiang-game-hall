
/* v8::internal::compiler::Typer::Visitor::~Visitor() */

void __thiscall v8::internal::compiler::Typer::Visitor::~Visitor(Visitor *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x50);
  *(undefined ***)this = &PTR__Visitor_01cc3b20;
  for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
  }
  *(undefined8 *)(this + 0x38) = 0;
  std::__ndk1::
  __tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>::
  destroy((__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
           *)(this + 0x18),*(__tree_node **)(this + 0x20));
  operator_delete(this);
  return;
}

