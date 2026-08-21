
/* cocos2d::ui::TabControl::getHeaderAnchorWithDock() const */

undefined4 __thiscall cocos2d::ui::TabControl::getHeaderAnchorWithDock(TabControl *this)

{
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x530) - 1;
  if (uVar1 < 3) {
    return *(undefined4 *)
            (&DAT_0142092c + (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2));
  }
  return 0x3f000000;
}

