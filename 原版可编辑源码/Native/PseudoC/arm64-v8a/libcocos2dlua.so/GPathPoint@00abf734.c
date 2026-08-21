
/* fairygui::GPathPoint::GPathPoint(cocos2d::Vec3 const&) */

void __thiscall fairygui::GPathPoint::GPathPoint(GPathPoint *this,Vec3 *param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 00abf740 to 00bbf74b has its CatchHandler @ 00abf780 */
  cocos2d::Vec3::Vec3((Vec3 *)this);
                    /* try { // try from 00abf74c to 00bbf793 has its CatchHandler @ 00abf6cc */
  cocos2d::Vec3::Vec3((Vec3 *)(this + 0xc));
  cocos2d::Vec3::Vec3((Vec3 *)(this + 0x18));
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  *(undefined4 *)(this + 0x14) = 0;
                    /* catch() { ... } // from try @ 00abf740 with catch @ 00abf780 */
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}

