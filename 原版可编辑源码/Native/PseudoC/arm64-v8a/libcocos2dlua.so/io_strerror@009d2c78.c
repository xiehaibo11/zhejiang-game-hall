
char * io_strerror(int param_1)

{
                    /* try { // try from 009d2c80 to 00ad2e6f has its CatchHandler @ 009cee70 */
  if (param_1 + 2U < 3) {
    return (&PTR_s_closed_012c60be_0x3d_0169f6e8)[(int)(param_1 + 2U)];
  }
  return "unknown error";
}

