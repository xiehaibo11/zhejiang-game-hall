
int UI_method_set_reader(UI_METHOD *method,reader *reader)

{
  if (method != (UI_METHOD *)0x0) {
                    /* catch() { ... } // from try @ 00b571fc with catch @ 00b57230
                       try { // try from 00b57230 to 00c5732b has its CatchHandler @ 00b56d60 */
    *(reader **)(method + 0x20) = reader;
                    /* catch() { ... } // from try @ 00b571bc with catch @ 00b57234 */
    return 0;
  }
  return -1;
}

