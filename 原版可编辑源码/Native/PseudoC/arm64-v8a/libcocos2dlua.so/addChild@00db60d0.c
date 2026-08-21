
/* cocos2d::ui::ListView::addChild(cocos2d::Node*, int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::ui::ListView::addChild(ListView *this,Node *param_1,int param_2,basic_string *param_3)

{
  long lVar1;
  Ref *pRVar2;
  long *plVar3;
  Ref *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ScrollView::addChild((ScrollView *)this,param_1,param_2,param_3);
  if ((param_1 != (Node *)0x0) &&
     (pRVar2 = (Ref *)__dynamic_cast(param_1,&Node::typeinfo,&Widget::typeinfo,0),
     pRVar2 != (Ref *)0x0)) {
    plVar3 = *(long **)(this + 0x8c0);
    local_40 = pRVar2;
    if (plVar3 == *(long **)(this + 0x8c8)) {
      std::__ndk1::vector<cocos2d::ui::Widget*,std::__ndk1::allocator<cocos2d::ui::Widget*>>::
      __push_back_slow_path<cocos2d::ui::Widget*const&>
                ((vector<cocos2d::ui::Widget*,std::__ndk1::allocator<cocos2d::ui::Widget*>> *)
                 (this + 0x8b8),(Widget **)&local_40);
    }
    else {
      *plVar3 = (long)pRVar2;
      *(long **)(this + 0x8c0) = plVar3 + 1;
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

