
/* cocos2d::ui::ListView::addChild(cocos2d::Node*) */

void __thiscall cocos2d::ui::ListView::addChild(ListView *this,Node *param_1)

{
  long lVar1;
  int iVar2;
  basic_string *pbVar3;
  Ref *pRVar4;
  long *plVar5;
  Ref *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db5e48 with catch @ 00db6004
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db5d40 with catch @ 00db6008
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db5e2c with catch @ 00db600c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db5dc8 with catch @ 00db6010
                        */
  iVar2 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db5ecc with catch @ 00db6018
                        */
  pbVar3 = (basic_string *)(**(code **)(*(long *)param_1 + 0x2c8))(param_1);
                    /* try { // try from 00db602c to 00eb602f has its CatchHandler @ 00db6054 */
  ScrollView::addChild((ScrollView *)this,param_1,iVar2,pbVar3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db602c with catch @ 00db6054
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db5efc with catch @ 00db6058
                        */
  if ((param_1 != (Node *)0x0) &&
     (pRVar4 = (Ref *)__dynamic_cast(param_1,&Node::typeinfo,&Widget::typeinfo,0),
     pRVar4 != (Ref *)0x0)) {
    plVar5 = *(long **)(this + 0x8c0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db5e60 with catch @ 00db606c
                        */
    local_40 = pRVar4;
    if (plVar5 == *(long **)(this + 0x8c8)) {
      std::__ndk1::vector<cocos2d::ui::Widget*,std::__ndk1::allocator<cocos2d::ui::Widget*>>::
      __push_back_slow_path<cocos2d::ui::Widget*const&>
                ((vector<cocos2d::ui::Widget*,std::__ndk1::allocator<cocos2d::ui::Widget*>> *)
                 (this + 0x8b8),(Widget **)&local_40);
    }
    else {
      *plVar5 = (long)pRVar4;
      *(long **)(this + 0x8c0) = plVar5 + 1;
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

