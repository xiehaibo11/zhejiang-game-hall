
/* cocostudio::LayoutReader::getInstance() */

WidgetReader * cocostudio::LayoutReader::getInstance(void)

{
  WidgetReader *this;
  
  this = DAT_01786470;
  if ((DAT_01786470 == (WidgetReader *)0x0) &&
     (this = operator_new(0x110,(nothrow_t *)&std::nothrow), this != (WidgetReader *)0x0)) {
    WidgetReader::WidgetReader(this);
    *(undefined ***)this = &PTR__LayoutReader_016cae40;
    *(undefined ***)(this + 0x30) = &PTR__LayoutReader_016caec0;
    *(undefined ***)(this + 0x28) = &PTR__LayoutReader_016cae90;
  }
  DAT_01786470 = this;
  return DAT_01786470;
}

