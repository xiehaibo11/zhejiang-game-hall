
/* cocos2d::ui::ScrollView::ScrollView() */

void __thiscall cocos2d::ui::ScrollView::ScrollView(ScrollView *this)

{
                    /* catch() { ... } // from try @ 00dbac40 with catch @ 00dbad04 */
  Layout::Layout((Layout *)this);
                    /* try { // try from 00dbad24 to 00ebadab has its CatchHandler @ 00dbad24
                       catch() { ... } // from try @ 00dbad24 with catch @ 00dbad24
                       catch() { ... } // from try @ 00dbadb4 with catch @ 00dbad24
                       catch() { ... } // from try @ 00dbadf8 with catch @ 00dbad24 */
  *(undefined ***)this = &PTR__ScrollView_016db2e0;
  *(undefined ***)(this + 0x4f0) = &PTR__ScrollView_016dbb10;
  *(undefined8 *)(this + 0x7b8) = 0;
  *(undefined ***)(this + 0x318) = &PTR__ScrollView_016dbae8;
  *(undefined4 *)(this + 0x7c0) = 1;
  *(undefined8 *)(this + 0x7cc) = 0;
  *(undefined8 *)(this + 0x7c4) = 0;
  this[0x7d4] = (ScrollView)0x0;
  *(undefined4 *)(this + 0x7d8) = 0x3d333333;
  *(ScrollView **)(this + 0x7e0) = this + 0x7e0;
  *(ScrollView **)(this + 0x7e8) = this + 0x7e0;
  *(undefined8 *)(this + 0x7f0) = 0;
  *(ScrollView **)(this + 0x7f8) = this + 0x7f8;
  *(ScrollView **)(this + 0x800) = this + 0x7f8;
  *(undefined8 *)(this + 0x810) = 0;
  *(undefined8 *)(this + 0x808) = 0;
  *(undefined4 *)(this + 0x818) = 0x3f000000;
  *(undefined2 *)(this + 0x81c) = 0;
  this[0x81e] = (ScrollView)0x1;
  *(undefined8 *)(this + 0x83c) = 0;
  *(undefined2 *)(this + 0x844) = 1;
                    /* try { // try from 00dbadac to 00ebadb3 has its CatchHandler @ 00dbae74 */
  *(undefined2 *)(this + 0x838) = 0;
  *(undefined8 *)(this + 0x830) = 0;
                    /* try { // try from 00dbadb4 to 00ebadef has its CatchHandler @ 00dbad24 */
  *(undefined8 *)(this + 0x828) = 0;
  *(undefined8 *)(this + 0x820) = 0;
  *(undefined2 *)(this + 0x850) = 0x101;
  *(undefined8 *)(this + 0x8a0) = 0;
  *(undefined8 *)(this + 0x848) = 0;
  *(undefined8 *)(this + 0x860) = 0;
  *(undefined8 *)(this + 0x858) = 0;
  *(undefined8 *)(this + 0x870) = 0;
  *(undefined8 *)(this + 0x868) = 0;
  *(undefined8 *)(this + 0x878) = 0;
  Widget::setTouchEnabled((Widget *)this,true);
  this[0x388] = (ScrollView)0x0;
                    /* try { // try from 00dbadf0 to 00ebadf7 has its CatchHandler @ 00dbae84 */
                    /* try { // try from 00dbadf8 to 00ebaea3 has its CatchHandler @ 00dbad24 */
  return;
}

