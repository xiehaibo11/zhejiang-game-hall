
/* v8::internal::IncrementalStringBuilder::Accumulate(v8::internal::Handle<v8::internal::String>) */

void __thiscall
v8::internal::IncrementalStringBuilder::Accumulate(IncrementalStringBuilder *this,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x18);
  if (*(int *)(*param_2 + 7) + *(int *)(*plVar2 + 7) < 0xffffff1) {
    plVar1 = (long *)Factory::NewConsString();
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    plVar2 = *(long **)(this + 0x18);
  }
  else {
    plVar1 = (long *)(*(long *)this + 200);
    this[0xc] = (IncrementalStringBuilder)0x1;
  }
  *plVar2 = *plVar1;
  return;
}

