
/* universe::engineLog(char const*, char const*) */

void universe::engineLog(char *param_1,char *param_2)

{
  Translated *this;
  
  if (DAT_01d38a48 == (Translated *)0x0) {
    this = operator_new(0x98,(nothrow_t *)&std::nothrow);
    if (this != (Translated *)0x0) {
      *(undefined8 *)this = 0;
      core::Flags::Flags((Flags *)(this + 8));
    }
    DAT_01d38a48 = this;
    Translated::processFiles(this);
  }
  Translated::engineLog(DAT_01d38a48,param_1,param_2);
  return;
}

