
/* v8::internal::InternalizedStringTableCleaner::~InternalizedStringTableCleaner() */

void __thiscall
v8::internal::InternalizedStringTableCleaner::~InternalizedStringTableCleaner
          (InternalizedStringTableCleaner *this)

{
  operator_delete(this);
  return;
}

