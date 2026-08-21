
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(v8::internal::StringLiteral const&,
   v8::internal::StringLiteral const&) */

bool v8::internal::operator!=(StringLiteral *param_1,StringLiteral *param_2)

{
  return *(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10);
}

