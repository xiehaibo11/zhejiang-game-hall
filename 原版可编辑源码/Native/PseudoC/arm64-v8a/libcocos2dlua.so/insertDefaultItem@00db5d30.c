
/* cocos2d::ui::ListView::insertDefaultItem(long) */

void __thiscall cocos2d::ui::ListView::insertDefaultItem(ListView *this,long param_1)

{
  long lVar1;
  Node *pNVar2;
  long lVar3;
  Ref *local_40;
  long local_38;
  
                    /* try { // try from 00db5d40 to 00eb5d47 has its CatchHandler @ 00db6008 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(Widget **)(this + 0x8b0) != (Widget *)0x0) {
    pNVar2 = (Node *)Widget::clone(*(Widget **)(this + 0x8b0));
    lVar3 = *(long *)(this + 0x8f8);
    if ((lVar3 != -1) && (param_1 <= lVar3)) {
      *(long *)(this + 0x8f8) = lVar3 + 1;
    }
    local_40 = (Ref *)pNVar2;
    std::__ndk1::vector<cocos2d::ui::Widget*,std::__ndk1::allocator<cocos2d::ui::Widget*>>::insert
              ((vector<cocos2d::ui::Widget*,std::__ndk1::allocator<cocos2d::ui::Widget*>> *)
               (this + 0x8b8),*(long *)(this + 0x8b8) + param_1 * 8,&local_40);
    Ref::retain(local_40);
    (**(code **)(*(long *)this + 0x7f8))(this);
    ScrollView::addChild((ScrollView *)this,pNVar2);
                    /* try { // try from 00db5dc8 to 00eb5ddb has its CatchHandler @ 00db6010 */
    (**(code **)(*(long *)this + 0x800))(this,pNVar2);
    (**(code **)(*(long *)this + 0x6a8))(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

