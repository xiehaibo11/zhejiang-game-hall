
/* cocos2d::PolygonInfo::setQuads(cocos2d::V3F_C4B_T2F_Quad*, int) */

void __thiscall
cocos2d::PolygonInfo::setQuads(PolygonInfo *this,V3F_C4B_T2F_Quad *param_1,int param_2)

{
                    /* try { // try from 00f62ef0 to 01062f33 has its CatchHandler @ 00f62ec4 */
  if (this[0x18] != (PolygonInfo)0x0) {
    if (*(void **)this != (void *)0x0) {
                    /* catch() { ... } // from try @ 00f62ee8 with catch @ 00f62f18 */
      operator_delete__(*(void **)this);
      *(undefined8 *)this = 0;
    }
    if (*(void **)(this + 8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 8));
      *(undefined8 *)(this + 8) = 0;
    }
  }
  *(V3F_C4B_T2F_Quad **)this = param_1;
  *(undefined **)(this + 8) = &DAT_01777970;
  this[0x18] = (PolygonInfo)0x0;
  *(int *)(this + 0x10) = param_2 << 2;
  *(int *)(this + 0x14) = param_2 * 6;
  return;
}

