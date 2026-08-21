
/* fairygui::FUIContainer::isInverted() const */

undefined8 __thiscall fairygui::FUIContainer::isInverted(FUIContainer *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x308) != 0) {
                    /* try { // try from 00aa65d8 to 00ba683f has its CatchHandler @ 00aa65d8
                       catch() { ... } // from try @ 00aa65d8 with catch @ 00aa65d8
                       catch() { ... } // from try @ 00aa68c0 with catch @ 00aa65d8 */
    uVar1 = cocos2d::StencilStateManager::isInverted
                      (*(StencilStateManager **)(*(long *)(this + 0x308) + 8));
    return uVar1;
  }
  return 0;
}

