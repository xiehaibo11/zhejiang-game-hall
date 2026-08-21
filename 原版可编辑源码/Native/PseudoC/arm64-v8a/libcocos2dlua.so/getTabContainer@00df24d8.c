
/* cocos2d::ui::TabControl::getTabContainer(int) const */

undefined8 __thiscall cocos2d::ui::TabControl::getTabContainer(TabControl *this,int param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(this + 0x558) - *(long *)(this + 0x550);
  if ((int)(uVar1 >> 3) <= param_1) {
    return 0;
  }
  if ((ulong)(long)param_1 < (ulong)((long)uVar1 >> 3)) {
    return *(undefined8 *)(*(long *)(*(long *)(this + 0x550) + (long)param_1 * 8) + 8);
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
}

