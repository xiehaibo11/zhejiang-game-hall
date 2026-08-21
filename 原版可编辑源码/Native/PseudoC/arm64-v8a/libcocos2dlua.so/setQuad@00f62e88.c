
/* cocos2d::PolygonInfo::setQuad(cocos2d::V3F_C4B_T2F_Quad*) */

void __thiscall cocos2d::PolygonInfo::setQuad(PolygonInfo *this,V3F_C4B_T2F_Quad *param_1)

{
  if (this[0x18] != (PolygonInfo)0x0) {
    if (*(void **)this != (void *)0x0) {
      operator_delete__(*(void **)this);
      *(undefined8 *)this = 0;
    }
    if (*(void **)(this + 8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 8));
      *(undefined8 *)(this + 8) = 0;
    }
  }
                    /* catch() { ... } // from try @ 00f62ef0 with catch @ 00f62ec4 */
  this[0x18] = (PolygonInfo)0x0;
  *(V3F_C4B_T2F_Quad **)this = param_1;
  *(undefined **)(this + 8) = &DAT_01777970;
  *(undefined8 *)(this + 0x10) = 0x600000004;
                    /* try { // try from 00f62ee8 to 01062eef has its CatchHandler @ 00f62f18 */
  return;
}

