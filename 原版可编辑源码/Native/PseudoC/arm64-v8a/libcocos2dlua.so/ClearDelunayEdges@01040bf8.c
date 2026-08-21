
/* p2t::Triangle::ClearDelunayEdges() */

void __thiscall p2t::Triangle::ClearDelunayEdges(Triangle *this)

{
  this[5] = (Triangle)0x0;
  *(undefined2 *)(this + 3) = 0;
  return;
}

