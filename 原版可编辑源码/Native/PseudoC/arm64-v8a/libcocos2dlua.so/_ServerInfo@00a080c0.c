
/* universe::network::GuoPengFei::ServerInfo::~ServerInfo() */

void __thiscall universe::network::GuoPengFei::ServerInfo::~ServerInfo(ServerInfo *this)

{
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}

