
/* fairygui::GLoader::loadExternal() */

void __thiscall fairygui::GLoader::loadExternal(GLoader *this)

{
  long lVar1;
  Director *this_00;
  TextureCache *this_01;
  Texture2D *pTVar2;
  long lVar3;
  Size aSStack_50 [8];
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (Director *)cocos2d::Director::getInstance();
  this_01 = (TextureCache *)cocos2d::Director::getTextureCache(this_00);
  pTVar2 = (Texture2D *)cocos2d::TextureCache::addImage(this_01,(basic_string *)(this + 0x1d8));
  if (pTVar2 != (Texture2D *)0x0) {
    cocos2d::Texture2D::getContentSize();
    cocos2d::Rect::Rect(aRStack_48,(Vec2 *)&cocos2d::Vec2::ZERO,aSStack_50);
    lVar3 = cocos2d::SpriteFrame::createWithTexture(pTVar2,aRStack_48);
    *(undefined4 *)(this + 0x210) = 4;
    (**(code **)(**(long **)(this + 0x220) + 0x598))(*(long **)(this + 0x220),lVar3);
    cocos2d::Size::operator=((Size *)(this + 0x78),(Size *)(lVar3 + 0x50));
    updateLayout(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

