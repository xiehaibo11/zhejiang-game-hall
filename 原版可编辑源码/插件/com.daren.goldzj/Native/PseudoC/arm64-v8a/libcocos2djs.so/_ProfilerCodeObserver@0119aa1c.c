
/* v8::internal::ProfilerCodeObserver::~ProfilerCodeObserver() */

void __thiscall
v8::internal::ProfilerCodeObserver::~ProfilerCodeObserver(ProfilerCodeObserver *this)

{
  *(undefined ***)this = &PTR_CodeEventHandler_01cb63a0;
  CodeMap::~CodeMap((CodeMap *)(this + 0x10));
  operator_delete(this);
  return;
}

