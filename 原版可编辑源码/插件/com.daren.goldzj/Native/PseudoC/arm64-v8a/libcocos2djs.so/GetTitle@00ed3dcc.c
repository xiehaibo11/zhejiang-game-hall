
/* v8::CpuProfile::GetTitle() const */

void __thiscall v8::CpuProfile::GetTitle(CpuProfile *this)

{
  Factory *this_00;
  char *__s;
  char *local_30;
  size_t sStack_28;
  
  __s = *(char **)this;
  this_00 = *(Factory **)(this + 0x90);
  sStack_28 = strlen(__s);
  local_30 = __s;
  internal::Factory::InternalizeUtf8String(this_00,(Vector *)&local_30);
  return;
}

