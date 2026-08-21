
void mapping_clear_info(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
                    /* try { // try from 00eba178 to 00fba1ef has its CatchHandler @ 00eba178
                       catch(type#1 @ 00000000) { ... } // from try @ 00eba178 with catch @ 00eba178
                       catch(type#1 @ 00000000) { ... } // from try @ 00eba230 with catch @ 00eba178
                        */
    if ((void *)param_1[1] != (void *)0x0) {
      free((void *)param_1[1]);
    }
    if ((void *)param_1[2] != (void *)0x0) {
      free((void *)param_1[2]);
    }
    if ((void *)param_1[4] != (void *)0x0) {
      free((void *)param_1[4]);
    }
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return;
}

