
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::ElementAccess const&,
   v8::internal::compiler::ElementAccess const&) */

bool v8::internal::compiler::operator==(ElementAccess *param_1,ElementAccess *param_2)

{
  if (((*param_1 == *param_2) && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) &&
     ((ushort)(byte)param_1[0x10] == (*(ushort *)(param_2 + 0x10) & 0xff))) {
    return (ushort)(byte)param_1[0x11] == *(ushort *)(param_2 + 0x10) >> 8;
  }
  return false;
}

