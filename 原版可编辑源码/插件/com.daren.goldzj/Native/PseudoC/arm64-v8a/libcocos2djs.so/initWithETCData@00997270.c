
/* cocos2d::Image::initWithETCData(unsigned char const*, long) */

undefined8 __thiscall cocos2d::Image::initWithETCData(Image *this,uchar *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  void *__dest;
  size_t __size;
  
                    /* catch() { ... } // from try @ 00996f98 with catch @ 0099728c
                       catch() { ... } // from try @ 009970cc with catch @ 0099728c */
  uVar3 = etc1_pkm_is_valid(param_1);
  if ((int)uVar3 != 0) {
    uVar1 = etc1_pkm_get_width(param_1);
    *(undefined4 *)(this + 0x20) = uVar1;
                    /* catch() { ... } // from try @ 00996f54 with catch @ 009972a4 */
                    /* catch() { ... } // from try @ 00996f48 with catch @ 009972a8 */
    iVar2 = etc1_pkm_get_height(param_1);
                    /* catch() { ... } // from try @ 00996f28 with catch @ 009972ac */
    uVar3 = 0;
    *(int *)(this + 0x24) = iVar2;
                    /* catch() { ... } // from try @ 00996f60 with catch @ 009972bc
                       catch() { ... } // from try @ 00997060 with catch @ 009972bc
                       catch() { ... } // from try @ 00997128 with catch @ 009972bc */
    if ((iVar2 != 0) && (*(int *)(this + 0x20) != 0)) {
      __size = param_2 - 0x10;
      *(undefined4 *)(this + 0x2c) = 0xe;
      *(size_t *)(this + 0x18) = __size;
      __dest = malloc(__size);
      *(void **)(this + 0x10) = __dest;
      memcpy(__dest,param_1 + 0x10,__size);
      uVar3 = 1;
    }
  }
  return uVar3;
}

