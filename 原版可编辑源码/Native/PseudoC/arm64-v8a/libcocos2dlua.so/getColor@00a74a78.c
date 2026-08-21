
/* fairygui::GGraph::getColor() const */

ulong __thiscall fairygui::GGraph::getColor(GGraph *this)

{
  long lVar1;
  uint3 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  cocos2d::Color3B::Color3B((Color3B *)local_30,(Color4F *)(this + 0x1ec));
                    /* try { // try from 00a74aa0 to 00b74acf has its CatchHandler @ 00a74a18 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return (ulong)local_30[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

