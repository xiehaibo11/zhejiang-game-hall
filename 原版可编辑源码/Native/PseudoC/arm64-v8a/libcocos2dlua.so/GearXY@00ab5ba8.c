
/* fairygui::GearXY::GearXY(fairygui::GObject*) */

void __thiscall fairygui::GearXY::GearXY(GearXY *this,GObject *param_1)

{
                    /* try { // try from 00ab5bc0 to 00bb5bc7 has its CatchHandler @ 00ab5c30 */
  GearBase::GearBase((GearBase *)this,param_1);
                    /* try { // try from 00ab5bc8 to 00bb5be7 has its CatchHandler @ 00ab5ad0 */
  this[0x20] = (GearXY)0x0;
  *(undefined ***)this = &PTR__GearXY_016aa6b8;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
                    /* try { // try from 00ab5be8 to 00bb5bf3 has its CatchHandler @ 00ab5c30 */
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
                    /* try { // try from 00ab5bf4 to 00bb5c37 has its CatchHandler @ 00ab5ad0 */
  cocos2d::Vec4::Vec4((Vec4 *)(this + 0x50));
  return;
}

