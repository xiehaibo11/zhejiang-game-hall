
void png_set_write_status_fn(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x350) = param_2;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d73fc with catch @ 010d7448
                        */
  return;
}

