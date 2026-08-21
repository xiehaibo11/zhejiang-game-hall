
/* cocos2d::renderer::DeviceGraphics::restoreIndexBuffer() */

void __thiscall cocos2d::renderer::DeviceGraphics::restoreIndexBuffer(DeviceGraphics *this)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = State::getIndexBuffer(*(State **)(this + 0xc0));
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
                    /* try { // try from 009b5704 to 00ab5757 has its CatchHandler @ 009b5704
                       catch() { ... } // from try @ 009b5704 with catch @ 009b5704
                       catch() { ... } // from try @ 009b58e4 with catch @ 009b5704 */
    uVar2 = *(uint *)(lVar1 + 0xc);
  }
  ccBindBuffer(0x8893,uVar2);
  return;
}

