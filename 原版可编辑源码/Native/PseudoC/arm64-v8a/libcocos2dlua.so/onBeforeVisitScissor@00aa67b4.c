
/* fairygui::FUIContainer::onBeforeVisitScissor() */

void fairygui::FUIContainer::onBeforeVisitScissor(void)

{
  long lVar1;
  byte bVar2;
  Node *in_x0;
  long lVar3;
  Vec2 *pVVar4;
  Rect *in_x2;
  long *plVar5;
  float fVar6;
  float in_s1;
  float fVar7;
  float fVar8;
  Rect aRStack_70 [16];
  float local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  float local_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = cocos2d::Director::getInstance();
  plVar5 = *(long **)(lVar3 + 0x108);
  bVar2 = (**(code **)(*plVar5 + 0xe0))(plVar5);
  pVVar4 = *(Vec2 **)(in_x0 + 0x300);
  pVVar4[0x11] = bVar2 & 1;
  if (pVVar4[0x34] != '\0') {
    fVar6 = (float)cocos2d::Node::convertToWorldSpaceAR(in_x0,pVVar4);
    (**(code **)(*(long *)in_x0 + 0x438))(&local_60);
    lVar3 = *(long *)(in_x0 + 0x300);
                    /* try { // try from 00aa6840 to 00ba6873 has its CatchHandler @ 00aa6940 */
    fVar7 = *(float *)(lVar3 + 8) * local_60;
    fVar8 = *(float *)(lVar3 + 0xc) * local_54;
    cocos2d::Rect::setRect
              ((Rect *)(lVar3 + 0x24),fVar6 - fVar7 * *(float *)(in_x0 + 0x78),
               in_s1 - fVar8 * *(float *)(in_x0 + 0x7c),fVar7,fVar8);
    pVVar4 = *(Vec2 **)(in_x0 + 0x300);
    pVVar4[0x34] = 0;
  }
  cocos2d::Rect::Rect((Rect *)&local_60,(Rect *)(pVVar4 + 0x24));
                    /* try { // try from 00aa6874 to 00ba6887 has its CatchHandler @ 00aa690c */
  if (*(char *)(*(long *)(in_x0 + 0x300) + 0x11) == '\0') {
    glEnable(0xc11);
  }
  else {
                    /* try { // try from 00aa688c to 00ba68bf has its CatchHandler @ 00aa6910 */
    (**(code **)(*plVar5 + 0xe8))(aRStack_70,plVar5);
    cocos2d::Rect::operator=((Rect *)(*(long *)(in_x0 + 0x300) + 0x14),aRStack_70);
    ToolSet::intersection((ToolSet *)&local_60,(Rect *)(*(long *)(in_x0 + 0x300) + 0x14),in_x2);
                    /* try { // try from 00aa68c0 to 00ba695b has its CatchHandler @ 00aa65d8 */
    cocos2d::Rect::operator=((Rect *)&local_60,aRStack_70);
  }
  (**(code **)(*plVar5 + 0xd8))(local_60,uStack_5c,local_58,local_54,plVar5);
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00aa6874 with catch @ 00aa690c */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00aa688c with catch @ 00aa6910 */
  __stack_chk_fail();
}

