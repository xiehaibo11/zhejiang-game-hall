
/* v8::HeapGraphEdge::GetType() const */

uint __thiscall v8::HeapGraphEdge::GetType(HeapGraphEdge *this)

{
  return *(uint *)this & 7;
}

