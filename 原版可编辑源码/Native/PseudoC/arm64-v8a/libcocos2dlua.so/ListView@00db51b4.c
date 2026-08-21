
/* cocos2d::ui::ListView::ListView() */

void __thiscall cocos2d::ui::ListView::ListView(ListView *this)

{
  ScrollView::ScrollView((ScrollView *)this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db5048 with catch @ 00db51d8
                        */
  *(undefined ***)this = &PTR__ListView_016d9b08;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db4ee8 with catch @ 00db51ec
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db5248 with catch @ 00db51f0
                       catch(type#1 @ 00000000) { ... } // from try @ 00db5408 with catch @ 00db51f0
                        */
  *(undefined ***)(this + 0x318) = &PTR__ListView_016da320;
  *(undefined ***)(this + 0x4f0) = &PTR__ListView_016da348;
  *(undefined8 *)(this + 0x8b8) = 0;
  *(undefined8 *)(this + 0x8b0) = 0;
  *(undefined8 *)(this + 0x8c8) = 0;
  *(undefined8 *)(this + 0x8c0) = 0;
  this[0x8d8] = (ListView)0x1;
  *(undefined8 *)(this + 0x8d0) = 5;
  *(undefined8 *)(this + 0x8ec) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x8e4) = 0;
  *(undefined8 *)(this + 0x8dc) = 0;
  *(undefined8 *)(this + 0x8f8) = 0xffffffffffffffff;
  this[0x900] = (ListView)0x1;
  *(undefined8 *)(this + 0x940) = 0;
  *(undefined8 *)(this + 0x908) = 0;
  *(undefined8 *)(this + 0x918) = 0;
  *(undefined8 *)(this + 0x910) = 0;
                    /* try { // try from 00db5240 to 00eb5247 has its CatchHandler @ 00db5544 */
                    /* try { // try from 00db5248 to 00eb539f has its CatchHandler @ 00db51f0 */
  Widget::setTouchEnabled((Widget *)this,true);
  return;
}

