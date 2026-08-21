
/* cocostudio::FlatBuffersSerialize::getInstance() */

FlatBuffersSerialize * cocostudio::FlatBuffersSerialize::getInstance(void)

{
  FlatBuffersSerialize *this;
  
  this = DAT_01786988;
  if ((DAT_01786988 == (FlatBuffersSerialize *)0x0) &&
     (this = operator_new(0x60,(nothrow_t *)&std::nothrow), this != (FlatBuffersSerialize *)0x0)) {
    FlatBuffersSerialize(this);
  }
  DAT_01786988 = this;
  return DAT_01786988;
}

