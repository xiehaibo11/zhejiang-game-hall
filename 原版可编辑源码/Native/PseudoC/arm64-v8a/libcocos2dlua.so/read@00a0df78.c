
/* universe::network::LuanLe32::read(universe::network::OStream&) */

void __thiscall universe::network::LuanLe32::read(LuanLe32 *this,OStream *param_1)

{
  OStream::operator>>(param_1,(ushort *)(this + 8));
  OStream::operator>>(param_1,(ushort *)(this + 10));
  OStream::operator>>(param_1,(uint *)(this + 0xc));
  return;
}

