
/* cocos2d::LayerRadialGradient::getStartColor3B() const */

ulong __thiscall cocos2d::LayerRadialGradient::getStartColor3B(LayerRadialGradient *this)

{
  long lVar1;
  uint3 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Color3B::Color3B((Color3B *)local_30,(Color4B *)(this + 0x31d));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return (ulong)local_30[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

