
undefined4 FUN_009f9d38(char param_1)

{
                    /* try { // try from 009f9d44 to 00af9d4f has its CatchHandler @ 009f9d8c */
  if ((uint)((long)param_1 + -0x30) < 0x37) {
                    /* try { // try from 009f9d50 to 00af9d93 has its CatchHandler @ 009f9c2c */
    return *(undefined4 *)(&DAT_012f8688 + ((long)param_1 + -0x30) * 4);
  }
  return 0xffffffff;
}

