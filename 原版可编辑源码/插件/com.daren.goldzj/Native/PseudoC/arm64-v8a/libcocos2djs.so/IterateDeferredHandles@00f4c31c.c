
/* v8::internal::Isolate::IterateDeferredHandles(v8::internal::RootVisitor*) */

void __thiscall v8::internal::Isolate::IterateDeferredHandles(Isolate *this,RootVisitor *param_1)

{
  DeferredHandles *this_00;
  
  for (this_00 = *(DeferredHandles **)(this + 0xc608); this_00 != (DeferredHandles *)0x0;
      this_00 = *(DeferredHandles **)(this_00 + 0x18)) {
    DeferredHandles::Iterate(this_00,param_1);
  }
  return;
}

