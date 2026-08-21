
/* cocos2d::renderer::StencilManager::exitMask() */

void __thiscall cocos2d::renderer::StencilManager::exitMask(StencilManager *this)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x10);
                    /* try { // try from 009d39ec to 00ad3abf has its CatchHandler @ 009d39ec
                       catch() { ... } // from try @ 009d39ec with catch @ 009d39ec
                       catch() { ... } // from try @ 009d3b30 with catch @ 009d39ec */
  if (lVar2 == 0) {
    log("StencilManager:exitMask _maskStack:%zu size is 0",0);
    lVar2 = *(long *)(this + 0x10);
  }
  *(long *)(this + 0x10) = lVar2 + -1;
  uVar1 = 0;
  if (lVar2 + -1 != 0) {
    uVar1 = 3;
  }
  *(undefined4 *)(this + 0x20) = uVar1;
  return;
}

