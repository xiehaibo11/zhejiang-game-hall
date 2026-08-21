
/* p2t::Triangle::ClearNeighbors() */

void __thiscall p2t::Triangle::ClearNeighbors(Triangle *this)

{
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}

