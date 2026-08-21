
/* universe::network::LuanLe32::write(universe::network::AUpdates&) */

void __thiscall universe::network::LuanLe32::write(LuanLe32 *this,AUpdates *param_1)

{
  AUpdates::operator<<(param_1,*(ushort *)(this + 8));
  AUpdates::operator<<(param_1,*(ushort *)(this + 10));
  AUpdates::operator<<(param_1,*(uint *)(this + 0xc));
  return;
}

