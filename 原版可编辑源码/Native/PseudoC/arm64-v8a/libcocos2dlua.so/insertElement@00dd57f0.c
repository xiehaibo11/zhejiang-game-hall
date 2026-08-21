
/* cocos2d::ui::RichText::insertElement(cocos2d::ui::RichElement*, int) */

void __thiscall
cocos2d::ui::RichText::insertElement(RichText *this,RichElement *param_1,int param_2)

{
  long lVar1;
  Ref *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (Ref *)param_1;
  std::__ndk1::vector<cocos2d::ui::RichElement*,std::__ndk1::allocator<cocos2d::ui::RichElement*>>::
  insert((vector<cocos2d::ui::RichElement*,std::__ndk1::allocator<cocos2d::ui::RichElement*>> *)
         (this + 0x4f8),*(long *)(this + 0x4f8) + (long)param_2 * 8,&local_30);
  Ref::retain(local_30);
  this[0x4f0] = (RichText)0x1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

