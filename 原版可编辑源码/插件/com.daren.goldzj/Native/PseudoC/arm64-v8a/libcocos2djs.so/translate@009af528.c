
/* cocos2d::TextRowSpace::translate(float, float) */

void __thiscall cocos2d::TextRowSpace::translate(TextRowSpace *this,float param_1,float param_2)

{
  *(ulong *)(this + 0x10) =
       CONCAT44(param_2 + (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20),
                param_1 + (float)*(undefined8 *)(this + 0x10));
  return;
}

