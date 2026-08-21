
/* cocos2d::Image::initWithETC2Data(unsigned char const*, long) */

undefined8 __thiscall cocos2d::Image::initWithETC2Data(Image *this,uchar *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  void *__dest;
  size_t __size;
  
                    /* try { // try from 00997314 to 00a97367 has its CatchHandler @ 00997314
                       catch() { ... } // from try @ 00997314 with catch @ 00997314
                       catch() { ... } // from try @ 0099756c with catch @ 00997314 */
  uVar3 = etc2_pkm_is_valid(param_1);
  if ((int)uVar3 != 0) {
    uVar1 = etc2_pkm_get_width(param_1);
    *(undefined4 *)(this + 0x20) = uVar1;
    iVar2 = etc2_pkm_get_height(param_1);
    uVar3 = 0;
    *(int *)(this + 0x24) = iVar2;
    if ((iVar2 != 0) && (*(int *)(this + 0x20) != 0)) {
      iVar2 = etc2_pkm_get_format(param_1);
      uVar1 = 0xf;
      __size = param_2 - 0x10;
                    /* try { // try from 00997368 to 00a9737f has its CatchHandler @ 00997604 */
      if (iVar2 != 1) {
        uVar1 = 0x10;
      }
      *(undefined4 *)(this + 0x2c) = uVar1;
      *(size_t *)(this + 0x18) = __size;
      __dest = malloc(__size);
      *(void **)(this + 0x10) = __dest;
                    /* try { // try from 00997388 to 00a97393 has its CatchHandler @ 00997600 */
      memcpy(__dest,param_1 + 0x10,__size);
      uVar3 = 1;
    }
  }
                    /* try { // try from 00997394 to 00a9739f has its CatchHandler @ 009975fc */
  return uVar3;
}

