
/* cocos2d::Terrain::lookForIndicesLODSkrit(int, bool*) */

ulong __thiscall cocos2d::Terrain::lookForIndicesLODSkrit(Terrain *this,int param_1,bool *param_2)

{
  long lVar1;
  long lVar2;
  ushort *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *(long *)(this + 0x310);
  if ((lVar2 != *(long *)(this + 0x318)) && (lVar1 = *(long *)(this + 0x318) - lVar2, lVar1 != 0)) {
    uVar4 = 0;
    puVar3 = (ushort *)(lVar2 + 8);
    do {
      if (*(int *)(puVar3 + -4) == param_1) {
        *param_2 = true;
        uVar4 = (ulong)*(uint *)(puVar3 + -2);
        uVar5 = (ulong)puVar3[1] << 0x30;
        uVar6 = (ulong)*puVar3 << 0x20;
        goto LAB_00d47304;
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 6;
    } while (uVar4 < (ulong)((lVar1 >> 2) * -0x5555555555555555));
  }
  uVar4 = 0;
  uVar6 = 0;
  uVar5 = 0;
  *param_2 = false;
LAB_00d47304:
  return uVar6 | uVar4 | uVar5;
}

