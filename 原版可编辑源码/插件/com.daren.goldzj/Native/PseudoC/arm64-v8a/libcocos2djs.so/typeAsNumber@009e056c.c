
/* cocos2d::network::SocketIOPacket::typeAsNumber() const */

int __thiscall cocos2d::network::SocketIOPacket::typeAsNumber(SocketIOPacket *this)

{
  size_t sVar1;
  SocketIOPacket *pSVar2;
  size_t __n;
  SocketIOPacket *pSVar3;
  SocketIOPacket *__s2;
  SocketIOPacket SVar4;
  SocketIOPacket *pSVar5;
  int iVar6;
  SocketIOPacket *pSVar7;
  long lVar8;
  SocketIOPacket *pSVar9;
  SocketIOPacket *pSVar10;
  
  pSVar2 = *(SocketIOPacket **)(this + 200);
  pSVar3 = *(SocketIOPacket **)(this + 0xd0);
  pSVar5 = pSVar2;
  if (pSVar2 != pSVar3) {
    __n = *(size_t *)(this + 0xa0);
    __s2 = *(SocketIOPacket **)(this + 0xa8);
    pSVar10 = pSVar2;
    if (((byte)this[0x98] & 1) == 0) {
      __s2 = this + 0x99;
      __n = (ulong)((byte)this[0x98] >> 1);
    }
    do {
      SVar4 = *pSVar10;
      sVar1 = (ulong)((byte)SVar4 >> 1);
      if (((byte)SVar4 & 1) != 0) {
        sVar1 = *(size_t *)(pSVar10 + 8);
      }
      if (sVar1 == __n) {
        pSVar9 = *(SocketIOPacket **)(pSVar10 + 0x10);
        if (((byte)SVar4 & 1) == 0) {
          pSVar9 = pSVar10 + 1;
        }
        pSVar5 = pSVar10;
        if (((byte)SVar4 & 1) == 0) {
          if (__n == 0) break;
          lVar8 = -(ulong)((byte)SVar4 >> 1);
          pSVar9 = __s2;
          pSVar7 = pSVar10;
          while (pSVar7 = pSVar7 + 1, *pSVar7 == *pSVar9) {
            lVar8 = lVar8 + 1;
                    /* try { // try from 009e0600 to 00ae0697 has its CatchHandler @ 009e0600
                       catch() { ... } // from try @ 009e0600 with catch @ 009e0600
                       catch() { ... } // from try @ 009e06a0 with catch @ 009e0600
                       catch() { ... } // from try @ 009e0728 with catch @ 009e0600
                       catch() { ... } // from try @ 009e0778 with catch @ 009e0600 */
            pSVar9 = pSVar9 + 1;
            if (lVar8 == 0) goto joined_r0x009e0658;
          }
        }
        else if ((__n == 0) || (iVar6 = memcmp(pSVar9,__s2,__n), iVar6 == 0)) break;
      }
      pSVar10 = pSVar10 + 0x18;
      pSVar5 = pSVar3;
    } while (pSVar10 != pSVar3);
  }
joined_r0x009e0658:
  if (pSVar5 == pSVar3) {
    iVar6 = 0;
  }
  else {
    iVar6 = (int)((ulong)((long)pSVar5 - (long)pSVar2) >> 3) * -0x55555555;
  }
  return iVar6;
}

