
int UI_method_set_closer(UI_METHOD *method,closer *closer)

{
  if (method != (UI_METHOD *)0x0) {
                    /* catch() { ... } // from try @ 00b571a8 with catch @ 00b5724c */
    *(closer **)(method + 0x28) = closer;
    return 0;
  }
  return -1;
}

