
/* fairygui::FUIRichText::handleRichRenderer(fairygui::HtmlElement*) */

void __thiscall fairygui::FUIRichText::handleRichRenderer(FUIRichText *this,HtmlElement *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  Node *local_48;
  HtmlElement *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0x400);
  local_40 = param_1;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_009d64e4();
  }
  local_40 = (HtmlElement *)(**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  if (local_40 != (HtmlElement *)0x0) {
    *(HtmlElement **)(param_1 + 0x88) = local_40;
    plVar2 = *(long **)(this + 0x318);
    if (plVar2 == *(long **)(this + 800)) {
      std::__ndk1::vector<fairygui::HtmlObject*,std::__ndk1::allocator<fairygui::HtmlObject*>>::
      __push_back_slow_path<fairygui::HtmlObject*const&>
                ((vector<fairygui::HtmlObject*,std::__ndk1::allocator<fairygui::HtmlObject*>> *)
                 (this + 0x310),(HtmlObject **)&local_40);
    }
    else {
      *plVar2 = (long)local_40;
      *(long **)(this + 0x318) = plVar2 + 1;
    }
    (**(code **)(*(long *)local_40 + 0x10))(local_40,this,param_1);
                    /* try { // try from 00aa9644 to 00ba968f has its CatchHandler @ 00aa9644
                       catch() { ... } // from try @ 00aa9644 with catch @ 00aa9644
                       catch() { ... } // from try @ 00aa9694 with catch @ 00aa9644 */
    if (local_40[0x20] == (HtmlElement)0x0) {
      (**(code **)(**(long **)(*(long *)(local_40 + 0x18) + 0xa8) + 0x2e8))
                (*(long **)(*(long *)(local_40 + 0x18) + 0xa8),param_1);
      lVar3 = *(long *)(local_40 + 0x18);
      fVar6 = *(float *)(lVar3 + 200) + 4.0;
      fVar5 = *(float *)(this + 0x34c) - fVar6;
      *(float *)(this + 0x34c) = fVar5;
      if (fVar5 < 0.0) {
                    /* try { // try from 00aa9690 to 00ba9693 has its CatchHandler @ 00aa96c8 */
        puVar4 = *(undefined8 **)(this + 0x330);
                    /* try { // try from 00aa9694 to 00ba96db has its CatchHandler @ 00aa9644 */
        *(undefined4 *)(this + 0x34c) = *(undefined4 *)(this + 0x350);
        if (puVar4 < *(undefined8 **)(this + 0x338)) {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          *(undefined8 **)(this + 0x330) = puVar4 + 3;
        }
        else {
          std::__ndk1::
          vector<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>>
          ::__emplace_back_slow_path<>
                    ((vector<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>>
                      *)(this + 0x328));
        }
                    /* catch() { ... } // from try @ 00aa9690 with catch @ 00aa96c8 */
        *(int *)(this + 0x354) = *(int *)(this + 0x354) + 1;
                    /* try { // try from 00aa96dc to 00ba9973 has its CatchHandler @ 00aa96dc
                       catch() { ... } // from try @ 00aa96dc with catch @ 00aa96dc
                       catch() { ... } // from try @ 00aa99f4 with catch @ 00aa96dc */
        *(float *)(this + 0x34c) = *(float *)(this + 0x34c) - fVar6;
        lVar3 = *(long *)(local_40 + 0x18);
      }
      local_48 = *(Node **)(lVar3 + 0xa8);
      lVar3 = *(long *)(this + 0x330);
      puVar4 = *(undefined8 **)(lVar3 + -0x10);
      if (puVar4 < *(undefined8 **)(lVar3 + -8)) {
        *puVar4 = local_48;
        *(undefined8 **)(lVar3 + -0x10) = puVar4 + 1;
      }
      else {
        std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
        __push_back_slow_path<cocos2d::Node*>
                  ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)(lVar3 + -0x18),
                   &local_48);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

