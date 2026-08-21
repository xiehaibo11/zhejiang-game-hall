
/* v8::internal::Translation::StringFor(v8::internal::Translation::Opcode) */

undefined8 v8::internal::Translation::StringFor(uint param_1)

{
  if (param_1 < 0x1b) {
    return *(undefined8 *)(&DAT_01ca49f0 + (long)(int)param_1 * 8);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

