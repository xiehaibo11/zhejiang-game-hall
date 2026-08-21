
/* v8::internal::Heap::ExternalStringTable::IterateAll(v8::internal::RootVisitor*) */

void __thiscall
v8::internal::Heap::ExternalStringTable::IterateAll(ExternalStringTable *this,RootVisitor *param_1)

{
  if (*(long *)(this + 8) != *(long *)(this + 0x10)) {
    (**(code **)(*(long *)param_1 + 0x10))(param_1,1,0);
  }
  if (*(long *)(this + 0x20) != *(long *)(this + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00f9264c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x10))(param_1,1,0);
    return;
  }
  return;
}

