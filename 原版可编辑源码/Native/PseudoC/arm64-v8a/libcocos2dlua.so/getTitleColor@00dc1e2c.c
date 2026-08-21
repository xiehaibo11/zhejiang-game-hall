
/* cocos2d::ui::Button::getTitleColor() const */

ulong __thiscall cocos2d::ui::Button::getTitleColor(Button *this)

{
  long lVar1;
  undefined1 local_30 [8];
  long local_28;
  
                    /* try { // try from 00dc1e2c to 00ec1e3f has its CatchHandler @ 00dc23a0 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x508) == 0) {
    local_30[2] = DAT_01792432;
    local_30._0_2_ = Color3B::WHITE;
  }
  else {
    Color3B::Color3B((Color3B *)local_30,(Color4B *)(*(long *)(this + 0x508) + 0x4b0));
  }
                    /* try { // try from 00dc1e88 to 00ec1e97 has its CatchHandler @ 00dc23dc */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00dc1e9c to 00ec1eab has its CatchHandler @ 00dc23e0 */
    return (ulong)(uint3)local_30._0_3_;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

