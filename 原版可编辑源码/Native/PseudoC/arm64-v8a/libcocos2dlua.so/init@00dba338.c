
/* cocos2d::ui::PageViewIndicator::init() */

undefined8 __thiscall cocos2d::ui::PageViewIndicator::init(PageViewIndicator *this)

{
  long *plVar1;
  
  plVar1 = (long *)utils::createSpriteFromBase64Cached
                             ("iVBORw0KGgoAAAANSUhEUgAAACAAAAAgCAQAAADZc7J/AAAA8ElEQVRIx62VyRGCQBBF+6gWRCEmYDIQkhiBCgHhSclC8YqWzOV5oVzKAYZp3r1/9fpbxAIBMTsKrjx5cqVgR0wgLhCRUWOjJiPqD56xoaGPhpRZV/iSEy6crHmw5oIrF9b/lVeMofrJgjlnxlIy/wik+JB+mme8BExbBhm+5CJC2LE2LtSEQoyGWDioBA5CoRIohJtK4CYDxzNEM4GAugR1E9VjVC+SZpXvhCJCrjomESLvc17pDGX7bWmlh6UtpjPVCWy9zaJ0TD7qfm3pwERMz2trRVZk3K3BD/L34AY+dEDCniMVBkPFkT2J/b2/AIV+dRpFLOYoAAAAAElFTkSuQmCC"
                              ,"/__circleImage");
  *(long **)(this + 0x330) = plVar1;
  (**(code **)(*plVar1 + 0x170))(plVar1,0);
  (**(code **)(*(long *)this + 0x538))(this,*(undefined8 *)(this + 0x330),1);
  return 1;
}

