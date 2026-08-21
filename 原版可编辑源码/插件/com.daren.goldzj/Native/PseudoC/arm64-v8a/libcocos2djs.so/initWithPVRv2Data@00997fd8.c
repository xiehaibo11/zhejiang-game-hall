
/* cocos2d::Image::initWithPVRv2Data(unsigned char const*, long) */

undefined8 __thiscall cocos2d::Image::initWithPVRv2Data(Image *this,uchar *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  Configuration *pCVar8;
  ulong uVar9;
  undefined8 uVar10;
  void *__dest;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  size_t __size;
  
  if (*(int *)(param_1 + 0x2c) == 0x21525650) {
                    /* catch() { ... } // from try @ 00997e4c with catch @ 00998034
                       catch() { ... } // from try @ 00997eec with catch @ 00998034 */
    pCVar8 = (Configuration *)Configuration::getInstance();
    this[0x134] = DAT_01d37c14;
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar9 = Configuration::supportsNPOT(pCVar8);
                    /* try { // try from 009980f4 to 00a9814b has its CatchHandler @ 009980f4
                       catch() { ... } // from try @ 009980f4 with catch @ 009980f4
                       catch() { ... } // from try @ 009983f8 with catch @ 009980f4 */
    if ((((uVar9 & 1) != 0) ||
        ((iVar18 = *(int *)(param_1 + 8), iVar7 = utils::nextPOT(iVar18), iVar18 == iVar7 &&
         (iVar18 = *(int *)(param_1 + 4), iVar7 = utils::nextPOT(iVar18), iVar18 == iVar7)))) &&
       (DAT_01d37b08 != (undefined8 *)0x0)) {
      puVar12 = &DAT_01d37b08;
      puVar16 = DAT_01d37b08;
      do {
        bVar6 = (uint)*(byte *)((long)puVar16 + 0x1c) < (uVar3 & 0xff);
        if (!bVar6) {
          puVar12 = puVar16;
        }
        puVar16 = (undefined8 *)puVar16[bVar6];
      } while (puVar16 != (undefined8 *)0x0);
                    /* catch() { ... } // from try @ 00997e0c with catch @ 00998084 */
                    /* catch() { ... } // from try @ 00997e00 with catch @ 00998088 */
                    /* catch() { ... } // from try @ 00997de0 with catch @ 0099808c */
      if (((undefined8 **)puVar12 != &DAT_01d37b08) &&
         (puVar16 = DAT_01d37b08, (uint)*(byte *)((long)puVar12 + 0x1c) <= (uVar3 & 0xff))) {
        do {
                    /* catch() { ... } // from try @ 00997e18 with catch @ 0099809c
                       catch() { ... } // from try @ 00997e80 with catch @ 0099809c
                       catch() { ... } // from try @ 00997f80 with catch @ 0099809c */
          while ((uVar3 & 0xff) < (uint)*(byte *)((long)puVar16 + 0x1c)) {
            puVar16 = (undefined8 *)*puVar16;
            if (puVar16 == (undefined8 *)0x0) goto LAB_009980bc;
          }
          if ((uVar3 & 0xff) <= (uint)*(byte *)((long)puVar16 + 0x1c)) {
            if (puVar16 != (undefined8 *)0x0) {
              iVar18 = *(int *)(puVar16 + 4);
              if (iVar18 - 10U < 4) {
                pCVar8 = (Configuration *)Configuration::getInstance();
                uVar9 = Configuration::supportsPVRTC(pCVar8);
                if ((uVar9 & 1) == 0) {
                  iVar18 = 2;
                }
              }
              else if (iVar18 == 0xe) {
                    /* try { // try from 0099814c to 00a98163 has its CatchHandler @ 00998430 */
                pCVar8 = (Configuration *)Configuration::getInstance();
                uVar9 = Configuration::supportsETC(pCVar8);
                iVar18 = 0xe;
                if ((uVar9 & 1) == 0) {
                  iVar18 = 3;
                }
              }
                    /* try { // try from 0099816c to 00a98177 has its CatchHandler @ 0099842c */
              if (DAT_01d37a98 == (undefined8 *)0x0) {
                return 0;
              }
              puVar12 = &DAT_01d37a98;
                    /* try { // try from 00998178 to 00a98183 has its CatchHandler @ 00998428 */
              puVar16 = DAT_01d37a98;
              do {
                    /* try { // try from 00998184 to 00a9819b has its CatchHandler @ 00998440 */
                if (iVar18 <= *(int *)((long)puVar16 + 0x1c)) {
                  puVar12 = puVar16;
                }
                puVar16 = (undefined8 *)puVar16[*(int *)((long)puVar16 + 0x1c) < iVar18];
              } while (puVar16 != (undefined8 *)0x0);
              if ((undefined8 **)puVar12 == &DAT_01d37a98) {
                return 0;
              }
              if (iVar18 < *(int *)((long)puVar12 + 0x1c)) {
                return 0;
              }
              *(int *)(this + 0x2c) = *(int *)((long)puVar12 + 0x1c);
              iVar4 = *(int *)((long)puVar12 + 0x2c);
              *(undefined4 *)(this + 0x130) = 0;
              iVar18 = *(int *)(param_1 + 8);
              __size = param_2 - 0x34;
              *(int *)(this + 0x20) = iVar18;
              iVar7 = *(int *)(param_1 + 4);
                    /* try { // try from 009981c8 to 00a981eb has its CatchHandler @ 0099840c */
              *(int *)(this + 0x24) = iVar7;
              iVar5 = *(int *)(param_1 + 0x14);
              *(size_t *)(this + 0x18) = __size;
              __dest = malloc(__size);
              *(void **)(this + 0x10) = __dest;
              memcpy(__dest,param_1 + 0x34,__size);
                    /* try { // try from 009981f0 to 00a98233 has its CatchHandler @ 00998440 */
              if (iVar5 < 1) {
                return 1;
              }
              iVar11 = 0;
              iVar17 = 0;
              do {
                uVar1 = uVar3 & 0xff;
                if (uVar1 == 0x1a) {
                  pCVar8 = (Configuration *)Configuration::getInstance();
                  uVar9 = Configuration::supportsBGRA8888(pCVar8);
                  if ((uVar9 & 1) == 0) {
                    return 0;
                  }
                  __dest = *(void **)(this + 0x10);
                  iVar11 = *(int *)(this + 0x130);
LAB_00998280:
                  iVar13 = 1;
                  iVar15 = iVar18;
                  iVar14 = iVar7;
                }
                else if (uVar1 == 0x19) {
                    /* try { // try from 00998244 to 00a9827f has its CatchHandler @ 00998410 */
                  iVar15 = iVar18 + 3;
                  if (-1 < iVar18) {
                    iVar15 = iVar18;
                  }
                  iVar15 = iVar15 >> 2;
                  iVar14 = iVar7 + 3;
                  if (-1 < iVar7) {
                    iVar14 = iVar7;
                  }
                  iVar14 = iVar14 >> 2;
                  iVar13 = 0x10;
                }
                else {
                  if (uVar1 != 0x18) goto LAB_00998280;
                  iVar15 = iVar18 + 7;
                  if (-1 < iVar18) {
                    iVar15 = iVar18;
                  }
                  iVar14 = iVar7 + 3;
                  if (-1 < iVar7) {
                    iVar14 = iVar7;
                  }
                  iVar13 = 0x20;
                  iVar15 = iVar15 >> 3;
                  iVar14 = iVar14 >> 2;
                }
                if (iVar15 < 3) {
                  iVar15 = 2;
                }
                iVar13 = iVar13 * iVar4;
                if (iVar14 < 3) {
                  iVar14 = 2;
                }
                    /* try { // try from 009982a0 to 00a982f7 has its CatchHandler @ 00998440 */
                iVar2 = iVar13 + 7;
                if (-1 < iVar13) {
                  iVar2 = iVar13;
                }
                iVar15 = iVar15 * iVar14 * (iVar2 >> 3);
                iVar18 = iVar18 >> 1;
                *(long *)(this + (long)iVar11 * 0x10 + 0x30) = (long)__dest + (long)iVar17;
                iVar7 = iVar7 >> 1;
                if (iVar5 - iVar17 <= iVar15) {
                  iVar15 = iVar5 - iVar17;
                }
                *(int *)(this + (long)iVar11 * 0x10 + 0x38) = iVar17;
                *(int *)(this + (long)iVar11 * 0x10 + 0x3c) = iVar15;
                iVar17 = iVar15 + iVar17;
                if (iVar18 < 2) {
                  iVar18 = 1;
                }
                iVar11 = iVar11 + 1;
                if (iVar7 < 2) {
                  iVar7 = 1;
                }
                *(int *)(this + 0x130) = iVar11;
                if (iVar5 <= iVar17) {
                  return 1;
                }
              } while( true );
            }
            break;
          }
          puVar16 = (undefined8 *)puVar16[1];
        } while (puVar16 != (undefined8 *)0x0);
LAB_009980bc:
        uVar10 = __cxa_allocate_exception(0x10);
        FUN_0087c04c(uVar10,"map::at:  key not found");
                    /* WARNING: Subroutine does not return */
        __cxa_throw(uVar10,&std::out_of_range::typeinfo,std::invalid_argument::~invalid_argument);
      }
    }
  }
  return 0;
}

