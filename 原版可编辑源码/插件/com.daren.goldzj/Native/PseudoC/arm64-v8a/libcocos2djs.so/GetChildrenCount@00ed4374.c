
/* v8::HeapGraphNode::GetChildrenCount() const */

ulong __thiscall v8::HeapGraphNode::GetChildrenCount(HeapGraphNode *this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(this + 0x10);
  lVar4 = *(long *)(lVar3 + 0x130);
  lVar2 = lVar4 + (ulong)*(uint *)(this + 4) * 8;
  if (0xf < *(uint *)this) {
    uVar1 = *(long *)(lVar3 + 0xf0) + (long)(int)((*(uint *)this >> 4) - 1);
    lVar4 = *(long *)(*(long *)(lVar3 + 0xd8) + (uVar1 / 0x66) * 8) + (uVar1 % 0x66) * 0x28;
    lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + 0x130) + (ulong)*(uint *)(lVar4 + 4) * 8;
  }
  return (ulong)(lVar2 - lVar4) >> 3;
}

