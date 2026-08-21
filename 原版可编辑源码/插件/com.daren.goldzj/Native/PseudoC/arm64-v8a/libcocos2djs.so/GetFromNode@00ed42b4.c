
/* v8::HeapGraphEdge::GetFromNode() const */

long __thiscall v8::HeapGraphEdge::GetFromNode(HeapGraphEdge *this)

{
  ulong uVar1;
  
  uVar1 = *(long *)(*(long *)(*(long *)(this + 8) + 0x10) + 0xf0) + (ulong)(*(uint *)this >> 3);
  return *(long *)(*(long *)(*(long *)(*(long *)(this + 8) + 0x10) + 0xd8) + (uVar1 / 0x66) * 8) +
         (uVar1 % 0x66) * 0x28;
}

