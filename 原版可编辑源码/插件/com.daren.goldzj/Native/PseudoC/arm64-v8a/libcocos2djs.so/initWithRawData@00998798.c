
/* cocos2d::Image::initWithRawData(unsigned char const*, long, int, int, int, bool) */

undefined8 __thiscall
cocos2d::Image::initWithRawData
          (Image *this,uchar *param_1,long param_2,int param_3,int param_4,int param_5,bool param_6)

{
  undefined8 uVar1;
  void *__dest;
  size_t __size;
  
                    /* catch() { ... } // from try @ 0099856c with catch @ 009987a0
                       catch() { ... } // from try @ 00998700 with catch @ 009987a0 */
                    /* catch() { ... } // from try @ 009985e0 with catch @ 009987a4
                       catch() { ... } // from try @ 00998748 with catch @ 009987a4 */
  uVar1 = 0;
  if ((param_3 != 0) && (param_4 != 0)) {
                    /* catch() { ... } // from try @ 0099851c with catch @ 009987bc */
                    /* catch() { ... } // from try @ 00998510 with catch @ 009987c0 */
    this[0x134] = (Image)param_6;
                    /* catch() { ... } // from try @ 009984f0 with catch @ 009987c4 */
    __size = (size_t)(param_3 * param_4 * 4);
                    /* catch() { ... } // from try @ 00998528 with catch @ 009987d4
                       catch() { ... } // from try @ 0099858c with catch @ 009987d4
                       catch() { ... } // from try @ 00998634 with catch @ 009987d4 */
    *(int *)(this + 0x20) = param_3;
    *(int *)(this + 0x24) = param_4;
    *(undefined4 *)(this + 0x2c) = 2;
    *(size_t *)(this + 0x18) = __size;
    __dest = malloc(__size);
    *(void **)(this + 0x10) = __dest;
    uVar1 = 0;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_1,__size);
      uVar1 = 1;
    }
  }
  return uVar1;
}

