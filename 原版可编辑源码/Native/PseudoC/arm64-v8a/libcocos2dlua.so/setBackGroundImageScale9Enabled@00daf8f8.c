
/* cocos2d::ui::Layout::setBackGroundImageScale9Enabled(bool) */

void __thiscall cocos2d::ui::Layout::setBackGroundImageScale9Enabled(Layout *this,bool param_1)

{
  Rect *this_00;
  Scale9Sprite *pSVar1;
  Size *pSVar2;
  
                    /* catch() { ... } // from try @ 00daf728 with catch @ 00daf8f8 */
                    /* catch() { ... } // from try @ 00daf748 with catch @ 00daf8fc */
  if (this[0x530] == (Layout)param_1) {
    return;
  }
                    /* catch() { ... } // from try @ 00daf6ec with catch @ 00daf914 */
                    /* catch() { ... } // from try @ 00daf694 with catch @ 00daf918 */
  pSVar1 = *(Scale9Sprite **)(this + 0x538);
                    /* catch() { ... } // from try @ 00daf6a0 with catch @ 00daf91c */
  this[0x530] = (Layout)param_1;
  if (pSVar1 == (Scale9Sprite *)0x0) {
    pSVar1 = (Scale9Sprite *)Scale9Sprite::create();
                    /* catch() { ... } // from try @ 00daf540 with catch @ 00daf944 */
    *(Scale9Sprite **)(this + 0x538) = pSVar1;
                    /* catch() { ... } // from try @ 00daf514 with catch @ 00daf948 */
    Scale9Sprite::setRenderingType(pSVar1,0);
    (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x538),0xffffffff,0xffffffff);
                    /* catch() { ... } // from try @ 00daf56c with catch @ 00daf968 */
                    /* catch() { ... } // from try @ 00daf61c with catch @ 00daf96c */
    (**(code **)(**(long **)(this + 0x538) + 200))
              (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
    setBackGroundImage(this,this + 0x540,*(undefined4 *)(this + 0x56c));
                    /* catch() { ... } // from try @ 00daf7d8 with catch @ 00daf99c */
    pSVar1 = *(Scale9Sprite **)(this + 0x538);
                    /* catch() { ... } // from try @ 00daf7bc with catch @ 00daf9a0 */
    if (this[0x530] != (Layout)0x0) goto LAB_00daf928;
  }
  else if (param_1) {
LAB_00daf928:
    Scale9Sprite::setRenderingType(pSVar1,1);
                    /* catch() { ... } // from try @ 00daf560 with catch @ 00daf930 */
    pSVar2 = *(Size **)(this + 0x538);
                    /* catch() { ... } // from try @ 00daf54c with catch @ 00daf934 */
    goto LAB_00daf9b4;
  }
                    /* catch() { ... } // from try @ 00daf7a0 with catch @ 00daf9a4 */
                    /* catch() { ... } // from try @ 00daf5a4 with catch @ 00daf9a8
                       catch() { ... } // from try @ 00daf5dc with catch @ 00daf9a8 */
  Scale9Sprite::setRenderingType(pSVar1,0);
                    /* catch() { ... } // from try @ 00daf880 with catch @ 00daf9ac */
  pSVar2 = *(Size **)(this + 0x538);
LAB_00daf9b4:
  Scale9Sprite::setPreferredSize(pSVar2);
  this_00 = (Rect *)(this + 0x558);
                    /* catch() { ... } // from try @ 00daf7f4 with catch @ 00daf9bc */
  Rect::operator=(this_00,this_00);
  if ((this[0x530] != (Layout)0x0) && (*(Scale9Sprite **)(this + 0x538) != (Scale9Sprite *)0x0)) {
                    /* try { // try from 00daf9d8 to 00eafa53 has its CatchHandler @ 00daf9d8
                       catch() { ... } // from try @ 00daf9d8 with catch @ 00daf9d8
                       catch() { ... } // from try @ 00dafa60 with catch @ 00daf9d8 */
    Scale9Sprite::setCapInsets(*(Scale9Sprite **)(this + 0x538),this_00);
    return;
  }
  return;
}

