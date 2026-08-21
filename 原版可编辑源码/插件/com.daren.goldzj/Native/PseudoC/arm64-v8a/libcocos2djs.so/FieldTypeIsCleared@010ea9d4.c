
/* v8::internal::FieldTypeIsCleared(v8::internal::Representation, v8::internal::FieldType) */

bool v8::internal::FieldTypeIsCleared(char param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FieldType::None();
  return param_1 == '\x03' && param_2 == iVar1;
}

