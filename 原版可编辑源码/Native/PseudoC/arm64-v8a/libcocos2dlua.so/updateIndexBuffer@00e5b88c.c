
/* cocos2d::PUBillboardChain::updateIndexBuffer() */

void __thiscall cocos2d::PUBillboardChain::updateIndexBuffer(PUBillboardChain *this)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  (**(code **)(*(long *)this + 200))();
  if (this[0x1e] != (PUBillboardChain)0x0) {
    puVar6 = *(undefined8 **)(this + 0x58);
    puVar2 = *(undefined8 **)(this + 0x60);
    if (puVar6 != puVar2) {
      uVar8 = 0;
      do {
        lVar12 = puVar6[1];
        if ((lVar12 != -1) && (lVar9 = puVar6[2], lVar12 != lVar9)) {
          lVar10 = *(long *)(this + 8);
          uVar11 = *puVar6;
          lVar13 = *(long *)(this + 0xb8);
          do {
            sVar4 = (short)uVar11 + (short)lVar12;
            iVar7 = (int)uVar8;
            uVar3 = sVar4 * 2 | 1;
            lVar1 = 0;
            if (lVar12 + 1 != lVar10) {
              lVar1 = lVar12 + 1;
            }
            *(short *)(lVar13 + (uVar8 & 0xffff) * 2) = sVar4 * 2;
            *(ushort *)(lVar13 + ((ulong)(iVar7 + 1) & 0xffff) * 2) = uVar3;
            sVar5 = (short)lVar1 + (short)uVar11;
            sVar4 = sVar5 * 2;
            *(short *)(lVar13 + ((ulong)(iVar7 + 2) & 0xffff) * 2) = sVar4;
            uVar8 = (ulong)(iVar7 + 6);
            *(ushort *)(lVar13 + ((ulong)(iVar7 + 3) & 0xffff) * 2) = uVar3;
            *(ushort *)(lVar13 + ((ulong)(iVar7 + 4) & 0xffff) * 2) = sVar5 * 2 | 1;
            *(short *)(lVar13 + ((ulong)(iVar7 + 5) & 0xffff) * 2) = sVar4;
            lVar12 = lVar1;
          } while (lVar1 != lVar9);
        }
        puVar6 = puVar6 + 3;
      } while (puVar6 != puVar2);
    }
    IndexBuffer::updateIndices
              (*(IndexBuffer **)(this + 0x90),*(void **)(this + 0xb8),
               (int)((ulong)(*(long *)(this + 0xc0) - (long)*(void **)(this + 0xb8)) >> 1),0,0);
    this[0x1e] = (PUBillboardChain)0x0;
  }
  return;
}

