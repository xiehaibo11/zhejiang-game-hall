
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::StoreRepresentation,
   v8::internal::compiler::StoreRepresentation) */

bool v8::internal::compiler::operator==(uint param_1,uint param_2)

{
  return (param_1 & 0xff) == (param_2 & 0xff) && (param_1 >> 8 & 0xff) == (param_2 & 0xff00) >> 8;
}

