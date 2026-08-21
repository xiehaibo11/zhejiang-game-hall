
/* fairygui::GLoader::onExternalLoadSuccess(cocos2d::SpriteFrame*) */

void __thiscall fairygui::GLoader::onExternalLoadSuccess(GLoader *this,SpriteFrame *param_1)

{
  *(undefined4 *)(this + 0x210) = 4;
  (**(code **)(**(long **)(this + 0x220) + 0x598))();
  cocos2d::Size::operator=((Size *)(this + 0x78),(Size *)(param_1 + 0x50));
  updateLayout(this);
  return;
}

