
/* cocos2d::ui::PageViewIndicator::increaseNumberOfPages() */

void __thiscall cocos2d::ui::PageViewIndicator::increaseNumberOfPages(PageViewIndicator *this)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  Ref *unaff_x20;
  Ref *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0x338);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x170))(plVar2,1);
    *(undefined8 *)(this + 0x338) = 0;
  }
  if (this[0x34c] == (PageViewIndicator)0x0) {
    if (*(int *)(this + 0x368) == 1) {
      unaff_x20 = (Ref *)Sprite::createWithSpriteFrameName((basic_string *)(this + 0x350));
    }
    else if (*(int *)(this + 0x368) == 0) {
      unaff_x20 = (Ref *)Sprite::create((basic_string *)(this + 0x350));
    }
  }
  else {
    unaff_x20 = (Ref *)utils::createSpriteFromBase64
                                 (
                                 "iVBORw0KGgoAAAANSUhEUgAAACAAAAAgCAQAAADZc7J/AAAA8ElEQVRIx62VyRGCQBBF+6gWRCEmYDIQkhiBCgHhSclC8YqWzOV5oVzKAYZp3r1/9fpbxAIBMTsKrjx5cqVgR0wgLhCRUWOjJiPqD56xoaGPhpRZV/iSEy6crHmw5oIrF9b/lVeMofrJgjlnxlIy/wik+JB+mme8BExbBhm+5CJC2LE2LtSEQoyGWDioBA5CoRIohJtK4CYDxzNEM4GAugR1E9VjVC+SZpXvhCJCrjomESLvc17pDGX7bWmlh6UtpjPVCWy9zaJ0TD7qfm3pwERMz2trRVZk3K3BD/L34AY+dEDCniMVBkPFkT2J/b2/AIV+dRpFLOYoAAAAAElFTkSuQmCC"
                                 );
  }
  (**(code **)(*(long *)unaff_x20 + 0x4c0))(unaff_x20,this + 0x348);
  (**(code **)(*(long *)unaff_x20 + 0x80))(*(undefined4 *)(this + 0x344),unaff_x20);
  (**(code **)(*(long *)unaff_x20 + 0x490))(unaff_x20,this[0x34b]);
  (**(code **)(*(long *)this + 0x530))(this,unaff_x20);
  puVar3 = *(undefined8 **)(this + 800);
  local_40 = unaff_x20;
  if (puVar3 == *(undefined8 **)(this + 0x328)) {
    std::__ndk1::vector<cocos2d::Sprite*,std::__ndk1::allocator<cocos2d::Sprite*>>::
    __push_back_slow_path<cocos2d::Sprite*const&>
              ((vector<cocos2d::Sprite*,std::__ndk1::allocator<cocos2d::Sprite*>> *)(this + 0x318),
               (Sprite **)&local_40);
  }
  else {
    *puVar3 = unaff_x20;
    *(undefined8 **)(this + 800) = puVar3 + 1;
  }
  Ref::retain(local_40);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

