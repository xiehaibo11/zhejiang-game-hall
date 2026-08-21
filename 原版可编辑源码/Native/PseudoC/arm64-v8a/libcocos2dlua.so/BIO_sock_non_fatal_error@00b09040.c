
int BIO_sock_non_fatal_error(int error)

{
                    /* try { // try from 00b09058 to 00c09067 has its CatchHandler @ 00b090b8 */
                    /* try { // try from 00b09068 to 00c090bb has its CatchHandler @ 00b08ee4 */
  if ((((0x2c < error - 0x47U) || ((1L << ((ulong)(error - 0x47U) & 0x3f) & 0x181000000001U) == 0))
      && (error != 4)) && (error != 0xb)) {
    return 0;
  }
  return 1;
}

