
/* universe::network::SRS::EncryptVer::write(universe::network::AUpdates&) */

void __thiscall universe::network::SRS::EncryptVer::write(EncryptVer *this,AUpdates *param_1)

{
                    /* try { // try from 00a0bd38 to 00b0bdbb has its CatchHandler @ 00a0bfa4 */
  AUpdates::operator<<(param_1,*(uint *)(this + 8));
  return;
}

