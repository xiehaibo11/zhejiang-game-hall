
/* cocos2d::TextureAtlas::setupIndices() */

void __thiscall cocos2d::TextureAtlas::setupIndices(TextureAtlas *this)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  lVar5 = *(long *)(this + 0x48);
  if (0 < lVar5) {
    lVar7 = *(long *)(this + 0x28);
    uVar6 = 0;
    lVar9 = 0;
    do {
      iVar8 = (int)lVar9;
      uVar3 = (ushort)(iVar8 << 2) | 1;
      *(short *)(lVar7 + (ulong)uVar6 * 2) = (short)(iVar8 << 2);
      *(ushort *)(lVar7 + (ulong)(uVar6 + 1) * 2) = uVar3;
      uVar4 = (ushort)(iVar8 << 2) | 2;
      *(ushort *)(lVar7 + (ulong)(uVar6 + 2) * 2) = uVar4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fee21c with catch @ 00fee398
                        */
      lVar9 = lVar9 + 1;
      *(ushort *)(lVar7 + (ulong)(uVar6 + 3) * 2) = (ushort)(iVar8 << 2) | 3;
      uVar1 = uVar6 + 4;
      uVar2 = uVar6 + 5;
      uVar6 = uVar6 + 6;
      *(ushort *)(lVar7 + (ulong)uVar1 * 2) = uVar4;
      *(ushort *)(lVar7 + (ulong)uVar2 * 2) = uVar3;
    } while (lVar5 != lVar9);
  }
  return;
}

