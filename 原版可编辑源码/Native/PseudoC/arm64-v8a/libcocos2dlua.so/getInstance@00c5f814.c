
/* cocostudio::GUIReader::getInstance() */

GUIReader * cocostudio::GUIReader::getInstance(void)

{
  GUIReader *this;
  
  this = DAT_01785a68;
  if ((DAT_01785a68 == (GUIReader *)0x0) &&
     (this = operator_new(0x98,(nothrow_t *)&std::nothrow), this != (GUIReader *)0x0)) {
    GUIReader(this);
  }
  DAT_01785a68 = this;
  return DAT_01785a68;
}

