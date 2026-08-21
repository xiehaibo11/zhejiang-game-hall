
/* cocos2d::Image::initWithImageData(unsigned char const*, long) */

uint __thiscall cocos2d::Image::initWithImageData(Image *this,uchar *param_1,long param_2)

{
  long lVar1;
  uchar *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  void *__dest;
  sImageTGA *__ptr;
  size_t __size;
  uchar *local_50;
  long local_48;
  
                    /* try { // try from 00996538 to 00a9657b has its CatchHandler @ 00996694 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar5 = 0;
  if ((param_1 == (uchar *)0x0) || (param_2 < 1)) goto LAB_009967d4;
  local_50 = (uchar *)0x0;
  uVar6 = ZipUtils::isCCZBuffer(param_1,param_2);
  if ((uVar6 & 1) == 0) {
    uVar6 = ZipUtils::isGZipBuffer(param_1,param_2);
    puVar2 = param_1;
    if ((uVar6 & 1) != 0) {
      param_2 = ZipUtils::inflateMemory(param_1,param_2,&local_50);
      puVar2 = local_50;
    }
  }
  else {
    iVar3 = ZipUtils::inflateCCZBuffer(param_1,param_2,&local_50);
    param_2 = (long)iVar3;
    puVar2 = local_50;
  }
  local_50 = puVar2;
  uVar4 = detectFormat(this,local_50,param_2);
  puVar2 = local_50;
  *(undefined4 *)(this + 0x28) = uVar4;
                    /* try { // try from 009965dc to 00a96617 has its CatchHandler @ 0099671c */
  switch(uVar4) {
  case 0:
    uVar5 = initWithJpgData(this,local_50,param_2);
    break;
  case 1:
    uVar5 = initWithPngData(this,local_50,param_2);
    break;
  case 2:
                    /* try { // try from 00996618 to 00a96773 has its CatchHandler @ 00996368 */
    uVar5 = initWithTiffData(this,local_50,param_2);
    break;
  case 3:
    uVar5 = initWithWebpData(this,local_50,param_2);
    break;
  case 4:
    uVar6 = initWithPVRv2Data(this,local_50,param_2);
    if ((uVar6 & 1) == 0) {
      uVar5 = initWithPVRv3Data(this,puVar2,param_2);
    }
    else {
      uVar5 = 1;
    }
    break;
  case 5:
    iVar3 = etc1_pkm_is_valid(local_50);
    if (iVar3 == 0) {
LAB_0099678c:
      uVar5 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 00996440 with catch @ 00996690 */
      uVar4 = etc1_pkm_get_width(puVar2);
                    /* catch() { ... } // from try @ 00996450 with catch @ 00996694
                       catch() { ... } // from try @ 00996538 with catch @ 00996694 */
      *(undefined4 *)(this + 0x20) = uVar4;
      iVar3 = etc1_pkm_get_height(puVar2);
      uVar5 = 0;
      *(int *)(this + 0x24) = iVar3;
      if ((iVar3 != 0) && (*(int *)(this + 0x20) != 0)) {
        uVar4 = 0xe;
LAB_00996710:
        __size = param_2 - 0x10;
        *(undefined4 *)(this + 0x2c) = uVar4;
        *(size_t *)(this + 0x18) = __size;
                    /* catch() { ... } // from try @ 009963f8 with catch @ 0099671c
                       catch() { ... } // from try @ 00996478 with catch @ 0099671c
                       catch() { ... } // from try @ 009965dc with catch @ 0099671c */
        __dest = malloc(__size);
        *(void **)(this + 0x10) = __dest;
        memcpy(__dest,puVar2 + 0x10,__size);
        uVar5 = 1;
      }
    }
    break;
  case 6:
    iVar3 = etc2_pkm_is_valid(local_50);
    if (iVar3 == 0) goto LAB_0099678c;
    uVar4 = etc2_pkm_get_width(puVar2);
    *(undefined4 *)(this + 0x20) = uVar4;
    iVar3 = etc2_pkm_get_height(puVar2);
    uVar5 = 0;
    *(int *)(this + 0x24) = iVar3;
                    /* catch() { ... } // from try @ 0099642c with catch @ 009966ec
                       catch() { ... } // from try @ 009964e4 with catch @ 009966ec */
    if ((iVar3 != 0) && (*(int *)(this + 0x20) != 0)) {
      iVar3 = etc2_pkm_get_format(puVar2);
                    /* catch() { ... } // from try @ 009963ec with catch @ 00996704 */
      uVar4 = 0xf;
                    /* catch() { ... } // from try @ 009963c0 with catch @ 0099670c */
                    /* catch() { ... } // from try @ 009963e0 with catch @ 00996708 */
      if (iVar3 != 1) {
        uVar4 = 0x10;
      }
      goto LAB_00996710;
    }
    break;
  case 7:
    uVar5 = initWithASTCData(this,local_50,param_2);
    break;
  case 8:
    initWithS3TCData(this,local_50,param_2);
    uVar5 = 1;
    break;
  default:
    __ptr = (sImageTGA *)tgaLoadBuffer(local_50,param_2);
                    /* try { // try from 00996774 to 00a967cb has its CatchHandler @ 00996774
                       catch() { ... } // from try @ 00996774 with catch @ 00996774
                       catch() { ... } // from try @ 00996a84 with catch @ 00996774 */
    if ((__ptr == (sImageTGA *)0x0) || (*(int *)__ptr != 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = initWithTGAData(this,__ptr);
    }
    free(__ptr);
  }
                    /* try { // try from 009967cc to 00a967e3 has its CatchHandler @ 00996b10 */
  if (local_50 != param_1) {
    free(local_50);
  }
LAB_009967d4:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009967ec to 00a967f7 has its CatchHandler @ 00996b0c */
                    /* try { // try from 009967f8 to 00a96803 has its CatchHandler @ 00996b08 */
  return uVar5 & 1;
}

