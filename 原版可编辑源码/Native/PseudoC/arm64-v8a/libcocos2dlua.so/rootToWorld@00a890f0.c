
/* fairygui::GRoot::rootToWorld(cocos2d::Vec2 const&) */

void __thiscall fairygui::GRoot::rootToWorld(GRoot *this,Vec2 *param_1)

{
  long lVar1;
  undefined4 local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  _local_30 = CONCAT44(*(float *)(this + 0xcc) - (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                       (int)*(undefined8 *)param_1);
                    /* try { // try from 00a89130 to 00b89187 has its CatchHandler @ 00a89630 */
  cocos2d::Node::convertToWorldSpace(*(Node **)(this + 0xa8),(Vec2 *)&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

