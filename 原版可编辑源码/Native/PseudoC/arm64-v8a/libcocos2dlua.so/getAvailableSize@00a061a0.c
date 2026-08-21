
/* universe::network::OStream::getAvailableSize() const */

long __thiscall universe::network::OStream::getAvailableSize(OStream *this)

{
  return *(long *)(this + 8) - *(long *)(this + 0x10);
}

