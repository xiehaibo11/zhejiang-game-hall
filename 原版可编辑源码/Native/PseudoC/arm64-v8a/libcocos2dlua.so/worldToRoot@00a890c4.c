
/* fairygui::GRoot::worldToRoot(cocos2d::Vec2 const&) */

void __thiscall fairygui::GRoot::worldToRoot(GRoot *this,Vec2 *param_1)

{
  cocos2d::Node::convertToNodeSpace(*(Node **)(this + 0xa8),param_1);
  return;
}

