
/* cocos2d::Image::initWithWebpData(unsigned char const*, long) */

undefined4 __thiscall cocos2d::Image::initWithWebpData(Image *this,uchar *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  size_t __size;
  int local_148;
  int local_144;
  int local_140;
  undefined4 local_120;
  undefined4 local_114;
  void *local_110;
  int local_108;
  size_t local_100;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00997128 to 00a97163 has its CatchHandler @ 009972bc */
  iVar3 = WebPInitDecoderConfigInternal(&local_148,0x208);
  if ((((iVar3 == 0) ||
       (iVar3 = WebPGetFeaturesInternal(param_1,param_2,&local_148,0x208), iVar3 != 0)) ||
      (local_148 == 0)) || (local_144 == 0)) {
    uVar4 = 0;
  }
  else {
    bVar2 = local_140 == 0;
    local_120 = 0;
    if (!bVar2) {
      local_120 = 7;
    }
    uVar4 = 2;
    if (bVar2) {
      uVar4 = 3;
    }
    *(undefined4 *)(this + 0x2c) = uVar4;
    this[0x134] = (Image)!bVar2;
    iVar3 = 3;
    if (!bVar2) {
      iVar3 = 4;
    }
    *(int *)(this + 0x20) = local_148;
    *(int *)(this + 0x24) = local_144;
    __size = (size_t)(iVar3 * local_148 * local_144);
    *(size_t *)(this + 0x18) = __size;
    local_110 = malloc(__size);
                    /* try { // try from 009971d8 to 00a9721b has its CatchHandler @ 00997238 */
    *(void **)(this + 0x10) = local_110;
    uVar4 = 1;
    local_114 = 1;
    local_108 = iVar3 * local_148;
    local_100 = __size;
    iVar3 = WebPDecode(param_1,param_2,&local_148);
    if (iVar3 != 0) {
      free(*(void **)(this + 0x10));
      uVar4 = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

