
int UI_method_set_opener(UI_METHOD *method,opener *opener)

{
  if (method != (UI_METHOD *)0x0) {
                    /* try { // try from 00b571d8 to 00c571ef has its CatchHandler @ 00b5725c */
    *(opener **)(method + 8) = opener;
    return 0;
  }
  return -1;
}

