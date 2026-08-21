
/* cocos2d::FontFreeType::FontFreeType(bool, float) */

void __thiscall cocos2d::FontFreeType::FontFreeType(FontFreeType *this,bool param_1,float param_2)

{
  int iVar1;
  long lVar2;
  
  Ref::Ref((Ref *)this);
                    /* catch() { ... } // from try @ 00f050dc with catch @ 00f05140 */
                    /* catch() { ... } // from try @ 00f050d0 with catch @ 00f05144 */
  *(undefined8 *)(this + 0x28) = 0;
                    /* catch() { ... } // from try @ 00f0509c with catch @ 00f05148 */
                    /* catch() { ... } // from try @ 00f05090 with catch @ 00f0514c */
  *(undefined ***)this = &PTR__FontFreeType_016fd1c0;
                    /* catch() { ... } // from try @ 00f0505c with catch @ 00f05150 */
                    /* catch() { ... } // from try @ 00f05050 with catch @ 00f05154 */
                    /* catch() { ... } // from try @ 00f0501c with catch @ 00f05158 */
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0x756e6963;
  *(undefined8 *)(this + 0x40) = 0;
  this[0x58] = (FontFreeType)param_1;
  *(undefined4 *)(this + 0x70) = 2;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x78) = 0;
                    /* catch() { ... } // from try @ 00f05010 with catch @ 00f05188 */
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  if (0.0 < param_2) {
    lVar2 = Director::getInstance();
    *(float *)(this + 0x5c) = *(float *)(lVar2 + 0x1a0) * param_2;
                    /* try { // try from 00f051a4 to 0100524f has its CatchHandler @ 00f051a4
                       catch() { ... } // from try @ 00f051a4 with catch @ 00f051a4
                       catch() { ... } // from try @ 00f05278 with catch @ 00f051a4
                       catch() { ... } // from try @ 00f052b8 with catch @ 00f051a4 */
    if ((_FTInitialized == '\0') && (iVar1 = FT_Init_FreeType(&_FTlibrary), iVar1 == 0)) {
      _FTInitialized = '\x01';
    }
    FT_Stroker_New(_FTlibrary,this + 0x30);
    FT_Stroker_Set(*(undefined8 *)(this + 0x30),(long)(int)(*(float *)(this + 0x5c) * 64.0),1,0,0);
  }
  return;
}

