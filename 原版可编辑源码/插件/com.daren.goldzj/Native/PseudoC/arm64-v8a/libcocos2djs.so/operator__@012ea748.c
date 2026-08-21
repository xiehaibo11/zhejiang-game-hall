
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::FieldAccess const&,
   v8::internal::compiler::FieldAccess const&) */

bool v8::internal::compiler::operator==(FieldAccess *param_1,FieldAccess *param_2)

{
  if ((((*param_1 == *param_2) && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) &&
      (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10))) &&
     ((((ushort)(byte)param_1[0x20] == (*(ushort *)(param_2 + 0x20) & 0xff) &&
       ((ushort)(byte)param_1[0x21] == *(ushort *)(param_2 + 0x20) >> 8)) &&
      (*(long *)(param_1 + 0x28) == *(long *)(param_2 + 0x28))))) {
    return param_1[0x30] == param_2[0x30];
  }
  return false;
}

