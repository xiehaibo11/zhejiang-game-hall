
/* cocos2d::ui::ListView::addChild(cocos2d::Node*, int) */

void __thiscall cocos2d::ui::ListView::addChild(ListView *this,Node *param_1,int param_2)

{
  long lVar1;
  basic_string *pbVar2;
  Ref *pRVar3;
  long *plVar4;
  Ref *local_40;
  long local_38;
  
                    /* try { // try from 00db6190 to 00eb6193 has its CatchHandler @ 00db61c0 */
                    /* try { // try from 00db6194 to 00eb61d3 has its CatchHandler @ 00db5cc4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db6190 with catch @ 00db61c0
                        */
  pbVar2 = (basic_string *)(**(code **)(*(long *)param_1 + 0x2c8))(param_1);
                    /* try { // try from 00db61d4 to 00eb62c7 has its CatchHandler @ 00db61d4
                       catch(type#1 @ 00000000) { ... } // from try @ 00db61d4 with catch @ 00db61d4
                       catch(type#1 @ 00000000) { ... } // from try @ 00db63bc with catch @ 00db61d4
                       catch(type#1 @ 00000000) { ... } // from try @ 00db6428 with catch @ 00db61d4
                        */
  ScrollView::addChild((ScrollView *)this,param_1,param_2,pbVar2);
  if ((param_1 != (Node *)0x0) &&
     (pRVar3 = (Ref *)__dynamic_cast(param_1,&Node::typeinfo,&Widget::typeinfo,0),
     pRVar3 != (Ref *)0x0)) {
    plVar4 = *(long **)(this + 0x8c0);
    local_40 = pRVar3;
    if (plVar4 == *(long **)(this + 0x8c8)) {
      std::__ndk1::vector<cocos2d::ui::Widget*,std::__ndk1::allocator<cocos2d::ui::Widget*>>::
      __push_back_slow_path<cocos2d::ui::Widget*const&>
                ((vector<cocos2d::ui::Widget*,std::__ndk1::allocator<cocos2d::ui::Widget*>> *)
                 (this + 0x8b8),(Widget **)&local_40);
    }
    else {
      *plVar4 = (long)pRVar3;
      *(long **)(this + 0x8c0) = plVar4 + 1;
    }
    Ref::retain(local_40);
    (**(code **)(*(long *)this + 0x7f8))(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

