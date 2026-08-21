
int UI_method_set_writer(UI_METHOD *method,writer *writer)

{
                    /* try { // try from 00b571f0 to 00c571fb has its CatchHandler @ 00b56d60 */
  if (method != (UI_METHOD *)0x0) {
    *(writer **)(method + 0x10) = writer;
                    /* try { // try from 00b571fc to 00c57207 has its CatchHandler @ 00b57230 */
    return 0;
  }
  return -1;
}

