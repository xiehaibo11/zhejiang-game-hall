
/* p2t::Triangle::NeighborCCW(p2t::Point const&) */

undefined8 __thiscall p2t::Triangle::NeighborCCW(Triangle *this,Point *param_1)

{
  if (*(Point **)(this + 8) == param_1) {
    return *(undefined8 *)(this + 0x30);
  }
  if (*(Point **)(this + 0x10) != param_1) {
    return *(undefined8 *)(this + 0x28);
  }
  return *(undefined8 *)(this + 0x20);
}

