
/* v8::internal::Translation::NumberOfOperandsFor(v8::internal::Translation::Opcode) */

undefined4 v8::internal::Translation::NumberOfOperandsFor(uint param_1)

{
  if (param_1 < 0x1b) {
    return *(undefined4 *)(&DAT_019a9320 + (long)(int)param_1 * 4);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Unexpected translation type");
}

