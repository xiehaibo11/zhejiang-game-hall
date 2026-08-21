
/* v8::base::debug::StackTrace::Print() const */

void __thiscall v8::base::debug::StackTrace::Print(StackTrace *this)

{
  void *pvVar1;
  byte local_38 [16];
  void *local_28;
  
  ToString(this);
  pvVar1 = (void *)((ulong)local_38 | 1);
  if ((local_38[0] & 1) != 0) {
    pvVar1 = local_28;
  }
  OS::Print("%s\n",pvVar1);
  if ((local_38[0] & 1) != 0) {
    operator_delete(local_28);
  }
  return;
}

