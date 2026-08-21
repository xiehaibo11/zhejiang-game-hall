
/* universe::network::SRS::EncryptVer::read(universe::network::OStream&) */

void __thiscall universe::network::SRS::EncryptVer::read(EncryptVer *this,OStream *param_1)

{
  OStream::operator>>(param_1,(uint *)(this + 8));
  return;
}

