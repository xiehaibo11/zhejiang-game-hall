
/* cocos2d::Image::initWithPVRv3Data(unsigned char const*, long) */

undefined8 __thiscall cocos2d::Image::initWithPVRv3Data(Image *this,uchar *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  Configuration *pCVar5;
  void *__dest;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  size_t __size;
  int iVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  Image *pIVar19;
  
  if ((ulong)param_2 < 0x34) {
    return 0;
  }
  if (*(int *)param_1 != 0x3525650) {
    return 0;
  }
  uVar16 = *(ulong *)(param_1 + 8);
                    /* try { // try from 0099836c to 00a983af has its CatchHandler @ 0099840c */
  if ((long)uVar16 < 0x8080000616c) {
    if (((uVar16 < 7) && ((1L << (uVar16 & 0x3f) & 0x4fU) != 0)) || (uVar16 == 0x800000061))
    goto LAB_00998484;
    uVar7 = 0x80000006c;
                    /* try { // try from 009983b4 to 00a983f7 has its CatchHandler @ 00998410 */
  }
  else if ((long)uVar16 < 0x105050561626772) {
                    /* catch() { ... } // from try @ 009981c8 with catch @ 0099840c
                       catch() { ... } // from try @ 0099836c with catch @ 0099840c */
                    /* catch() { ... } // from try @ 00998244 with catch @ 00998410
                       catch() { ... } // from try @ 009983b4 with catch @ 00998410 */
                    /* catch() { ... } // from try @ 00998178 with catch @ 00998428 */
                    /* catch() { ... } // from try @ 0099816c with catch @ 0099842c */
                    /* catch() { ... } // from try @ 0099814c with catch @ 00998430 */
    if ((uVar16 == 0x8080000616c) || (uVar16 == 0x5060500626772)) goto LAB_00998484;
                    /* catch() { ... } // from try @ 00998184 with catch @ 00998440
                       catch() { ... } // from try @ 009981f0 with catch @ 00998440
                       catch() { ... } // from try @ 009982a0 with catch @ 00998440 */
    uVar7 = 0x8080800626772;
  }
  else {
    if (0x808080861626771 < (long)uVar16) {
      if (uVar16 != 0x808080861626772) {
        if (uVar16 != 0x808080861726762) {
          return 0;
        }
        pCVar5 = (Configuration *)Configuration::getInstance();
        uVar7 = Configuration::supportsBGRA8888(pCVar5);
        if ((uVar7 & 1) == 0) {
          return 0;
        }
      }
      goto LAB_00998484;
    }
                    /* try { // try from 009983f8 to 00a98497 has its CatchHandler @ 009980f4 */
    if (uVar16 == 0x105050561626772) goto LAB_00998484;
    uVar7 = 0x404040461626772;
  }
  if (uVar16 != uVar7) {
    return 0;
  }
LAB_00998484:
  if (DAT_01d37c00 != (undefined8 *)0x0) {
    puVar8 = &DAT_01d37c00;
                    /* try { // try from 00998498 to 00a984ef has its CatchHandler @ 00998498
                       catch() { ... } // from try @ 00998498 with catch @ 00998498
                       catch() { ... } // from try @ 0099878c with catch @ 00998498 */
    puVar11 = DAT_01d37c00;
    do {
      if ((ulong)puVar11[4] >= uVar16) {
        puVar8 = puVar11;
      }
      puVar11 = (undefined8 *)puVar11[(ulong)puVar11[4] < uVar16];
    } while (puVar11 != (undefined8 *)0x0);
    if (((undefined8 **)puVar8 != &DAT_01d37c00) &&
       (puVar11 = DAT_01d37c00, (ulong)puVar8[4] <= uVar16)) {
      do {
        while (uVar16 < (ulong)puVar11[4]) {
          puVar11 = (undefined8 *)*puVar11;
          if (puVar11 == (undefined8 *)0x0) goto LAB_009984f4;
        }
        if (uVar16 <= (ulong)puVar11[4]) {
          if (puVar11 != (undefined8 *)0x0) {
                    /* try { // try from 00998528 to 00a9853f has its CatchHandler @ 009987d4 */
            iVar15 = *(int *)(puVar11 + 5);
            if (iVar15 - 10U < 4) {
              pCVar5 = (Configuration *)Configuration::getInstance();
              uVar7 = Configuration::supportsPVRTC(pCVar5);
              if ((uVar7 & 1) == 0) {
                iVar15 = 2;
              }
            }
            else if (iVar15 == 0xe) {
              pCVar5 = (Configuration *)Configuration::getInstance();
              uVar7 = Configuration::supportsETC(pCVar5);
              iVar15 = 0xe;
                    /* try { // try from 0099856c to 00a98587 has its CatchHandler @ 009987a0 */
              if ((uVar7 & 1) == 0) {
                iVar15 = 3;
              }
            }
            if (DAT_01d37a98 == (undefined8 *)0x0) {
              return 0;
            }
            puVar8 = &DAT_01d37a98;
            puVar11 = DAT_01d37a98;
            do {
                    /* try { // try from 0099858c to 00a985cf has its CatchHandler @ 009987d4 */
              if (iVar15 <= *(int *)((long)puVar11 + 0x1c)) {
                puVar8 = puVar11;
              }
              puVar11 = (undefined8 *)puVar11[*(int *)((long)puVar11 + 0x1c) < iVar15];
            } while (puVar11 != (undefined8 *)0x0);
            if ((undefined8 **)puVar8 == &DAT_01d37a98) {
              return 0;
            }
            if (iVar15 < *(int *)((long)puVar8 + 0x1c)) {
              return 0;
            }
            *(int *)(this + 0x2c) = *(int *)((long)puVar8 + 0x1c);
                    /* try { // try from 009985e0 to 00a98613 has its CatchHandler @ 009987a4 */
            iVar2 = *(int *)((long)puVar8 + 0x2c);
            this[0x134] = (Image)((byte)(*(uint *)(param_1 + 4) >> 1) & 1);
            iVar17 = *(int *)(param_1 + 0x18);
            iVar15 = *(int *)(param_1 + 0x1c);
            *(int *)(this + 0x20) = iVar15;
            *(int *)(this + 0x24) = iVar17;
            uVar3 = *(uint *)(param_1 + 0x30);
            __size = (param_2 + -0x34) - (ulong)uVar3;
            *(size_t *)(this + 0x18) = __size;
            __dest = malloc(__size);
            *(void **)(this + 0x10) = __dest;
            memcpy(__dest,param_1 + (ulong)uVar3 + 0x34,__size);
            iVar6 = *(int *)(param_1 + 0x2c);
            *(int *)(this + 0x130) = iVar6;
            if (iVar6 < 1) {
              return 1;
            }
                    /* try { // try from 00998634 to 00a9868b has its CatchHandler @ 009987d4 */
            lVar14 = 0;
            iVar18 = 0;
            pIVar19 = this + 0x3c;
            do {
              iVar9 = 1;
              iVar10 = iVar15;
              iVar12 = iVar17;
              if ((long)uVar16 < 6) {
                if (uVar16 < 2) {
                  iVar10 = iVar15 + 7;
                  if (-1 < iVar15) {
                    iVar10 = iVar15;
                  }
                  iVar12 = iVar17 + 3;
                  if (-1 < iVar17) {
                    iVar12 = iVar17;
                  }
                  iVar9 = 0x20;
                  iVar10 = iVar10 >> 3;
                  iVar12 = iVar12 >> 2;
                }
                else {
                  if (uVar16 - 2 < 2) goto LAB_009986b4;
LAB_009986a8:
                  iVar9 = 1;
                }
              }
              else if (uVar16 == 6) {
LAB_009986b4:
                iVar10 = iVar15 + 3;
                if (-1 < iVar15) {
                  iVar10 = iVar15;
                }
                iVar12 = iVar17 + 3;
                if (-1 < iVar17) {
                  iVar12 = iVar17;
                }
                iVar9 = 0x10;
                iVar10 = iVar10 >> 2;
                iVar12 = iVar12 >> 2;
              }
              else if (uVar16 == 0x808080861726762) {
                pCVar5 = (Configuration *)Configuration::getInstance();
                uVar7 = Configuration::supportsBGRA8888(pCVar5);
                if ((uVar7 & 1) == 0) {
                  return 0;
                }
                __dest = *(void **)(this + 0x10);
                __size = *(size_t *)(this + 0x18);
                iVar6 = *(int *)(this + 0x130);
                goto LAB_009986a8;
              }
                    /* try { // try from 00998700 to 00a98743 has its CatchHandler @ 009987a0 */
              iVar9 = iVar9 * iVar2;
              if (iVar10 < 3) {
                iVar10 = 2;
              }
              *(long *)(pIVar19 + -0xc) = (long)__dest + (long)iVar18;
              if (iVar12 < 3) {
                iVar12 = 2;
              }
              iVar1 = iVar9 + 7;
              if (-1 < iVar9) {
                iVar1 = iVar9;
              }
              lVar13 = __size - (long)iVar18;
              iVar12 = iVar10 * (iVar1 >> 3) * iVar12;
              iVar15 = iVar15 >> 1;
              iVar17 = iVar17 >> 1;
                    /* try { // try from 00998748 to 00a9878b has its CatchHandler @ 009987a4 */
              if (lVar13 <= iVar12) {
                iVar12 = (int)lVar13;
              }
              lVar14 = lVar14 + 1;
              if (iVar15 < 2) {
                iVar15 = 1;
              }
              *(int *)(pIVar19 + -4) = iVar18;
              *(int *)pIVar19 = iVar12;
              iVar18 = iVar18 + iVar12;
              pIVar19 = pIVar19 + 0x10;
              if (iVar17 < 2) {
                iVar17 = 1;
              }
              if (iVar6 <= lVar14) {
                return 1;
              }
            } while( true );
          }
          break;
        }
        puVar11 = (undefined8 *)puVar11[1];
                    /* try { // try from 009984f0 to 00a98507 has its CatchHandler @ 009987c4 */
      } while (puVar11 != (undefined8 *)0x0);
LAB_009984f4:
      uVar4 = __cxa_allocate_exception(0x10);
      FUN_0087c04c(uVar4,"map::at:  key not found");
                    /* try { // try from 00998510 to 00a9851b has its CatchHandler @ 009987c0 */
                    /* try { // try from 0099851c to 00a98527 has its CatchHandler @ 009987bc */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(uVar4,&std::out_of_range::typeinfo,std::invalid_argument::~invalid_argument);
    }
  }
  return 0;
}

