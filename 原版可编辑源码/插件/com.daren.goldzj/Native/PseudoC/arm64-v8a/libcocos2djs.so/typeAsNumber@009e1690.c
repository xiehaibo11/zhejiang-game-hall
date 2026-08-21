
/* cocos2d::network::SocketIOPacketV10x::typeAsNumber() const */

long __thiscall cocos2d::network::SocketIOPacketV10x::typeAsNumber(SocketIOPacketV10x *this)

{
  size_t sVar1;
  SocketIOPacketV10x *pSVar2;
  size_t sVar3;
  SocketIOPacketV10x SVar4;
  int iVar5;
  SocketIOPacketV10x *pSVar6;
  SocketIOPacketV10x *pSVar7;
  long lVar8;
  SocketIOPacketV10x *pSVar9;
  SocketIOPacketV10x *pSVar10;
  SocketIOPacketV10x *pSVar11;
  SocketIOPacketV10x *pSVar12;
  
  pSVar2 = *(SocketIOPacketV10x **)(this + 0xe0);
  pSVar11 = *(SocketIOPacketV10x **)(this + 0xe8);
  pSVar12 = pSVar2;
  if (pSVar2 == pSVar11) {
LAB_009e176c:
    if (pSVar12 != pSVar11) {
      return ((long)pSVar12 - (long)pSVar2 >> 3) * -0x5555555555555555 + 0x28;
    }
  }
  else {
    sVar3 = *(size_t *)(this + 0xa0);
    pSVar10 = *(SocketIOPacketV10x **)(this + 0xa8);
    if (((byte)this[0x98] & 1) == 0) {
      pSVar10 = this + 0x99;
      sVar3 = (ulong)((byte)this[0x98] >> 1);
    }
    do {
      SVar4 = *pSVar12;
      sVar1 = (ulong)((byte)SVar4 >> 1);
      if (((byte)SVar4 & 1) != 0) {
        sVar1 = *(size_t *)(pSVar12 + 8);
      }
      if (sVar1 == sVar3) {
        pSVar9 = *(SocketIOPacketV10x **)(pSVar12 + 0x10);
        if (((byte)SVar4 & 1) == 0) {
          pSVar9 = pSVar12 + 1;
        }
        if (((byte)SVar4 & 1) == 0) {
          if (sVar3 == 0) goto LAB_009e176c;
          lVar8 = -(ulong)((byte)SVar4 >> 1);
          pSVar9 = pSVar10;
          pSVar6 = pSVar12;
          while (pSVar6 = pSVar6 + 1, *pSVar6 == *pSVar9) {
            lVar8 = lVar8 + 1;
            pSVar9 = pSVar9 + 1;
            if (lVar8 == 0) goto LAB_009e176c;
          }
        }
        else if ((sVar3 == 0) || (iVar5 = memcmp(pSVar9,pSVar10,sVar3), iVar5 == 0))
        goto LAB_009e176c;
      }
      pSVar12 = pSVar12 + 0x18;
    } while (pSVar12 != pSVar11);
  }
  pSVar12 = *(SocketIOPacketV10x **)(this + 200);
  pSVar2 = *(SocketIOPacketV10x **)(this + 0xd0);
  pSVar11 = pSVar12;
  if (pSVar12 != pSVar2) {
    sVar3 = *(size_t *)(this + 0xa0);
    pSVar9 = *(SocketIOPacketV10x **)(this + 0xa8);
    pSVar10 = pSVar12;
    if (((byte)this[0x98] & 1) == 0) {
      pSVar9 = this + 0x99;
      sVar3 = (ulong)((byte)this[0x98] >> 1);
    }
    do {
      SVar4 = *pSVar10;
      sVar1 = (ulong)((byte)SVar4 >> 1);
      if (((byte)SVar4 & 1) != 0) {
        sVar1 = *(size_t *)(pSVar10 + 8);
      }
      if (sVar1 == sVar3) {
        pSVar6 = *(SocketIOPacketV10x **)(pSVar10 + 0x10);
        if (((byte)SVar4 & 1) == 0) {
          pSVar6 = pSVar10 + 1;
        }
        pSVar11 = pSVar10;
        if (((byte)SVar4 & 1) == 0) {
          if (sVar3 == 0) break;
          lVar8 = -(ulong)((byte)SVar4 >> 1);
          pSVar6 = pSVar9;
          pSVar7 = pSVar10;
          while (pSVar7 = pSVar7 + 1, *pSVar7 == *pSVar6) {
            lVar8 = lVar8 + 1;
            pSVar6 = pSVar6 + 1;
            if (lVar8 == 0) goto LAB_009e1844;
          }
        }
        else if ((sVar3 == 0) || (iVar5 = memcmp(pSVar6,pSVar9,sVar3), iVar5 == 0)) break;
      }
      pSVar10 = pSVar10 + 0x18;
      pSVar11 = pSVar2;
    } while (pSVar10 != pSVar2);
  }
LAB_009e1844:
  return ((long)pSVar11 - (long)pSVar12 >> 3) * -0x5555555555555555;
}

