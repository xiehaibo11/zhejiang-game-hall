
/* cocos2d::PUParticle3DBoxRender::reBuildIndices(unsigned short) */

void __thiscall
cocos2d::PUParticle3DBoxRender::reBuildIndices(PUParticle3DBoxRender *this,ushort param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  ushort uVar10;
  long lVar11;
  
  if (param_1 != 0) {
    lVar11 = *(long *)(this + 0xb0);
    uVar9 = 0;
    uVar10 = 0;
    do {
      uVar8 = (uint)uVar9;
      uVar1 = uVar10 | 2;
      uVar2 = uVar10 | 3;
      *(ushort *)(lVar11 + (uVar9 & 0xffff) * 2) = uVar10;
      *(ushort *)(lVar11 + ((ulong)(uVar8 | 1) & 0xffff) * 2) = uVar1;
      *(ushort *)(lVar11 + ((ulong)(uVar8 | 2) & 0xffff) * 2) = uVar2;
      uVar3 = uVar10 | 1;
      *(ushort *)(lVar11 + ((ulong)(uVar8 | 3) & 0xffff) * 2) = uVar10;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 4) & 0xffff) * 2) = uVar3;
      uVar4 = uVar10 | 7;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 5) & 0xffff) * 2) = uVar1;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 6) & 0xffff) * 2) = uVar3;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 7) & 0xffff) * 2) = uVar4;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 8) & 0xffff) * 2) = uVar1;
      uVar5 = uVar10 | 4;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 9) & 0xffff) * 2) = uVar3;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 10) & 0xffff) * 2) = uVar5;
      uVar6 = uVar10 | 6;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0xb) & 0xffff) * 2) = uVar4;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0xc) & 0xffff) * 2) = uVar5;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0xd) & 0xffff) * 2) = uVar6;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0xe) & 0xffff) * 2) = uVar4;
      uVar7 = uVar10 | 5;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0xf) & 0xffff) * 2) = uVar5;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0x10) & 0xffff) * 2) = uVar7;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0x11) & 0xffff) * 2) = uVar6;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0x12) & 0xffff) * 2) = uVar7;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0x13) & 0xffff) * 2) = uVar2;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0x14) & 0xffff) * 2) = uVar6;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0x15) & 0xffff) * 2) = uVar7;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0x16) & 0xffff) * 2) = uVar10;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0x17) & 0xffff) * 2) = uVar2;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0x18) & 0xffff) * 2) = uVar2;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0x19) & 0xffff) * 2) = uVar4;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0x1a) & 0xffff) * 2) = uVar6;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0x1b) & 0xffff) * 2) = uVar2;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0x1c) & 0xffff) * 2) = uVar1;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0x1d) & 0xffff) * 2) = uVar4;
      uVar9 = (ulong)(uVar8 + 0x24);
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0x1e) & 0xffff) * 2) = uVar7;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0x1f) & 0xffff) * 2) = uVar3;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0x20) & 0xffff) * 2) = uVar10;
      uVar10 = uVar10 + 8;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0x21) & 0xffff) * 2) = uVar7;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0x22) & 0xffff) * 2) = uVar5;
      *(ushort *)(lVar11 + ((ulong)(uVar8 + 0x23) & 0xffff) * 2) = uVar3;
    } while ((uVar8 + 0x24 & 0xffff) < ((uint)param_1 + (uint)param_1 * 8) * 4);
  }
  return;
}

