
/* v8::internal::TranslatedValue::IsMaterializedObject() const */

bool __thiscall v8::internal::TranslatedValue::IsMaterializedObject(TranslatedValue *this)

{
  return ((byte)*this & 0xfe) == 8;
}

