
/* cocos2d::ResizeTo::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::ResizeTo::startWithTarget(ResizeTo *this,Node *param_1)

{
  long lVar1;
  Size *pSVar2;
  Size aSStack_40 [8];
  long local_38;
  
                    /* try { // try from 00ee07bc to 00fe07cf has its CatchHandler @ 00ee0808 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00ee07d0 to 00fe0823 has its CatchHandler @ 00ee075c */
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  pSVar2 = (Size *)(**(code **)(*(long *)param_1 + 0x168))(param_1);
  Size::operator=((Size *)(this + 0x58),pSVar2);
                    /* catch() { ... } // from try @ 00ee07bc with catch @ 00ee0808 */
  Size::operator-((Size *)(this + 0x60),(Size *)(this + 0x58));
  Size::operator=((Size *)(this + 0x68),aSStack_40);
                    /* try { // try from 00ee0824 to 00fe088b has its CatchHandler @ 00ee0824
                       catch() { ... } // from try @ 00ee0824 with catch @ 00ee0824
                       catch() { ... } // from try @ 00ee08a0 with catch @ 00ee0824 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

