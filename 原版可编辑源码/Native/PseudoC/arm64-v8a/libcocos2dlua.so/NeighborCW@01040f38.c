
/* p2t::Triangle::NeighborCW(p2t::Point const&) */

undefined8 __thiscall p2t::Triangle::NeighborCW(Triangle *this,Point *param_1)

{
  if (*(Point **)(this + 8) == param_1) {
    return *(undefined8 *)(this + 0x28);
  }
  if (*(Point **)(this + 0x10) != param_1) {
    return *(undefined8 *)(this + 0x20);
  }
  return *(undefined8 *)(this + 0x30);
}

