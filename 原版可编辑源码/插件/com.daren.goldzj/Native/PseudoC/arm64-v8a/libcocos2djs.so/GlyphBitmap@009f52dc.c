
/* cocos2d::GlyphBitmap::GlyphBitmap(std::__ndk1::vector<unsigned char,
   std::__ndk1::allocator<unsigned char> >&, int, int, cocos2d::Rect, int, cocos2d::PixelMode, int)
    */

void __thiscall
cocos2d::GlyphBitmap::GlyphBitmap
          (GlyphBitmap *this,undefined8 *param_1,undefined4 param_2,undefined4 param_3,Rect *param_5
          ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  
  *(undefined4 *)this = param_2;
  *(undefined4 *)(this + 4) = param_3;
  *(undefined4 *)(this + 8) = param_8;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar1 = *param_1;
  *(undefined8 *)(this + 0x18) = param_1[1];
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x20) = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
                    /* try { // try from 009f532c to 00af5333 has its CatchHandler @ 009f58c0 */
  Rect::Rect((Rect *)(this + 0x28),param_5);
  *(undefined4 *)(this + 0x38) = param_6;
  *(undefined4 *)(this + 0x3c) = param_7;
                    /* try { // try from 009f5334 to 00af53b3 has its CatchHandler @ 009f4e58 */
  return;
}

