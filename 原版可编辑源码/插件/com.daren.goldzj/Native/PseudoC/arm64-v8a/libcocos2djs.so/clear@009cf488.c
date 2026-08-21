
/* cocos2d::renderer::RenderDataList::clear() */

void __thiscall cocos2d::renderer::RenderDataList::clear(RenderDataList *this)

{
  RenderData *this_00;
  RenderData *pRVar1;
  
  pRVar1 = *(RenderData **)(this + 0x10);
  this_00 = pRVar1;
  if (pRVar1 != *(RenderData **)(this + 0x18)) {
    do {
      RenderData::clear(this_00);
      this_00 = this_00 + 0x38;
    } while (this_00 != *(RenderData **)(this + 0x18));
    pRVar1 = *(RenderData **)(this + 0x10);
    while (pRVar1 != this_00) {
      this_00 = this_00 + -0x38;
                    /* try { // try from 009cf4d4 to 00acf54b has its CatchHandler @ 009cf008 */
      (*(code *)**(undefined8 **)this_00)(this_00);
                    /* catch() { ... } // from try @ 009cf08c with catch @ 009cf4dc */
                    /* catch() { ... } // from try @ 009cf080 with catch @ 009cf4e0 */
    }
  }
  *(RenderData **)(this + 0x18) = pRVar1;
                    /* catch() { ... } // from try @ 009cf098 with catch @ 009cf4f4 */
  return;
}

