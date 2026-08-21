
/* cocos2d::Color4B::Color4B(cocos2d::Color4F const&) */

void __thiscall cocos2d::Color4B::Color4B(Color4B *this,Color4F *param_1)

{
  *this = SUB41((int)(*(float *)param_1 * 255.0),0);
                    /* try { // try from 009a2280 to 00aa2297 has its CatchHandler @ 009a2528 */
  this[1] = SUB41((int)(*(float *)(param_1 + 4) * 255.0),0);
  this[2] = SUB41((int)(*(float *)(param_1 + 8) * 255.0),0);
                    /* try { // try from 009a22a0 to 00aa22ab has its CatchHandler @ 009a2524 */
  this[3] = SUB41((int)(*(float *)(param_1 + 0xc) * 255.0),0);
                    /* try { // try from 009a22ac to 00aa22b7 has its CatchHandler @ 009a2520 */
  return;
}

