
/* universe::network::SRS::CheckAct32::read(universe::network::OStream&) */

void __thiscall universe::network::SRS::CheckAct32::read(CheckAct32 *this,OStream *param_1)

{
  OStream::operator>>(param_1,(short *)(this + 8));
  return;
}

