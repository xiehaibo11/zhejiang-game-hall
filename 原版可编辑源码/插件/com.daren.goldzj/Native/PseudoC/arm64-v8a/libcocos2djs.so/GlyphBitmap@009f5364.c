
/* cocos2d::GlyphBitmap::GlyphBitmap(cocos2d::GlyphBitmap&&) */

void __thiscall cocos2d::GlyphBitmap::GlyphBitmap(GlyphBitmap *this,GlyphBitmap *param_1)

{
  void *pvVar1;
  
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  Rect::Rect((Rect *)(this + 0x28));
  pvVar1 = *(void **)(this + 0x10);
  *(undefined4 *)(this + 0x38) = 0;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar1;
                    /* try { // try from 009f53b4 to 00af53bb has its CatchHandler @ 009f58a0 */
    operator_delete(pvVar1);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
                    /* try { // try from 009f53bc to 00af53fb has its CatchHandler @ 009f4e58 */
    *(undefined8 *)(this + 0x20) = 0;
  }
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  Rect::operator=((Rect *)(this + 0x28),(Rect *)(param_1 + 0x28));
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
                    /* try { // try from 009f53fc to 00af540b has its CatchHandler @ 009f5970 */
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
                    /* try { // try from 009f540c to 00af55f7 has its CatchHandler @ 009f4e58 */
  return;
}

