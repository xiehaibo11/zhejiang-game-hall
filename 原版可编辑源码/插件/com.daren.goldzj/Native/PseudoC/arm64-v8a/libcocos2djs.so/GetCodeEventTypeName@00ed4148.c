
/* v8::CodeEvent::GetCodeEventTypeName(v8::CodeEventType) */

undefined8 v8::CodeEvent::GetCodeEventTypeName(uint param_1)

{
  if (param_1 < 0xd) {
    return *(undefined8 *)(&DAT_01c985b0 + (long)(int)param_1 * 8);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

