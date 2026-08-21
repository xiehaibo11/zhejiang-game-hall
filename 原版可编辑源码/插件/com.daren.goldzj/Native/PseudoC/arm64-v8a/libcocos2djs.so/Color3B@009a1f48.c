
/* cocos2d::Color3B::Color3B(cocos2d::Color4F const&) */

void __thiscall cocos2d::Color3B::Color3B(Color3B *this,Color4F *param_1)

{
                    /* try { // try from 009a1f58 to 00aa1faf has its CatchHandler @ 009a1f58
                       catch() { ... } // from try @ 009a1f58 with catch @ 009a1f58
                       catch() { ... } // from try @ 009a213c with catch @ 009a1f58 */
  *this = SUB41((int)(*(float *)param_1 * 255.0),0);
  this[1] = SUB41((int)(*(float *)(param_1 + 4) * 255.0),0);
  this[2] = SUB41((int)(*(float *)(param_1 + 8) * 255.0),0);
  return;
}

