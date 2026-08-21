
/* universe::network::Everywhere::getInstance() */

Everywhere * universe::network::Everywhere::getInstance(void)

{
  Everywhere *this;
  
  this = DAT_01782360;
  if ((DAT_01782360 == (Everywhere *)0x0) &&
     (this = operator_new(0x38,(nothrow_t *)&std::nothrow), this != (Everywhere *)0x0)) {
    Everywhere(this);
  }
  DAT_01782360 = this;
  return DAT_01782360;
}

