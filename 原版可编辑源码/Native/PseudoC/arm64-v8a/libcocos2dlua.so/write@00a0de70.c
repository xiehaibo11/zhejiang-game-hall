
/* universe::network::LuanLe::write(universe::network::AUpdates&) */

void __thiscall universe::network::LuanLe::write(LuanLe *this,AUpdates *param_1)

{
                    /* try { // try from 00a0de7c to 00b0de83 has its CatchHandler @ 00a0deec */
                    /* try { // try from 00a0de84 to 00b0dea3 has its CatchHandler @ 00a0dd8c */
  AUpdates::operator<<(param_1,*(ushort *)(this + 8));
  AUpdates::operator<<(param_1,*(ushort *)(this + 10));
                    /* try { // try from 00a0dea4 to 00b0deaf has its CatchHandler @ 00a0deec */
  AUpdates::operator<<(param_1,*(ushort *)(this + 0xc));
                    /* try { // try from 00a0deb0 to 00b0def3 has its CatchHandler @ 00a0dd8c */
  AUpdates::operator<<(param_1,*(ushort *)(this + 0xe));
  AUpdates::operator<<(param_1,*(uint *)(this + 0x10));
  return;
}

