
/* ClipperLib::PolyNode::GetNext() const */

undefined8 __thiscall ClipperLib::PolyNode::GetNext(PolyNode *this)

{
  PolyNode *pPVar1;
  PolyNode *pPVar2;
  
  if (*(undefined8 **)(this + 0x18) != *(undefined8 **)(this + 0x20)) {
    return **(undefined8 **)(this + 0x18);
  }
  do {
    pPVar2 = *(PolyNode **)(this + 0x30);
    if (pPVar2 == (PolyNode *)0x0) {
      return 0;
    }
    pPVar1 = this + 0x38;
    this = pPVar2;
  } while ((*(long *)(pPVar2 + 0x20) - *(long *)(pPVar2 + 0x18) >> 3) - 1U == (ulong)*(uint *)pPVar1
          );
  return *(undefined8 *)(*(long *)(pPVar2 + 0x18) + (ulong)(*(uint *)pPVar1 + 1) * 8);
}

