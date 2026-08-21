
/* CCBProxy::getNodeTypeName(cocos2d::Node*) */

char * __thiscall CCBProxy::getNodeTypeName(CCBProxy *this,Node *param_1)

{
  long lVar1;
  char *pcVar2;
  
  if (param_1 == (Node *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else {
                    /* try { // try from 0091c03c to 00a1c03f has its CatchHandler @ 0091c074 */
                    /* try { // try from 0091c040 to 00a1c087 has its CatchHandler @ 0091bff0 */
    lVar1 = __dynamic_cast(param_1,&cocos2d::Node::typeinfo,&cocos2d::Label::typeinfo,0);
    if (lVar1 == 0) {
                    /* catch() { ... } // from try @ 0091c03c with catch @ 0091c074 */
      lVar1 = __dynamic_cast(param_1,&cocos2d::Node::typeinfo,&cocos2d::Sprite::typeinfo,0);
      if (lVar1 == 0) {
        lVar1 = __dynamic_cast(param_1,&cocos2d::Node::typeinfo,
                               &cocos2d::extension::ControlButton::typeinfo,0);
        if (lVar1 == 0) {
          lVar1 = __dynamic_cast(param_1,&cocos2d::Node::typeinfo,&cocos2d::LayerGradient::typeinfo,
                                 0);
          if (lVar1 == 0) {
            lVar1 = __dynamic_cast(param_1,&cocos2d::Node::typeinfo,&cocos2d::LayerColor::typeinfo,0
                                  );
            if (lVar1 == 0) {
              lVar1 = __dynamic_cast(param_1,&cocos2d::Node::typeinfo,
                                     &cocos2d::ui::Scale9Sprite::typeinfo,0);
              if (lVar1 == 0) {
                lVar1 = __dynamic_cast(param_1,&cocos2d::Node::typeinfo,&cocos2d::Menu::typeinfo,0);
                if (lVar1 == 0) {
                    /* try { // try from 0091c170 to 00a1c1a3 has its CatchHandler @ 0091c270 */
                  lVar1 = __dynamic_cast(param_1,&cocos2d::Node::typeinfo,
                                         &cocos2d::MenuItemAtlasFont::typeinfo,0);
                  if (lVar1 == 0) {
                    /* try { // try from 0091c1a4 to 00a1c1b7 has its CatchHandler @ 0091c23c */
                    lVar1 = __dynamic_cast(param_1,&cocos2d::Node::typeinfo,
                                           &cocos2d::MenuItemFont::typeinfo,0);
                    if (lVar1 == 0) {
                      lVar1 = __dynamic_cast(param_1,&cocos2d::Node::typeinfo,
                                             &cocos2d::MenuItemLabel::typeinfo,0);
                      if (lVar1 == 0) {
                    /* try { // try from 0091c1f0 to 00a1c28b has its CatchHandler @ 0091c088 */
                        lVar1 = __dynamic_cast(param_1,&cocos2d::Node::typeinfo,
                                               &cocos2d::MenuItemImage::typeinfo,0);
                        if (lVar1 == 0) {
                          lVar1 = __dynamic_cast(param_1,&cocos2d::Node::typeinfo,
                                                 &cocos2d::MenuItemToggle::typeinfo,0);
                          if (lVar1 == 0) {
                            lVar1 = __dynamic_cast(param_1,&cocos2d::Node::typeinfo,
                                                   &cocos2d::MenuItemSprite::typeinfo,0);
                            if (lVar1 == 0) {
                    /* try { // try from 0091c28c to 00a1c2d7 has its CatchHandler @ 0091c28c
                       catch() { ... } // from try @ 0091c28c with catch @ 0091c28c
                       catch() { ... } // from try @ 0091c2dc with catch @ 0091c28c */
                              lVar1 = __dynamic_cast(param_1,&cocos2d::Node::typeinfo,
                                                     &cocos2d::MenuItem::typeinfo,0);
                              if (lVar1 == 0) {
                                lVar1 = __dynamic_cast(param_1,&cocos2d::Node::typeinfo,
                                                       &cocos2d::Layer::typeinfo,0);
                                if (lVar1 == 0) {
                    /* try { // try from 0091c2d8 to 00a1c2db has its CatchHandler @ 0091c310 */
                    /* try { // try from 0091c2dc to 00a1c323 has its CatchHandler @ 0091c28c */
                                  lVar1 = __dynamic_cast(param_1,&cocos2d::Node::typeinfo,
                                                         &cocos2d::__String::typeinfo,
                                                         0xfffffffffffffffe);
                                  if (lVar1 == 0) {
                    /* catch() { ... } // from try @ 0091c2d8 with catch @ 0091c310 */
                                    lVar1 = __dynamic_cast(param_1,&cocos2d::Node::typeinfo,
                                                           &cocos2d::ParticleSystemQuad::typeinfo,0)
                                    ;
                    /* try { // try from 0091c324 to 00a1c3c3 has its CatchHandler @ 0091c324
                       catch() { ... } // from try @ 0091c324 with catch @ 0091c324
                       catch() { ... } // from try @ 0091c444 with catch @ 0091c324 */
                                    pcVar2 = "No Support";
                                    if (lVar1 != 0) {
                                      pcVar2 = "cc.ParticleSystemQuad";
                                    }
                                  }
                                  else {
                                    pcVar2 = "cc.String";
                                  }
                                }
                                else {
                                  pcVar2 = "cc.Layer";
                                }
                              }
                              else {
                                pcVar2 = "cc.MenuItem";
                              }
                            }
                            else {
                              pcVar2 = "cc.MenuItemSprite";
                    /* catch() { ... } // from try @ 0091c170 with catch @ 0091c270 */
                            }
                          }
                          else {
                    /* catch() { ... } // from try @ 0091c1a4 with catch @ 0091c23c */
                    /* catch() { ... } // from try @ 0091c1bc with catch @ 0091c240 */
                            pcVar2 = "cc.MenuItemToggle";
                          }
                        }
                        else {
                          pcVar2 = "cc.MenuItemImage";
                        }
                      }
                      else {
                        pcVar2 = "cc.MenuItemLabel";
                      }
                    }
                    else {
                    /* try { // try from 0091c1bc to 00a1c1ef has its CatchHandler @ 0091c240 */
                      pcVar2 = "cc.MenuItemFont";
                    }
                  }
                  else {
                    pcVar2 = "cc.MenuItemAtlasFont";
                  }
                }
                else {
                  pcVar2 = "cc.Menu";
                }
              }
              else {
                pcVar2 = "ccui.Scale9Sprite";
              }
            }
            else {
              pcVar2 = "cc.LayerColor";
            }
          }
          else {
            pcVar2 = "cc.LayerGradient";
          }
        }
        else {
          pcVar2 = "cc.ControlButton";
        }
      }
      else {
                    /* try { // try from 0091c088 to 00a1c16f has its CatchHandler @ 0091c088
                       catch() { ... } // from try @ 0091c088 with catch @ 0091c088
                       catch() { ... } // from try @ 0091c1f0 with catch @ 0091c088 */
        pcVar2 = "cc.Sprite";
      }
    }
    else {
      pcVar2 = "cc.Label";
    }
  }
  return pcVar2;
}

