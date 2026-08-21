
/* cocos2d::Image::initWithS3TCData(unsigned char const*, long) */

undefined8 __thiscall cocos2d::Image::initWithS3TCData(Image *this,uchar *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *__dest;
  void *__dest_00;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  Image *pIVar8;
  long lVar9;
  size_t __size;
  uint uVar10;
  uint uVar11;
  
                    /* try { // try from 009973a0 to 00a973b7 has its CatchHandler @ 00997614 */
  __size = param_2 - 0x80;
  __dest = malloc(__size);
                    /* try { // try from 009973d4 to 00a973db has its CatchHandler @ 009975e4 */
  memcpy(__dest,param_1 + 0x80,__size);
  uVar10 = *(uint *)(param_1 + 0x10);
                    /* try { // try from 009973e8 to 00a9740b has its CatchHandler @ 009975e0 */
  *(uint *)(this + 0x20) = uVar10;
  uVar11 = *(uint *)(param_1 + 0xc);
  *(uint *)(this + 0x24) = uVar11;
  uVar2 = *(uint *)(param_1 + 0x1c);
  *(undefined8 *)(this + 0x18) = 0;
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  *(uint *)(this + 0x130) = uVar2;
  iVar7 = *(int *)(param_1 + 0x54);
  *(size_t *)(this + 0x18) = __size;
  iVar5 = 8;
                    /* try { // try from 00997420 to 00a97487 has its CatchHandler @ 00997614 */
  if (iVar7 != 0x31545844) {
    iVar5 = 0x10;
  }
  __dest_00 = malloc(__size);
  *(void **)(this + 0x10) = __dest_00;
  memcpy(__dest_00,__dest,__size);
  iVar7 = *(int *)(param_1 + 0x54);
  if (iVar7 == 0x31545844) {
    uVar6 = 0x1f;
  }
  else if (iVar7 == 0x35545844) {
    uVar6 = 0x21;
  }
  else {
    if (iVar7 != 0x33545844) goto LAB_00997484;
    uVar6 = 0x20;
  }
  *(undefined4 *)(this + 0x2c) = uVar6;
LAB_00997484:
                    /* try { // try from 0099748c to 00a974cf has its CatchHandler @ 009975e4 */
  if ((0 < (int)uVar2) && (uVar10 != 0 || uVar11 != 0)) {
    iVar7 = 0;
    pIVar8 = this + 0x3c;
    lVar9 = 1;
    do {
      if (uVar10 == 0) {
        uVar10 = 1;
      }
      *(long *)(pIVar8 + -0xc) = (long)__dest_00 + (long)iVar7;
      if (uVar11 == 0) {
        uVar11 = 1;
      }
      iVar3 = uVar10 + 6;
      if (-1 < (int)(uVar10 + 3)) {
        iVar3 = uVar10 + 3;
      }
                    /* try { // try from 009974d4 to 00a97517 has its CatchHandler @ 009975e0 */
      iVar1 = uVar11 + 6;
      if (-1 < (int)(uVar11 + 3)) {
        iVar1 = uVar11 + 3;
      }
      iVar3 = (iVar1 >> 2) * iVar5 * (iVar3 >> 2);
      *(int *)(pIVar8 + -4) = iVar7;
      *(int *)pIVar8 = iVar3;
      if ((int)uVar2 <= lVar9) break;
      iVar7 = iVar3 + iVar7;
      uVar4 = uVar10 | uVar11;
      uVar10 = (int)uVar10 >> 1;
      uVar11 = (int)uVar11 >> 1;
      pIVar8 = pIVar8 + 0x10;
      lVar9 = lVar9 + 1;
    } while ((int)uVar4 >> 1 != 0);
  }
  if (__dest != (void *)0x0) {
    free(__dest);
  }
                    /* try { // try from 00997530 to 00a9756b has its CatchHandler @ 00997614 */
  return 1;
}

