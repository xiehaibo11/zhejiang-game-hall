
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::InstanceType) */

void v8::internal::operator<<(undefined8 param_1,ushort param_2)

{
  if (param_2 < 0x43a) {
                    /* WARNING: Could not recover jumptable at 0x01102a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_01102aa0 + (ulong)*(ushort *)(&DAT_019d807c + (ulong)param_2 * 2) * 4))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

