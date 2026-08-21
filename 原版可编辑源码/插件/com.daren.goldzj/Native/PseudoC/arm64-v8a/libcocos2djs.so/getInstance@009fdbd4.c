
/* universe::Translated::getInstance() */

Translated * universe::Translated::getInstance(void)

{
  Translated *this;
  
  if (DAT_01d38a48 == (Translated *)0x0) {
    this = operator_new(0x98,(nothrow_t *)&std::nothrow);
    if (this != (Translated *)0x0) {
      *(undefined8 *)this = 0;
      core::Flags::Flags((Flags *)(this + 8));
    }
    DAT_01d38a48 = this;
    processFiles(this);
  }
  return DAT_01d38a48;
}

