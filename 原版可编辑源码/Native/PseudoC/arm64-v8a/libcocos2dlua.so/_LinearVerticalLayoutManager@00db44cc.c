
/* cocos2d::ui::LinearVerticalLayoutManager::~LinearVerticalLayoutManager() */

void __thiscall
cocos2d::ui::LinearVerticalLayoutManager::~LinearVerticalLayoutManager
          (LinearVerticalLayoutManager *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

