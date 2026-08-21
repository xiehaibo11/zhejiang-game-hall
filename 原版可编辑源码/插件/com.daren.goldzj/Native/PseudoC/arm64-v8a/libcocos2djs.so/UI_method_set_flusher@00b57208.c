
int UI_method_set_flusher(UI_METHOD *method,flusher *flusher)

{
  if (method != (UI_METHOD *)0x0) {
    *(flusher **)(method + 0x18) = flusher;
                    /* try { // try from 00b57218 to 00c5722f has its CatchHandler @ 00b5725c */
    return 0;
  }
  return -1;
}

