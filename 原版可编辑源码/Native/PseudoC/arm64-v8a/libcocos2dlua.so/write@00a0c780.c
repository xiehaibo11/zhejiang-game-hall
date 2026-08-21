
/* universe::network::SRS::CheckAct32::write(universe::network::AUpdates&) */

void __thiscall universe::network::SRS::CheckAct32::write(CheckAct32 *this,AUpdates *param_1)

{
  AUpdates::operator<<(param_1,*(short *)(this + 8));
  return;
}

