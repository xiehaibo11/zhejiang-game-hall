
/* universe::network::SRS::RespKey::read(universe::network::OStream&) */

void __thiscall universe::network::SRS::RespKey::read(RespKey *this,OStream *param_1)

{
  OStream::operator>>(param_1,(uchar *)(this + 8));
  if ((ulong)(byte)this[8] < 0x21) {
    OStream::read(param_1,(char *)(this + 9),(ulong)(byte)this[8]);
  }
  return;
}

