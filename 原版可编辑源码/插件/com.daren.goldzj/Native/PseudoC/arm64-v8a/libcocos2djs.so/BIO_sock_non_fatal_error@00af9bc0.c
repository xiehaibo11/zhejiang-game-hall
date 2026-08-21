
int BIO_sock_non_fatal_error(int error)

{
                    /* try { // try from 00af9bc8 to 00bf9c03 has its CatchHandler @ 00af9a90 */
                    /* catch() { ... } // from try @ 00af9b90 with catch @ 00af9be8 */
  if ((((0x2c < error - 0x47U) || ((1L << ((ulong)(error - 0x47U) & 0x3f) & 0x181000000001U) == 0))
      && (error != 4)) && (error != 0xb)) {
    return 0;
  }
  return 1;
}

