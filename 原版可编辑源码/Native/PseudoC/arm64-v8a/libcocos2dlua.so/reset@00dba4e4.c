
/* cocos2d::ui::PageViewIndicator::reset(long) */

void __thiscall cocos2d::ui::PageViewIndicator::reset(PageViewIndicator *this,long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 800) - *(long *)(this + 0x318);
  while (lVar1 = lVar1 >> 3, lVar1 < param_1) {
    increaseNumberOfPages(this);
    lVar1 = *(long *)(this + 800) - *(long *)(this + 0x318);
  }
  while (param_1 < lVar1) {
    decreaseNumberOfPages(this);
    lVar1 = *(long *)(this + 800) - *(long *)(this + 0x318) >> 3;
  }
  rearrange(this);
                    /* WARNING: Could not recover jumptable at 0x00dba580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x330) + 0x170))
            (*(long **)(this + 0x330),*(long *)(this + 0x318) != *(long *)(this + 800));
  return;
}

