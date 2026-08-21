
/* fairygui::ScrollPane::scrollToView(fairygui::GObject*, bool, bool) */

void __thiscall
fairygui::ScrollPane::scrollToView(ScrollPane *this,GObject *param_1,bool param_2,bool param_3)

{
  long lVar1;
  Rect aRStack_68 [16];
  Rect aRStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00a93b4c with catch @ 00a93c90
                       catch() { ... } // from try @ 00a93c24 with catch @ 00a93c90 */
                    /* catch() { ... } // from try @ 00a93b94 with catch @ 00a93c94
                       catch() { ... } // from try @ 00a93c3c with catch @ 00a93c94 */
  GComponent::ensureBoundsCorrect(*(GComponent **)(this + 0xf8));
  if (this[0x45] != (ScrollPane)0x0) {
    refresh();
  }
  cocos2d::Rect::Rect(aRStack_58,*(float *)(param_1 + 0xc0),*(float *)(param_1 + 0xc4),
                      *(float *)(param_1 + 200),*(float *)(param_1 + 0xcc));
  if (*(Rect **)(param_1 + 0xa0) != *(Rect **)(this + 0xf8)) {
    GObject::transformRect(*(Rect **)(param_1 + 0xa0),(GObject *)aRStack_58);
    cocos2d::Rect::operator=(aRStack_58,aRStack_68);
  }
  scrollToView(this,aRStack_58,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

