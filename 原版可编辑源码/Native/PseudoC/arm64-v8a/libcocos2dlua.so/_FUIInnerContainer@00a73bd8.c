
/* fairygui::FUIInnerContainer::~FUIInnerContainer() */

void __thiscall fairygui::FUIInnerContainer::~FUIInnerContainer(FUIInnerContainer *this)

{
                    /* try { // try from 00a73be8 to 00b73c0f has its CatchHandler @ 00a73cec */
  cocos2d::Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

