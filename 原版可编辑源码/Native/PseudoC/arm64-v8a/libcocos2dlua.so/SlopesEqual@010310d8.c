
/* ClipperLib::SlopesEqual(ClipperLib::IntPoint, ClipperLib::IntPoint, ClipperLib::IntPoint,
   ClipperLib::IntPoint, bool) */

bool ClipperLib::SlopesEqual
               (long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
               long param_7,long param_8,byte param_9)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar5 = param_2 - param_4;
  uVar2 = param_5 - param_7;
  if ((param_9 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0103118c with catch @ 010311d0
                        */
    return uVar2 * uVar5 - (param_6 - param_8) * (param_1 - param_3) == 0;
  }
  uVar8 = -uVar5;
  if (-1 < (long)uVar5) {
    uVar8 = uVar5;
  }
  uVar6 = -uVar2;
  if (-1 < (long)uVar2) {
    uVar6 = uVar2;
  }
  uVar9 = (uVar6 & 0xffffffff) * (uVar8 & 0xffffffff);
  uVar3 = (uVar6 >> 0x20) * (uVar8 & 0xffffffff) + (uVar6 & 0xffffffff) * (uVar8 >> 0x20);
  uVar8 = (uVar6 >> 0x20) * (uVar8 >> 0x20) + (uVar3 >> 0x20);
  uVar3 = uVar3 << 0x20;
  lVar4 = uVar9 + uVar3;
  if (CARRY8(uVar9,uVar3)) {
    uVar8 = uVar8 + 1;
  }
  uVar6 = uVar8;
  if (-(int)((long)uVar5 >> 0x3f) != -(int)((long)uVar2 >> 0x3f)) {
    bVar1 = lVar4 != 0;
    uVar6 = -uVar8;
    lVar4 = -lVar4;
    if (bVar1) {
      uVar6 = ~uVar8;
    }
  }
  uVar5 = param_1 - param_3;
  uVar8 = param_6 - param_8;
  uVar2 = -uVar5;
  if (-1 < (long)uVar5) {
    uVar2 = uVar5;
  }
  uVar3 = -uVar8;
  if (-1 < (long)uVar8) {
    uVar3 = uVar8;
  }
  uVar10 = (uVar3 & 0xffffffff) * (uVar2 & 0xffffffff);
  uVar9 = (uVar3 >> 0x20) * (uVar2 & 0xffffffff) + (uVar3 & 0xffffffff) * (uVar2 >> 0x20);
  uVar2 = (uVar3 >> 0x20) * (uVar2 >> 0x20) + (uVar9 >> 0x20);
  uVar9 = uVar9 << 0x20;
  lVar7 = uVar10 + uVar9;
  if (CARRY8(uVar10,uVar9)) {
    uVar2 = uVar2 + 1;
  }
                    /* try { // try from 0103118c to 0113118f has its CatchHandler @ 010311d0 */
  uVar3 = uVar2;
  if (-(int)((long)uVar5 >> 0x3f) != -(int)((long)uVar8 >> 0x3f)) {
    bVar1 = lVar7 != 0;
    uVar3 = -uVar2;
    lVar7 = -lVar7;
    if (bVar1) {
      uVar3 = ~uVar2;
    }
  }
  if (uVar6 != uVar3) {
    return false;
  }
  return lVar4 == lVar7;
}

