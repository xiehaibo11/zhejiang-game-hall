
/* dtNavMesh::getPolyArea(unsigned int, unsigned char*) const */

undefined8 __thiscall dtNavMesh::getPolyArea(dtNavMesh *this,uint param_1,uchar *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(this + 0x60);
    uVar2 = param_1 >> ((ulong)uVar1 & 0x3f) & ~(-1 << (ulong)(*(uint *)(this + 0x5c) & 0x1f));
    uVar5 = (ulong)uVar2;
    uVar3 = 0x80000008;
    if ((((uVar2 < *(uint *)(this + 0x30)) &&
         (lVar6 = *(long *)(this + 0x50),
         *(uint *)(lVar6 + uVar5 * 0x68) ==
         (param_1 >> (ulong)(uVar1 + *(uint *)(this + 0x5c) & 0x1f) &
         (-1 << (ulong)(*(uint *)(this + 0x58) & 0x1f) ^ 0xffffffffU)))) &&
        (lVar4 = *(long *)(lVar6 + uVar5 * 0x68 + 8), lVar4 != 0)) &&
       (uVar1 = param_1 & (-1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU),
       uVar1 < *(uint *)(lVar4 + 0x18))) {
      uVar3 = 0x40000000;
      *param_2 = *(byte *)(*(long *)(lVar6 + uVar5 * 0x68 + 0x10) + (ulong)uVar1 * 0x20 + 0x1f) &
                 0x3f;
    }
    return uVar3;
  }
  return 0x80000000;
}

