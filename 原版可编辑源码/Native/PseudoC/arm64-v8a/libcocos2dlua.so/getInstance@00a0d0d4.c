
/* universe::HeBaiChuan::getInstance() */

HeBaiChuan * universe::HeBaiChuan::getInstance(void)

{
  HeBaiChuan *this;
  
  this = DAT_01782380;
  if ((DAT_01782380 == (HeBaiChuan *)0x0) &&
     (this = operator_new(0x40,(nothrow_t *)&std::nothrow), this != (HeBaiChuan *)0x0)) {
    HeBaiChuan(this);
  }
  DAT_01782380 = this;
  return DAT_01782380;
}

