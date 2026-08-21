
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::ObjectAccess const&,
   v8::internal::compiler::ObjectAccess const&) */

bool v8::internal::compiler::operator==(ObjectAccess *param_1,ObjectAccess *param_2)

{
  if ((ushort)(byte)*param_1 == (*(ushort *)param_2 & 0xff)) {
    return (ushort)(byte)param_1[1] == *(ushort *)param_2 >> 8 && param_1[2] == param_2[2];
  }
  return false;
}

