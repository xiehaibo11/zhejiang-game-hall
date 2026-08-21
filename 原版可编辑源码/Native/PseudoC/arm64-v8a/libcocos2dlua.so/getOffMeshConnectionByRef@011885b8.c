
/* dtNavMesh::getOffMeshConnectionByRef(unsigned int) const */

long __thiscall dtNavMesh::getOffMeshConnectionByRef(dtNavMesh *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(this + 0x60);
    uVar2 = param_1 >> ((ulong)uVar1 & 0x3f) & ~(-1 << (ulong)(*(uint *)(this + 0x5c) & 0x1f));
    uVar3 = (ulong)uVar2;
    if ((((uVar2 < *(uint *)(this + 0x30)) &&
         (lVar4 = *(long *)(this + 0x50),
         *(uint *)(lVar4 + uVar3 * 0x68) ==
         (param_1 >> (ulong)(uVar1 + *(uint *)(this + 0x5c) & 0x1f) &
         (-1 << (ulong)(*(uint *)(this + 0x58) & 0x1f) ^ 0xffffffffU)))) &&
        (lVar5 = *(long *)(lVar4 + uVar3 * 0x68 + 8), lVar5 != 0)) &&
       ((uVar1 = param_1 & (-1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU),
        uVar1 < *(uint *)(lVar5 + 0x18) &&
        ((*(byte *)(*(long *)(lVar4 + uVar3 * 0x68 + 0x10) + (ulong)uVar1 * 0x20 + 0x1f) & 0xc0) ==
         0x40)))) {
      return *(long *)(lVar4 + uVar3 * 0x68 + 0x48) + (ulong)(uVar1 - *(int *)(lVar5 + 0x38)) * 0x24
      ;
    }
  }
  return 0;
}

