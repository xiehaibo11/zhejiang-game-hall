
/* v8::internal::ExternalStringTableCleaner::~ExternalStringTableCleaner() */

void __thiscall
v8::internal::ExternalStringTableCleaner::~ExternalStringTableCleaner
          (ExternalStringTableCleaner *this)

{
  operator_delete(this);
  return;
}

