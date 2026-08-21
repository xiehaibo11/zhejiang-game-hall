
/* cocos2d::MeshInfo::getRandomTriangleIndex() */

long __thiscall cocos2d::MeshInfo::getRandomTriangleIndex(MeshInfo *this)

{
  long lVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(uint *)(this + 0x18) < 2) {
    lVar1 = *(long *)this;
    lVar2 = *(long *)(this + 8);
    do {
      iVar3 = rand();
      fVar6 = (float)iVar3 * 4.656613e-10;
      iVar3 = rand();
      fVar5 = fVar6 * fVar6 + (float)iVar3 * 4.656613e-10 * (float)iVar3 * 4.656613e-10;
                    /* try { // try from 00e36b38 to 00f36bb3 has its CatchHandler @ 00e36b38
                       catch(type#1 @ 00000000) { ... } // from try @ 00e36b38 with catch @ 00e36b38
                       catch(type#1 @ 00000000) { ... } // from try @ 00e36bb8 with catch @ 00e36b38
                       catch(type#1 @ 00000000) { ... } // from try @ 00e36c38 with catch @ 00e36b38
                        */
    } while (1.0 <= fVar5);
    fVar4 = logf(fVar5);
    fVar5 = ABS(fVar6 * SQRT((fVar4 * -2.0) / fVar5));
    if (4.0 < fVar5) {
      fVar5 = 4.0;
    }
    fVar5 = ((float)(ulong)((lVar2 - lVar1 >> 2) * -0x1084210842108421) + -1.0) * 0.25 * fVar5;
  }
  else {
    iVar3 = rand();
                    /* try { // try from 00e36bb4 to 00f36bb7 has its CatchHandler @ 00e36bf0 */
                    /* try { // try from 00e36bb8 to 00f36c2b has its CatchHandler @ 00e36b38 */
    fVar5 = (float)iVar3 * 4.656613e-10 *
            (float)((*(long *)(this + 8) - *(long *)this >> 2) * -0x1084210842108421 - 1);
  }
  return (long)fVar5;
}

