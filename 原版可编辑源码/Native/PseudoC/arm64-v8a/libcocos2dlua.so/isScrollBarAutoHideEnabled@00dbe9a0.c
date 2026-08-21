
/* cocos2d::ui::ScrollView::isScrollBarAutoHideEnabled() const */

bool __thiscall cocos2d::ui::ScrollView::isScrollBarAutoHideEnabled(ScrollView *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x858);
  if ((lVar1 == 0) && (lVar1 = *(long *)(this + 0x860), lVar1 == 0)) {
    return false;
  }
  return *(char *)(lVar1 + 0x34d) != '\0';
}

