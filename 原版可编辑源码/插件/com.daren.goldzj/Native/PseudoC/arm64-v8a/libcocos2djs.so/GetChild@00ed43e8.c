
/* v8::HeapGraphNode::GetChild(int) const */

undefined8 __thiscall v8::HeapGraphNode::GetChild(HeapGraphNode *this,int param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x10);
  if (*(uint *)this < 0x10) {
    return *(undefined8 *)(*(long *)(lVar2 + 0x130) + (long)param_1 * 8);
  }
  uVar1 = *(long *)(lVar2 + 0xf0) + (long)(int)((*(uint *)this >> 4) - 1);
  lVar2 = *(long *)(*(long *)(lVar2 + 0xd8) + (uVar1 / 0x66) * 8) + (uVar1 % 0x66) * 0x28;
  return *(undefined8 *)
          (*(long *)(*(long *)(lVar2 + 0x10) + 0x130) + (ulong)*(uint *)(lVar2 + 4) * 8 +
          (long)param_1 * 8);
}

