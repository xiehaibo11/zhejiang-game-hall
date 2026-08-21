
/* dtNavMesh::isValidPolyRef(unsigned int) const */

bool __thiscall dtNavMesh::isValidPolyRef(dtNavMesh *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(this + 0x60);
    uVar2 = param_1 >> ((ulong)uVar1 & 0x3f) & ~(-1 << (ulong)(*(uint *)(this + 0x5c) & 0x1f));
    if (((uVar2 < *(uint *)(this + 0x30)) &&
        (*(uint *)(*(long *)(this + 0x50) + (ulong)uVar2 * 0x68) ==
         (param_1 >> (ulong)(uVar1 + *(uint *)(this + 0x5c) & 0x1f) &
         (-1 << (ulong)(*(uint *)(this + 0x58) & 0x1f) ^ 0xffffffffU)))) &&
       (lVar3 = *(long *)(*(long *)(this + 0x50) + (ulong)uVar2 * 0x68 + 8), lVar3 != 0)) {
      return (param_1 & (-1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU)) < *(uint *)(lVar3 + 0x18);
    }
  }
  return false;
}

