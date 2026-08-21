
void png_set_read_user_chunk_fn(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
                    /* try { // try from 010d5038 to 011d509b has its CatchHandler @ 010d4230 */
    *(undefined8 *)(param_1 + 0x430) = param_3;
    *(undefined8 *)(param_1 + 0x428) = param_2;
  }
  return;
}

