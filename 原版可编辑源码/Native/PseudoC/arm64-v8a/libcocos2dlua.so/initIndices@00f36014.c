
/* cocos2d::ParticleSystemQuad::initIndices() */

void __thiscall cocos2d::ParticleSystemQuad::initIndices(ParticleSystemQuad *this)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  iVar2 = *(int *)(this + 0x508);
  if (0 < iVar2) {
    lVar6 = *(long *)(this + 0x538);
    uVar5 = 0;
    lVar8 = 0;
    do {
      iVar7 = (int)lVar8;
      *(short *)(lVar6 + (ulong)uVar5 * 2) = (short)(iVar7 << 2);
      uVar3 = (ushort)(iVar7 << 2) | 1;
      *(ushort *)(lVar6 + (ulong)(uVar5 + 1) * 2) = uVar3;
      uVar4 = (ushort)(iVar7 << 2) | 2;
      *(ushort *)(lVar6 + (ulong)(uVar5 + 2) * 2) = uVar4;
      *(ushort *)(lVar6 + (ulong)(uVar5 + 5) * 2) = uVar3;
      lVar8 = lVar8 + 1;
      *(ushort *)(lVar6 + (ulong)(uVar5 + 4) * 2) = uVar4;
      uVar1 = uVar5 + 3;
      uVar5 = uVar5 + 6;
      *(ushort *)(lVar6 + (ulong)uVar1 * 2) = (ushort)(iVar7 << 2) | 3;
    } while (lVar8 < iVar2);
  }
  return;
}

