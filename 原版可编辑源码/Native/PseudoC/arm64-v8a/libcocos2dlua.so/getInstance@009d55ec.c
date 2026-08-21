
/* universe::core::Service::getInstance() */

Service * universe::core::Service::getInstance(void)

{
  if (DAT_017821d8 == (Service *)0x0) {
    DAT_017821d8 = operator_new(0x128,(nothrow_t *)&std::nothrow);
    if (DAT_017821d8 != (Service *)0x0) {
      *(Service **)DAT_017821d8 = DAT_017821d8;
      *(Service **)(DAT_017821d8 + 8) = DAT_017821d8;
      *(undefined8 *)(DAT_017821d8 + 0x18) = 0;
      *(undefined8 *)(DAT_017821d8 + 0x10) = 0;
      *(undefined8 *)(DAT_017821d8 + 0x28) = 0;
      *(undefined8 *)(DAT_017821d8 + 0x20) = 0;
      *(undefined8 *)(DAT_017821d8 + 0x38) = 0;
      *(undefined8 *)(DAT_017821d8 + 0x30) = 0;
      *(undefined8 *)(DAT_017821d8 + 0x48) = 0;
      *(undefined8 *)(DAT_017821d8 + 0x40) = 0;
      *(undefined8 *)(DAT_017821d8 + 0x58) = 0;
      *(undefined8 *)(DAT_017821d8 + 0x50) = 0;
      *(undefined8 *)(DAT_017821d8 + 0x68) = 0;
      *(undefined8 *)(DAT_017821d8 + 0x60) = 0;
      *(Service **)(DAT_017821d8 + 0x70) = DAT_017821d8 + 0x70;
      *(Service **)(DAT_017821d8 + 0x78) = DAT_017821d8 + 0x70;
      *(undefined8 *)(DAT_017821d8 + 0x88) = 0;
      *(undefined8 *)(DAT_017821d8 + 0x80) = 0;
      *(undefined8 *)(DAT_017821d8 + 0x98) = 0;
      *(undefined8 *)(DAT_017821d8 + 0x90) = 0;
      *(undefined8 *)(DAT_017821d8 + 0xa8) = 0;
      *(undefined8 *)(DAT_017821d8 + 0xa0) = 0;
      *(undefined8 *)(DAT_017821d8 + 0xb8) = 0;
      *(undefined8 *)(DAT_017821d8 + 0xb0) = 0;
      *(undefined8 *)(DAT_017821d8 + 200) = 0;
      *(undefined8 *)(DAT_017821d8 + 0xc0) = 0;
      *(undefined8 *)(DAT_017821d8 + 0xd8) = 0;
      *(undefined8 *)(DAT_017821d8 + 0xd0) = 0;
      *(undefined8 *)(DAT_017821d8 + 0xe8) = 0;
      *(undefined8 *)(DAT_017821d8 + 0xe0) = 0;
      *(undefined8 *)(DAT_017821d8 + 0xf8) = 0;
      *(undefined8 *)(DAT_017821d8 + 0xf0) = 0;
      *(undefined8 *)(DAT_017821d8 + 0x108) = 0;
      *(undefined8 *)(DAT_017821d8 + 0x100) = 0;
      *(undefined8 *)(DAT_017821d8 + 0x118) = 0;
      *(undefined8 *)(DAT_017821d8 + 0x110) = 0;
      *(undefined8 *)(DAT_017821d8 + 0x120) = 0;
    }
    init(DAT_017821d8);
  }
  return DAT_017821d8;
}

