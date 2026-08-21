
/* v8::HeapGraphNode::GetType() const */

uint __thiscall v8::HeapGraphNode::GetType(HeapGraphNode *this)

{
  return *(uint *)this & 0xf;
}

