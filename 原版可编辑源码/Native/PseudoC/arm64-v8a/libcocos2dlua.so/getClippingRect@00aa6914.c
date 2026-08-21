
/* fairygui::FUIContainer::getClippingRect() */

Vec2 * fairygui::FUIContainer::getClippingRect(void)

{
  long lVar1;
  Node *in_x0;
  Vec2 *pVVar2;
  long lVar3;
  float fVar4;
  float in_s1;
  float local_50 [3];
  float local_44;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pVVar2 = *(Vec2 **)(in_x0 + 0x300);
  if (pVVar2[0x34] != '\0') {
                    /* catch() { ... } // from try @ 00aa6840 with catch @ 00aa6940 */
    fVar4 = (float)cocos2d::Node::convertToWorldSpaceAR(in_x0,pVVar2);
    (**(code **)(*(long *)in_x0 + 0x438))(local_50);
    lVar3 = *(long *)(in_x0 + 0x300);
    local_50[0] = *(float *)(lVar3 + 8) * local_50[0];
    local_44 = *(float *)(lVar3 + 0xc) * local_44;
    cocos2d::Rect::setRect
              ((Rect *)(lVar3 + 0x24),fVar4 - local_50[0] * *(float *)(in_x0 + 0x78),
               in_s1 - local_44 * *(float *)(in_x0 + 0x7c),local_50[0],local_44);
    pVVar2 = *(Vec2 **)(in_x0 + 0x300);
    pVVar2[0x34] = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return pVVar2 + 0x24;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

