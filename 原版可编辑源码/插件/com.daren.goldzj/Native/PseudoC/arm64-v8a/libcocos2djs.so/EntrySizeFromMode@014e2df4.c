
/* v8::internal::HandlerTable::EntrySizeFromMode(v8::internal::HandlerTable::EncodingMode) */

undefined8 v8::internal::HandlerTable::EntrySizeFromMode(int param_1)

{
  if (param_1 == 1) {
    return 2;
  }
  if (param_1 == 0) {
    return 4;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

