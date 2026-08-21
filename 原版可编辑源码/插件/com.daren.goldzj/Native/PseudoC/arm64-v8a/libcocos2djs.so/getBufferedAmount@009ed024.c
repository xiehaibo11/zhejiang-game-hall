
/* cocos2d::network::WebSocket::getBufferedAmount() const */

long __thiscall cocos2d::network::WebSocket::getBufferedAmount(WebSocket *this)

{
  mutex *this_00;
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  plVar1 = DAT_01d38808;
                    /* try { // try from 009ed030 to 00aed083 has its CatchHandler @ 009ed030
                       catch() { ... } // from try @ 009ed030 with catch @ 009ed030
                       catch() { ... } // from try @ 009ed0fc with catch @ 009ed030 */
  lVar8 = *(long *)(this + 0x10);
  this_00 = (mutex *)(DAT_01d38808 + 1);
  std::__ndk1::mutex::lock(this_00);
  lVar2 = *plVar1;
  lVar3 = *(long *)(lVar2 + 8);
  if (lVar2 == lVar3) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    do {
      lVar5 = *(long *)(lVar3 + 0x10);
      if (((*(long *)(lVar5 + 0x10) == lVar8) && (lVar6 = *(long *)(lVar5 + 8), lVar6 != 0)) &&
         (*(uint *)(lVar5 + 4) < 2)) {
        uVar4 = *(long *)(lVar6 + 8) - *(long *)(lVar6 + 0x10);
                    /* try { // try from 009ed084 to 00aed09b has its CatchHandler @ 009ed178 */
        lVar7 = (uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU)) + lVar7;
      }
      lVar3 = *(long *)(lVar3 + 8);
                    /* try { // try from 009ed0a4 to 00aed0af has its CatchHandler @ 009ed174 */
    } while (lVar2 != lVar3);
  }
                    /* try { // try from 009ed0b0 to 00aed0bb has its CatchHandler @ 009ed170 */
  std::__ndk1::mutex::unlock(this_00);
                    /* try { // try from 009ed0bc to 00aed0c3 has its CatchHandler @ 009ed188 */
                    /* try { // try from 009ed0c4 to 00aed0e3 has its CatchHandler @ 009ed190 */
  return lVar7;
}

