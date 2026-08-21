
void floor1_free_info(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 00ebffa0 with catch @ 00ebffec */
    if ((void *)*param_1 != (void *)0x0) {
      free((void *)*param_1);
    }
                    /* try { // try from 00ec0008 to 00fc0063 has its CatchHandler @ 00ec0008
                       catch() { ... } // from try @ 00ec0008 with catch @ 00ec0008
                       catch() { ... } // from try @ 00ec0138 with catch @ 00ec0008 */
    if ((void *)param_1[1] != (void *)0x0) {
      free((void *)param_1[1]);
    }
    if ((void *)param_1[2] != (void *)0x0) {
      free((void *)param_1[2]);
    }
    if ((void *)param_1[3] != (void *)0x0) {
      free((void *)param_1[3]);
    }
    if ((void *)param_1[4] != (void *)0x0) {
      free((void *)param_1[4]);
    }
    if ((void *)param_1[5] != (void *)0x0) {
      free((void *)param_1[5]);
    }
    free(param_1);
    return;
  }
  return;
}

