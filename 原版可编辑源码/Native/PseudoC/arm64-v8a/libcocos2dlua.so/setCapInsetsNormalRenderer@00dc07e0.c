
/* cocos2d::ui::Button::setCapInsetsNormalRenderer(cocos2d::Rect const&) */

void cocos2d::ui::Button::setCapInsetsNormalRenderer(Rect *param_1)

{
  long lVar1;
  Helper *in_x1;
  Size *in_x2;
  Rect aRStack_48 [16];
  long local_38;
  
                    /* catch() { ... } // from try @ 00dc0628 with catch @ 00dc07e0 */
                    /* catch() { ... } // from try @ 00dc0614 with catch @ 00dc07e4 */
                    /* catch() { ... } // from try @ 00dc05ec with catch @ 00dc07e8 */
                    /* catch() { ... } // from try @ 00dc05d8 with catch @ 00dc07ec */
                    /* catch() { ... } // from try @ 00dc05b0 with catch @ 00dc07f0 */
                    /* catch() { ... } // from try @ 00dc059c with catch @ 00dc07f4 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00dc0548 with catch @ 00dc07f8 */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00dc0534 with catch @ 00dc07fc */
                    /* catch() { ... } // from try @ 00dc046c with catch @ 00dc0800 */
                    /* catch() { ... } // from try @ 00dc0458 with catch @ 00dc0804 */
                    /* catch() { ... } // from try @ 00dc0414 with catch @ 00dc0808 */
                    /* catch() { ... } // from try @ 00dc0400 with catch @ 00dc080c */
                    /* catch() { ... } // from try @ 00dc01c0 with catch @ 00dc0810 */
  Helper::restrictCapInsetRect(in_x1,param_1 + 0x548,in_x2);
  Rect::operator=((Rect *)(param_1 + 0x518),aRStack_48);
  if (param_1[0x515] != '\0') {
                    /* catch() { ... } // from try @ 00dc0208 with catch @ 00dc0830
                       catch() { ... } // from try @ 00dc0720 with catch @ 00dc0830 */
                    /* catch() { ... } // from try @ 00dc06e0 with catch @ 00dc0834 */
    Scale9Sprite::setCapInsets(*(Scale9Sprite **)(param_1 + 0x4f0),(Rect *)(param_1 + 0x518));
  }
                    /* catch() { ... } // from try @ 00dc0124 with catch @ 00dc0848 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

