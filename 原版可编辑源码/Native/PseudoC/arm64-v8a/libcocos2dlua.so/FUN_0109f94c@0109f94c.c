
void FUN_0109f94c(long param_1)

{
  FT_Stream_ReleaseFrame(*(undefined8 *)(param_1 + 0xc0),param_1 + 0x4b0);
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
                    /* try { // try from 0109f97c to 0119faab has its CatchHandler @ 0109f97c
                       catch() { ... } // from try @ 0109f97c with catch @ 0109f97c
                       catch() { ... } // from try @ 0109fb60 with catch @ 0109f97c
                       catch() { ... } // from try @ 0109fc74 with catch @ 0109f97c */
  return;
}

