
/* universe::network::SRS::RespKey::write(universe::network::AUpdates&) */

void __thiscall universe::network::SRS::RespKey::write(RespKey *this,AUpdates *param_1)

{
                    /* catch() { ... } // from try @ 00a0c604 with catch @ 00a0c6dc
                       catch() { ... } // from try @ 00a0c688 with catch @ 00a0c6dc */
  AUpdates::operator<<(param_1,(uchar)this[8]);
  if ((ulong)(byte)this[8] < 0x21) {
    AUpdates::write(param_1,(char *)(this + 9),(ulong)(byte)this[8]);
  }
  return;
}

