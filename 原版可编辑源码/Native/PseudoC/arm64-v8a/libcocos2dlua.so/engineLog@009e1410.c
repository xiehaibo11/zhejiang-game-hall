
/* universe::engineLog(char const*, char const*) */

void universe::engineLog(char *param_1,char *param_2)

{
  Translated *this;
  
  if (DAT_01782288 == (Translated *)0x0) {
    this = operator_new(0x98,(nothrow_t *)&std::nothrow);
    if (this != (Translated *)0x0) {
      *(undefined8 *)this = 0;
      core::Flags::Flags((Flags *)(this + 8));
    }
    DAT_01782288 = this;
    Translated::processFiles(this);
  }
  Translated::engineLog(DAT_01782288,param_1,param_2);
  return;
}

