
/* cocos2d::ui::ListView::insertCustomItem(cocos2d::ui::Widget*, long) */

void __thiscall cocos2d::ui::ListView::insertCustomItem(ListView *this,Widget *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  Ref *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00db5e2c to 00eb5e33 has its CatchHandler @ 00db600c */
  lVar2 = *(long *)(this + 0x8f8);
  if ((lVar2 != -1) && (param_2 <= lVar2)) {
                    /* try { // try from 00db5e48 to 00eb5e4f has its CatchHandler @ 00db6004 */
    *(long *)(this + 0x8f8) = lVar2 + 1;
  }
  local_40 = (Ref *)param_1;
                    /* try { // try from 00db5e60 to 00eb5e63 has its CatchHandler @ 00db606c */
  std::__ndk1::vector<cocos2d::ui::Widget*,std::__ndk1::allocator<cocos2d::ui::Widget*>>::insert
            ((vector<cocos2d::ui::Widget*,std::__ndk1::allocator<cocos2d::ui::Widget*>> *)
             (this + 0x8b8),*(long *)(this + 0x8b8) + param_2 * 8,&local_40);
  Ref::retain(local_40);
  (**(code **)(*(long *)this + 0x7f8))(this);
  ScrollView::addChild((ScrollView *)this,(Node *)param_1);
  (**(code **)(*(long *)this + 0x800))(this,param_1);
  (**(code **)(*(long *)this + 0x6a8))(this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00db5ecc to 00eb5ed3 has its CatchHandler @ 00db6018 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

