
/* cocos2d::AutoPolygon::getAlphaByPos(cocos2d::Vec2 const&) */

undefined1 __thiscall cocos2d::AutoPolygon::getAlphaByPos(AutoPolygon *this,Vec2 *param_1)

{
                    /* try { // try from 00f63798 to 0106379f has its CatchHandler @ 00f63810 */
  return *(undefined1 *)
          (*(long *)(this + 8) +
           (ulong)(uint)(((int)*(float *)param_1 +
                         *(int *)(this + 0x28) * (int)*(float *)(param_1 + 4)) * 4) + 3);
}

