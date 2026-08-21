
/* cocos2d::ui::EditBox::adaptRenderers() */

void __thiscall cocos2d::ui::EditBox::adaptRenderers(EditBox *this)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00deafd8 with catch @ 00deb2a4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00deb264 with catch @ 00deb2a8
                        */
  if (this[0x55b] != (EditBox)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00deb170 with catch @ 00deb2bc
                        */
    Scale9Sprite::setPreferredSize(*(Size **)(this + 0x4f8));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00deb0f8 with catch @ 00deb2c0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00deb08c with catch @ 00deb2d4
                        */
    (**(code **)(**(long **)(this + 0x4f8) + 200))
              (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
    this[0x55b] = (EditBox)0x0;
  }
  if (this[0x55c] != (EditBox)0x0) {
    Scale9Sprite::setPreferredSize(*(Size **)(this + 0x500));
    (**(code **)(**(long **)(this + 0x500) + 200))
              (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
    this[0x55c] = (EditBox)0x0;
  }
  if (this[0x55d] != (EditBox)0x0) {
    Scale9Sprite::setPreferredSize(*(Size **)(this + 0x508));
    (**(code **)(**(long **)(this + 0x508) + 200))
              (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
    this[0x55d] = (EditBox)0x0;
  }
  return;
}

