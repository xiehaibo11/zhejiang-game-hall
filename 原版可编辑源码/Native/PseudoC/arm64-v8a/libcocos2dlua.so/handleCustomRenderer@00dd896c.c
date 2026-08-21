
/* cocos2d::ui::RichText::handleCustomRenderer(cocos2d::Node*) */

void __thiscall cocos2d::ui::RichText::handleCustomRenderer(RichText *this,Node *param_1)

{
  long lVar1;
  Size *pSVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  float local_48 [2];
  Node *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pSVar2 = (Size *)(**(code **)(*(long *)param_1 + 0x168))(param_1);
  Size::Size((Size *)local_48,pSVar2);
                    /* catch() { ... } // from try @ 00dd88a0 with catch @ 00dd89b4 */
  fVar8 = *(float *)(this + 0x540);
  *(float *)(this + 0x540) = fVar8 - local_48[0];
                    /* catch() { ... } // from try @ 00dd8948 with catch @ 00dd89c4 */
  if (0.0 <= fVar8 - local_48[0]) {
    lVar3 = *(long *)(this + 0x510);
    if (*(long *)(this + 0x518) - lVar3 != 0) {
                    /* try { // try from 00dd8a3c to 00ed8a43 has its CatchHandler @ 00dd8a70 */
      lVar4 = (*(long *)(this + 0x518) - lVar3 >> 3) * -0x5555555555555555 + -1;
                    /* try { // try from 00dd8a44 to 00ed8a8b has its CatchHandler @ 00dd8a0c */
      lVar5 = lVar3 + lVar4 * 0x18;
      puVar6 = (undefined8 *)(lVar5 + 8);
      puVar7 = (undefined8 *)*puVar6;
      if (puVar7 == *(undefined8 **)(lVar5 + 0x10)) {
        local_40 = param_1;
        std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
        __push_back_slow_path<cocos2d::Node*const&>
                  ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)
                   (lVar3 + lVar4 * 0x18),&local_40);
      }
      else {
        *puVar7 = param_1;
        *puVar6 = puVar7 + 1;
        local_40 = param_1;
      }
      Ref::retain((Ref *)local_40);
    }
  }
  else {
                    /* catch() { ... } // from try @ 00dd88cc with catch @ 00dd89c8 */
    addNewLine(this);
    lVar3 = *(long *)(this + 0x510);
    if (*(long *)(this + 0x518) - lVar3 != 0) {
      lVar4 = (*(long *)(this + 0x518) - lVar3 >> 3) * -0x5555555555555555 + -1;
      lVar5 = lVar3 + lVar4 * 0x18;
      puVar6 = (undefined8 *)(lVar5 + 8);
      puVar7 = (undefined8 *)*puVar6;
                    /* catch() { ... } // from try @ 00dd8a44 with catch @ 00dd8a0c */
      if (puVar7 == *(undefined8 **)(lVar5 + 0x10)) {
                    /* catch() { ... } // from try @ 00dd8a3c with catch @ 00dd8a70 */
        local_40 = param_1;
        std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
        __push_back_slow_path<cocos2d::Node*const&>
                  ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)
                   (lVar3 + lVar4 * 0x18),&local_40);
      }
      else {
        *puVar7 = param_1;
        *puVar6 = puVar7 + 1;
        local_40 = param_1;
      }
      Ref::retain((Ref *)local_40);
    }
                    /* catch() { ... } // from try @ 00dd8ac4 with catch @ 00dd8a8c */
    *(float *)(this + 0x540) = *(float *)(this + 0x540) - local_48[0];
  }
                    /* try { // try from 00dd8abc to 00ed8ac3 has its CatchHandler @ 00dd8af0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00dd8ac4 to 00ed8b0b has its CatchHandler @ 00dd8a8c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

