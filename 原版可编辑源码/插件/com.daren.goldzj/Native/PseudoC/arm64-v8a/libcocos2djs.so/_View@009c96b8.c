
/* cocos2d::renderer::View::~View() */

void __thiscall cocos2d::renderer::View::~View(View *this)

{
  ~View(this);
  operator_delete(this);
  return;
}

