
/* cocos2d::network::SIOClient::socketClosed() */

void __thiscall cocos2d::network::SIOClient::socketClosed(SIOClient *this)

{
                    /* try { // try from 009e6700 to 00ae6757 has its CatchHandler @ 009e6700
                       catch() { ... } // from try @ 009e6700 with catch @ 009e6700
                       catch() { ... } // from try @ 009e6988 with catch @ 009e6700 */
  this[0x40] = (SIOClient)0x0;
  (**(code **)(**(long **)(this + 0x50) + 0x20))(*(long **)(this + 0x50),this);
  Ref::release((Ref *)this);
  return;
}

