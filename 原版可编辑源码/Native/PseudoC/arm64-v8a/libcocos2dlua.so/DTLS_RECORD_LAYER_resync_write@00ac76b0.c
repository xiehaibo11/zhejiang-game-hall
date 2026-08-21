
void DTLS_RECORD_LAYER_resync_write(long param_1)

{
  *(undefined8 *)(param_1 + 0xd78) = *(undefined8 *)(param_1 + 0xd70);
                    /* try { // try from 00ac76b8 to 00bc77c7 has its CatchHandler @ 00ac75a8 */
  return;
}

