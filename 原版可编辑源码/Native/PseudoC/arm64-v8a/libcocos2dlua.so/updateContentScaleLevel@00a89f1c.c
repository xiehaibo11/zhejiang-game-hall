
/* fairygui::GRoot::updateContentScaleLevel() */

void fairygui::GRoot::updateContentScaleLevel(void)

{
  long lVar1;
  float fVar2;
  
  lVar1 = cocos2d::Director::getInstance();
  fVar2 = *(float *)(lVar1 + 0x1a0);
  if (3.5 <= fVar2) {
    contentScaleLevel = 3;
  }
  else if (2.5 <= fVar2) {
    contentScaleLevel = 2;
  }
  else {
    contentScaleLevel = (uint)(1.5 <= fVar2);
  }
                    /* catch() { ... } // from try @ 00a89c98 with catch @ 00a89f6c */
                    /* catch() { ... } // from try @ 00a89c60 with catch @ 00a89f70 */
  return;
}

