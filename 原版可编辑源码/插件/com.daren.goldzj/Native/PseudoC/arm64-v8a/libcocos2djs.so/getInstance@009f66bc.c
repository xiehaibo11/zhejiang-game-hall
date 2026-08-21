
/* universe::core::Service::getInstance() */

Service * universe::core::Service::getInstance(void)

{
                    /* try { // try from 009f66c8 to 00af66d7 has its CatchHandler @ 009f6830 */
  if (DAT_01d389c0 == (Service *)0x0) {
    DAT_01d389c0 = operator_new(0x128,(nothrow_t *)&std::nothrow);
                    /* try { // try from 009f66e4 to 00af6707 has its CatchHandler @ 009f682c */
    if (DAT_01d389c0 != (Service *)0x0) {
      *(Service **)DAT_01d389c0 = DAT_01d389c0;
      *(Service **)(DAT_01d389c0 + 8) = DAT_01d389c0;
      *(undefined8 *)(DAT_01d389c0 + 0x120) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0x58) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0x50) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0x68) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0x60) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0x38) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0x30) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0x48) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0x40) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0x18) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0x10) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0x28) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0x20) = 0;
      *(Service **)(DAT_01d389c0 + 0x70) = DAT_01d389c0 + 0x70;
      *(Service **)(DAT_01d389c0 + 0x78) = DAT_01d389c0 + 0x70;
      *(undefined8 *)(DAT_01d389c0 + 0x108) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0x100) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0x118) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0x110) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0xe8) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0xe0) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0xf8) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0xf0) = 0;
      *(undefined8 *)(DAT_01d389c0 + 200) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0xc0) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0xd8) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0xd0) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0xa8) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0xa0) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0xb8) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0xb0) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0x88) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0x80) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0x98) = 0;
      *(undefined8 *)(DAT_01d389c0 + 0x90) = 0;
    }
                    /* try { // try from 009f671c to 00af672f has its CatchHandler @ 009f68d0 */
    init(DAT_01d389c0);
  }
                    /* try { // try from 009f6730 to 00af6987 has its CatchHandler @ 009f61f8 */
  return DAT_01d389c0;
}

