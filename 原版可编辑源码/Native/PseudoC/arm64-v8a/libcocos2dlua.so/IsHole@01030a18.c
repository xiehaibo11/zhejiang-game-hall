
/* ClipperLib::PolyNode::IsHole() const */

uint __thiscall ClipperLib::PolyNode::IsHole(PolyNode *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 1;
  do {
    uVar2 = uVar1;
    this = *(PolyNode **)(this + 0x30);
    uVar1 = uVar2 ^ 1;
  } while (this != (PolyNode *)0x0);
  return uVar2;
}

