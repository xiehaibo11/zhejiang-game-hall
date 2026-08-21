
/* fairygui::TweenValue::setColor(cocos2d::Color4B const&) */

void __thiscall fairygui::TweenValue::setColor(TweenValue *this,Color4B *param_1)

{
  undefined4 uVar1;
  
  uVar1 = NEON_ucvtf((uint)(byte)*param_1);
  *(undefined4 *)this = uVar1;
  uVar1 = NEON_ucvtf((uint)(byte)param_1[1]);
  *(undefined4 *)(this + 4) = uVar1;
  uVar1 = NEON_ucvtf((uint)(byte)param_1[2]);
  *(undefined4 *)(this + 8) = uVar1;
                    /* try { // try from 00ac3064 to 00bc30b3 has its CatchHandler @ 00ac3064
                       catch() { ... } // from try @ 00ac3064 with catch @ 00ac3064
                       catch() { ... } // from try @ 00ac3118 with catch @ 00ac3064
                       catch() { ... } // from try @ 00ac3154 with catch @ 00ac3064 */
  uVar1 = NEON_ucvtf((uint)(byte)param_1[3]);
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}

