
/* dtNavMesh::getTileByRef(unsigned int) const */

uint * __thiscall dtNavMesh::getTileByRef(dtNavMesh *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_1 != 0) {
    uVar1 = param_1 >> ((ulong)*(uint *)(this + 0x60) & 0x3f) &
            ~(-1 << (ulong)(*(uint *)(this + 0x5c) & 0x1f));
    if ((int)uVar1 < *(int *)(this + 0x30)) {
      puVar2 = (uint *)(*(long *)(this + 0x50) + (ulong)uVar1 * 0x68);
      if (*puVar2 !=
          (param_1 >> (ulong)(*(uint *)(this + 0x60) + *(uint *)(this + 0x5c) & 0x1f) &
          (-1 << (ulong)(*(uint *)(this + 0x58) & 0x1f) ^ 0xffffffffU))) {
        puVar2 = (uint *)0x0;
      }
      return puVar2;
    }
  }
  return (uint *)0x0;
}

