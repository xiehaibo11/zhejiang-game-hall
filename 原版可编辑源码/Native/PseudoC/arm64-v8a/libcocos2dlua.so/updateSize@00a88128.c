
/* fairygui::GRichTextField::updateSize() */

void __thiscall fairygui::GRichTextField::updateSize(GRichTextField *this)

{
  long lVar1;
  Size *pSVar2;
  float local_30;
  float local_2c;
  long local_28;
  
                    /* catch() { ... } // from try @ 00a87b34 with catch @ 00a88128 */
                    /* catch() { ... } // from try @ 00a87b2c with catch @ 00a88138 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00a87a98 with catch @ 00a8813c */
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00a87754 with catch @ 00a88140 */
                    /* catch() { ... } // from try @ 00a87698 with catch @ 00a88144 */
                    /* catch() { ... } // from try @ 00a87540 with catch @ 00a88148 */
  if (this[0x208] != (GRichTextField)0x0) goto LAB_00a881a8;
                    /* catch() { ... } // from try @ 00a87324 with catch @ 00a8814c */
  this[0x208] = (GRichTextField)0x1;
                    /* catch() { ... } // from try @ 00a8731c with catch @ 00a8815c */
  pSVar2 = (Size *)(**(code **)(**(long **)(this + 0x200) + 0x168))();
  cocos2d::Size::Size((Size *)&local_30,pSVar2);
  if (*(int *)(this + 500) == 2) {
                    /* catch() { ... } // from try @ 00a87548 with catch @ 00a88190
                       catch() { ... } // from try @ 00a88004 with catch @ 00a88190 */
                    /* catch() { ... } // from try @ 00a87964 with catch @ 00a88194
                       catch() { ... } // from try @ 00a87fec with catch @ 00a88194 */
    local_30 = *(float *)(this + 0xd0);
LAB_00a88198:
                    /* catch() { ... } // from try @ 00a8775c with catch @ 00a88198
                       catch() { ... } // from try @ 00a8801c with catch @ 00a88198 */
                    /* catch() { ... } // from try @ 00a87b48 with catch @ 00a8819c
                       catch() { ... } // from try @ 00a8804c with catch @ 00a8819c */
                    /* catch() { ... } // from try @ 00a87330 with catch @ 00a881a0
                       catch() { ... } // from try @ 00a88034 with catch @ 00a881a0 */
    GObject::setSize((GObject *)this,local_30,local_2c,false);
  }
  else if (*(int *)(this + 500) == 1) goto LAB_00a88198;
  this[0x208] = (GRichTextField)0x0;
LAB_00a881a8:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00a87d90 with catch @ 00a881b8
                       catch() { ... } // from try @ 00a88064 with catch @ 00a881b8 */
  return;
}

