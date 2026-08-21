
/* cocos2d::ui::TextField::update(float) */

void cocos2d::ui::TextField::update(float param_1)

{
  TextField *in_x0;
  long *plVar1;
  
  plVar1 = *(long **)(in_x0 + 0x4f0);
  if (*(char *)((long)plVar1 + 0x749) != '\0') {
    param_1 = (float)detachWithIMEEvent(in_x0);
                    /* try { // try from 00dcf76c to 00ecf76f has its CatchHandler @ 00dcf77c */
    plVar1 = *(long **)(in_x0 + 0x4f0);
                    /* try { // try from 00dcf770 to 00ecf7a7 has its CatchHandler @ 00dcf704 */
    *(undefined1 *)((long)plVar1 + 0x749) = 0;
  }
  if ((char)plVar1[0xe9] != '\0') {
                    /* catch() { ... } // from try @ 00dcf76c with catch @ 00dcf77c */
    param_1 = (float)attachWithIMEEvent(in_x0);
    plVar1 = *(long **)(in_x0 + 0x4f0);
    *(undefined1 *)(plVar1 + 0xe9) = 0;
  }
  if (*(char *)((long)plVar1 + 0x74b) != '\0') {
                    /* catch() { ... } // from try @ 00dcf72c with catch @ 00dcf794 */
    in_x0[0x550] = (TextField)0x1;
    (**(code **)(*plVar1 + 0x168))(param_1);
    Widget::updateContentSizeWithTextureSize((Size *)in_x0);
    deleteBackwardEvent(in_x0);
    plVar1 = *(long **)(in_x0 + 0x4f0);
    *(undefined1 *)((long)plVar1 + 0x74b) = 0;
  }
  if (*(char *)((long)plVar1 + 0x74a) != '\0') {
                    /* try { // try from 00dcf7d0 to 00ecf7d3 has its CatchHandler @ 00dcf7f4 */
    in_x0[0x550] = (TextField)0x1;
    (**(code **)(*plVar1 + 0x168))();
    Widget::updateContentSizeWithTextureSize((Size *)in_x0);
    insertTextEvent(in_x0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dcf7d0 with catch @ 00dcf7f4
                        */
    *(undefined1 *)(*(long *)(in_x0 + 0x4f0) + 0x74a) = 0;
  }
  return;
}

