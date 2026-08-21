
/* cocos2d::WebView::canGoForward() */

bool __thiscall cocos2d::WebView::canGoForward(WebView *this)

{
  long lVar1;
  bool bVar2;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined4 local_37;
  undefined1 local_33;
  undefined2 uStack_32;
  void *local_30;
  long local_28;
  
                    /* catch() { ... } // from try @ 009db498 with catch @ 009db640 */
                    /* catch() { ... } // from try @ 009db318 with catch @ 009db644 */
                    /* catch() { ... } // from try @ 009db54c with catch @ 009db648 */
                    /* catch() { ... } // from try @ 009db3ec with catch @ 009db64c */
                    /* catch() { ... } // from try @ 009db3dc with catch @ 009db650 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 009db384 with catch @ 009db654 */
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009db338 with catch @ 009db658 */
                    /* catch() { ... } // from try @ 009db2f4 with catch @ 009db65c */
                    /* catch() { ... } // from try @ 009db2cc with catch @ 009db660
                       catch() { ... } // from try @ 009db398 with catch @ 009db660 */
                    /* catch() { ... } // from try @ 009db284 with catch @ 009db664 */
                    /* catch() { ... } // from try @ 009db270 with catch @ 009db668 */
                    /* catch() { ... } // from try @ 009db368 with catch @ 009db66c */
                    /* catch() { ... } // from try @ 009db350 with catch @ 009db670 */
  uStack_32 = 0;
                    /* catch() { ... } // from try @ 009db3c8 with catch @ 009db674 */
  local_40 = (basic_string)0x18;
                    /* catch() { ... } // from try @ 009db3b0 with catch @ 009db678 */
                    /* catch() { ... } // from try @ 009db2a8 with catch @ 009db67c */
                    /* catch() { ... } // from try @ 009db298 with catch @ 009db680 */
  local_30 = (void *)0x0;
                    /* catch() { ... } // from try @ 009db254 with catch @ 009db684 */
  local_37 = 0x64726177;
                    /* catch() { ... } // from try @ 009db240 with catch @ 009db688 */
  uStack_3f = 0x6f466f476e6163;
  uStack_38 = 0x72;
                    /* catch() { ... } // from try @ 009db2dc with catch @ 009db68c */
  local_33 = 0;
                    /* catch() { ... } // from try @ 009db224 with catch @ 009db690 */
                    /* catch() { ... } // from try @ 009db214 with catch @ 009db694 */
                    /* catch() { ... } // from try @ 009db1e8 with catch @ 009db698 */
                    /* catch() { ... } // from try @ 009db1d8 with catch @ 009db69c */
                    /* catch() { ... } // from try @ 009db1c4 with catch @ 009db6a0 */
  bVar2 = JniHelper::callStaticBooleanMethod<int>
                    ((basic_string *)&DAT_01d38750,&local_40,*(int *)(*(long *)(this + 0xd0) + 8));
  if (((byte)local_40 & 1) != 0) {
                    /* catch() { ... } // from try @ 009db1b0 with catch @ 009db6b0 */
                    /* catch() { ... } // from try @ 009db414 with catch @ 009db6b4 */
    operator_delete(local_30);
  }
                    /* catch() { ... } // from try @ 009db40c with catch @ 009db6b8 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 009db1f8 with catch @ 009db6c8 */
                    /* catch() { ... } // from try @ 009db434 with catch @ 009db6cc */
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

