
/* cocos2d::network::SIOClient::onOpen() */

void __thiscall cocos2d::network::SIOClient::onOpen(SIOClient *this)

{
  ulong uVar1;
  basic_string bVar2;
  SIOClient *pSVar3;
  
  bVar2 = *(basic_string *)(this + 0x10);
                    /* try { // try from 009e4d80 to 00ae4e37 has its CatchHandler @ 009e4af8 */
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(this + 0x18);
  }
                    /* catch() { ... } // from try @ 009e4bfc with catch @ 009e4d94
                       catch() { ... } // from try @ 009e4d3c with catch @ 009e4d94 */
  if (uVar1 == 1) {
    pSVar3 = *(SIOClient **)(this + 0x20);
    if (((byte)bVar2 & 1) == 0) {
      pSVar3 = this + 0x11;
    }
                    /* catch() { ... } // from try @ 009e4bb8 with catch @ 009e4dac */
    if (*pSVar3 == (SIOClient)0x2f) {
                    /* catch() { ... } // from try @ 009e4b64 with catch @ 009e4db0 */
      return;
    }
  }
                    /* catch() { ... } // from try @ 009e4b5c with catch @ 009e4db8 */
  SIOClientImpl::connectToEndpoint(*(SIOClientImpl **)(this + 0x48),(basic_string *)(this + 0x10));
  return;
}

