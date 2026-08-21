
/* cocos2d::ui::Layout::setStencilClippingSize(cocos2d::Size const&) */

void cocos2d::ui::Layout::setStencilClippingSize(Size *param_1)

{
  long lVar1;
  Color4F aCStack_58 [16];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_1[0x5a5] != (Size)0x0) && (*(int *)(param_1 + 0x5ac) == 0)) {
    local_48 = 0;
    local_40 = *(undefined4 *)(param_1 + 0x80);
    uStack_34 = *(undefined4 *)(param_1 + 0x84);
                    /* try { // try from 00daf6ec to 00eaf703 has its CatchHandler @ 00daf914 */
    uStack_3c = 0;
    local_30 = 0;
    local_38 = local_40;
    uStack_2c = uStack_34;
    Color4F::Color4F(aCStack_58,0.0,1.0,0.0,1.0);
    DrawNode::clear(*(DrawNode **)(param_1 + 0x5b0));
    DrawNode::drawPolygon
              (*(DrawNode **)(param_1 + 0x5b0),(Vec2 *)&local_48,4,aCStack_58,0.0,aCStack_58);
  }
                    /* try { // try from 00daf728 to 00eaf72f has its CatchHandler @ 00daf8f8 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

