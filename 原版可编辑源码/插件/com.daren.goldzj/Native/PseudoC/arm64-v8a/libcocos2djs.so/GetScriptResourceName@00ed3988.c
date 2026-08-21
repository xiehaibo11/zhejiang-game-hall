
/* v8::CpuProfileNode::GetScriptResourceName() const */

void __thiscall v8::CpuProfileNode::GetScriptResourceName(CpuProfileNode *this)

{
  Factory *this_00;
  char *__s;
  char *local_30;
  size_t sStack_28;
  
  __s = *(char **)(*(long *)(this + 8) + 0x10);
  this_00 = *(Factory **)(*(long *)this + 0x28);
  sStack_28 = strlen(__s);
  local_30 = __s;
  internal::Factory::InternalizeUtf8String(this_00,(Vector *)&local_30);
  return;
}

