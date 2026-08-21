
/* universe::Translated::getInstance() */

Translated * universe::Translated::getInstance(void)

{
  Translated *this;
  
                    /* try { // try from 009e07d0 to 00ae07ef has its CatchHandler @ 009e0888 */
  if (DAT_01782288 == (Translated *)0x0) {
    this = operator_new(0x98,(nothrow_t *)&std::nothrow);
    if (this != (Translated *)0x0) {
      *(undefined8 *)this = 0;
      core::Flags::Flags((Flags *)(this + 8));
    }
    DAT_01782288 = this;
    processFiles(this);
  }
  return DAT_01782288;
}

