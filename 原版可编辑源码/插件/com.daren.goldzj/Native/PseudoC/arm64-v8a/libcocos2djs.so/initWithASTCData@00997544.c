
/* cocos2d::Image::initWithASTCData(unsigned char const*, long) */

undefined8 __thiscall cocos2d::Image::initWithASTCData(Image *this,uchar *param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  void *__dest;
  undefined4 uVar5;
  uint uVar6;
  size_t __size;
  
  uVar4 = astcIsValid(param_1);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
                    /* try { // try from 0099756c to 00a9766b has its CatchHandler @ 00997314 */
  uVar2 = astcGetWidth(param_1);
  *(undefined4 *)(this + 0x20) = uVar2;
  iVar3 = astcGetHeight(param_1);
  *(int *)(this + 0x24) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  if (*(int *)(this + 0x20) == 0) {
    return 0;
  }
  bVar1 = param_1[5];
  if (param_1[4] - 4 < 7) {
    uVar6 = (uint)bVar1;
    uVar2 = 0x11;
    switch((uint)param_1[4]) {
    case 4:
      break;
    case 5:
      uVar2 = 0x12;
      if (bVar1 != 4) {
        uVar2 = 0x13;
      }
      break;
    case 6:
                    /* catch() { ... } // from try @ 009973e8 with catch @ 009975e0
                       catch() { ... } // from try @ 009974d4 with catch @ 009975e0 */
      uVar2 = 0x14;
                    /* catch() { ... } // from try @ 009973d4 with catch @ 009975e4
                       catch() { ... } // from try @ 0099748c with catch @ 009975e4 */
      if (uVar6 != 5) {
        uVar2 = 0x15;
      }
      break;
    default:
      goto switchD_009975c4_caseD_7;
    case 8:
                    /* catch() { ... } // from try @ 00997388 with catch @ 00997600 */
      uVar5 = 0x17;
                    /* catch() { ... } // from try @ 00997368 with catch @ 00997604 */
      if (uVar6 != 6) {
        uVar5 = 0x18;
      }
      uVar2 = 0x16;
                    /* catch() { ... } // from try @ 009973a0 with catch @ 00997614
                       catch() { ... } // from try @ 00997420 with catch @ 00997614
                       catch() { ... } // from try @ 00997530 with catch @ 00997614 */
      if (uVar6 != 5) {
        uVar2 = uVar5;
      }
      break;
    case 10:
      if (uVar6 - 5 < 4) {
        uVar2 = *(undefined4 *)(&DAT_01889930 + (long)(char)(uVar6 - 5) * 4);
      }
      else {
        uVar2 = 0x1c;
      }
    }
  }
  else {
switchD_009975c4_caseD_7:
    uVar2 = 0x1d;
    if (bVar1 != 10) {
      uVar2 = 0x1e;
    }
  }
  __size = param_2 - 0x10;
  *(undefined4 *)(this + 0x2c) = uVar2;
  *(size_t *)(this + 0x18) = __size;
  __dest = malloc(__size);
  *(void **)(this + 0x10) = __dest;
  memcpy(__dest,param_1 + 0x10,__size);
                    /* try { // try from 0099766c to 00a976c3 has its CatchHandler @ 0099766c
                       catch() { ... } // from try @ 0099766c with catch @ 0099766c
                       catch() { ... } // from try @ 009978a0 with catch @ 0099766c */
  return 1;
}

