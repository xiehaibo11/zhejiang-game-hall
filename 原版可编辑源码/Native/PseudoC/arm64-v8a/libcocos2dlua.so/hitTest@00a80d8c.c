
/* fairygui::GLoader3D::hitTest(cocos2d::Vec2 const&, cocos2d::Camera const*) */

void fairygui::GLoader3D::hitTest(Vec2 *param_1,Camera *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  Vec2 *pVVar4;
  undefined4 local_50 [2];
  Rect aRStack_48 [8];
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a80da8 to 00b80ddf has its CatchHandler @ 00a80e64 */
  if ((param_1[0xf5] == '\0') ||
     (uVar2 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x178))(), (uVar2 & 1) == 0)) {
                    /* try { // try from 00a80e24 to 00b80e7f has its CatchHandler @ 00a80d58 */
    pVVar4 = (Vec2 *)0x0;
  }
  else {
    lVar3 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x260))();
                    /* try { // try from 00a80de0 to 00b80e0f has its CatchHandler @ 00a80d58 */
    pVVar4 = (Vec2 *)0x0;
    if (lVar3 != 0) {
      cocos2d::Rect::Rect(aRStack_48);
      cocos2d::Size::operator=(aSStack_40,(Size *)(param_1 + 200));
      local_50[0] = cocos2d::Node::convertToNodeSpace(*(Node **)(param_1 + 0xa8),param_2);
                    /* try { // try from 00a80e10 to 00b80e23 has its CatchHandler @ 00a80e64 */
      uVar2 = cocos2d::Rect::containsPoint(aRStack_48,(Vec2 *)local_50);
      pVVar4 = param_1;
      if ((uVar2 & 1) == 0) {
        pVVar4 = (Vec2 *)0x0;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pVVar4);
  }
  return;
}

