
/* spine::SkeletonClipping::clipTriangles(float*, unsigned short*, unsigned long, float*, unsigned
   long) */

void __thiscall
spine::SkeletonClipping::clipTriangles
          (SkeletonClipping *this,float *param_1,ushort *param_2,ulong param_3,float *param_4,
          ulong param_5)

{
  ushort *puVar1;
  short sVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  short *psVar12;
  float *pfVar13;
  long lVar14;
  float *pfVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  short sVar32;
  float fVar33;
  short sVar34;
  short sVar35;
  float fVar36;
  short sVar37;
  short sVar38;
  float fVar39;
  short sVar40;
  short sVar41;
  float fVar42;
  short sVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  ulong local_e8;
  
  lVar24 = *(long *)(this + 0x1c8);
  uVar18 = *(ulong *)(lVar24 + 8);
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  if (param_3 != 0) {
    lVar7 = param_5 << 0x20;
    lVar19 = 0;
    local_e8 = 0;
LAB_00d59f68:
    do {
      if (uVar18 != 0) {
        uVar20 = 0;
        puVar1 = param_2 + local_e8;
        lVar14 = (long)(lVar7 * (ulong)*puVar1) >> 0x1e;
        fVar25 = *(float *)((long)param_1 + lVar14);
        fVar30 = *(float *)((long)param_4 + lVar14);
        lVar14 = (long)(lVar7 * (ulong)puVar1[1]) >> 0x1e;
        fVar27 = *(float *)((long)param_1 + lVar14);
        fVar31 = *(float *)((long)param_4 + lVar14);
        lVar14 = (long)(lVar7 * (ulong)puVar1[2]) >> 0x1e;
        fVar44 = *(float *)((long)param_1 + lVar14);
        fVar33 = *(float *)((long)param_4 + lVar14);
        lVar14 = (long)(lVar7 * (ulong)*puVar1 + 0x100000000) >> 0x1e;
        fVar42 = *(float *)((long)param_1 + lVar14);
        fVar36 = *(float *)((long)param_4 + lVar14);
        lVar10 = (long)(lVar7 * (ulong)puVar1[1] + 0x100000000) >> 0x1e;
        lVar14 = (long)(lVar7 * (ulong)puVar1[2] + 0x100000000) >> 0x1e;
        fVar48 = *(float *)((long)param_1 + lVar10);
        fVar46 = *(float *)((long)param_1 + lVar14);
        fVar47 = *(float *)((long)param_4 + lVar10);
        fVar39 = *(float *)((long)param_4 + lVar14);
        fVar45 = 1.0 / ((fVar25 - fVar44) * (fVar48 - fVar46) +
                       (fVar44 - fVar27) * (fVar42 - fVar46));
        do {
          lVar14 = *(long *)(this + 0x148);
          uVar4 = clip(this,fVar25,fVar42,fVar27,fVar48,fVar44,fVar46,
                       *(Vector **)(*(long *)(lVar24 + 0x18) + uVar20 * 8),(Vector *)(this + 0x120))
          ;
          sVar2 = (short)lVar19;
          if ((uVar4 & 1) == 0) {
            uVar4 = *(ulong *)(this + 0x148);
            uVar20 = lVar14 + 6;
            *(ulong *)(this + 0x148) = uVar20;
            uVar21 = uVar20;
            if (*(ulong *)(this + 0x150) < uVar20) {
              uVar6 = (uint)((float)uVar20 * 1.75);
              uVar23 = *(undefined8 *)(this + 0x158);
              if (uVar6 < 9) {
                uVar6 = 8;
              }
              *(long *)(this + 0x150) = (long)(int)uVar6;
              plVar5 = (long *)SpineExtension::getInstance();
              uVar23 = (**(code **)(*plVar5 + 0x20))
                                 (plVar5,uVar23,
                                  -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x52);
              uVar21 = *(ulong *)(this + 0x148);
              *(undefined8 *)(this + 0x158) = uVar23;
            }
            if (uVar4 <= uVar21 && uVar21 - uVar4 != 0) {
              memset((void *)(*(long *)(this + 0x158) + uVar4 * 4),0,(uVar21 - uVar4) * 4);
            }
            uVar4 = *(ulong *)(this + 0x188);
            *(ulong *)(this + 0x188) = uVar20;
            if (*(ulong *)(this + 400) < uVar20) {
              uVar6 = (uint)((float)uVar20 * 1.75);
              uVar23 = *(undefined8 *)(this + 0x198);
              if (uVar6 < 9) {
                uVar6 = 8;
              }
              *(long *)(this + 400) = (long)(int)uVar6;
              plVar5 = (long *)SpineExtension::getInstance();
              uVar23 = (**(code **)(*plVar5 + 0x20))
                                 (plVar5,uVar23,
                                  -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x52);
              uVar20 = *(ulong *)(this + 0x188);
              *(undefined8 *)(this + 0x198) = uVar23;
            }
            if (uVar4 <= uVar20 && uVar20 - uVar4 != 0) {
              memset((void *)(*(long *)(this + 0x198) + uVar4 * 4),0,(uVar20 - uVar4) * 4);
            }
            lVar10 = *(long *)(this + 0x158);
            lVar14 = lVar14 * 4;
            *(float *)(lVar10 + lVar14) = fVar25;
            *(float *)(lVar10 + lVar14 + 4) = fVar42;
            *(float *)(lVar10 + lVar14 + 8) = fVar27;
            *(float *)(lVar10 + lVar14 + 0xc) = fVar48;
            *(float *)(lVar10 + lVar14 + 0x10) = fVar44;
            *(float *)(lVar10 + lVar14 + 0x14) = fVar46;
            lVar10 = *(long *)(this + 0x198);
            *(float *)(lVar10 + lVar14) = fVar30;
            *(float *)(lVar10 + lVar14 + 4) = fVar36;
            *(float *)(lVar10 + lVar14 + 8) = fVar31;
            *(float *)(lVar10 + lVar14 + 0xc) = fVar47;
            *(float *)(lVar10 + lVar14 + 0x10) = fVar33;
            *(float *)(lVar10 + lVar14 + 0x14) = fVar39;
            uVar4 = *(ulong *)(this + 0x168);
            uVar20 = uVar4 + 3;
            *(ulong *)(this + 0x168) = uVar20;
            if (*(ulong *)(this + 0x170) < uVar20) {
              uVar6 = (uint)((float)uVar20 * 1.75);
              uVar23 = *(undefined8 *)(this + 0x178);
              if (uVar6 < 9) {
                uVar6 = 8;
              }
              *(long *)(this + 0x170) = (long)(int)uVar6;
              plVar5 = (long *)SpineExtension::getInstance();
              uVar23 = (**(code **)(*plVar5 + 0x20))
                                 (plVar5,uVar23,
                                  -(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar6 << 1,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x52);
              uVar20 = *(ulong *)(this + 0x168);
              *(undefined8 *)(this + 0x178) = uVar23;
            }
            if (uVar4 <= uVar20 && uVar20 - uVar4 != 0) {
              memset((void *)(*(long *)(this + 0x178) + uVar4 * 2),0,(uVar20 - uVar4) * 2);
            }
            psVar12 = (short *)(*(long *)(this + 0x178) + uVar4 * 2);
            local_e8 = local_e8 + 3;
            *psVar12 = sVar2;
            lVar19 = lVar19 + 3;
            psVar12[1] = sVar2 + 1;
            psVar12[2] = sVar2 + 2;
            if (param_3 <= local_e8) {
              return;
            }
            goto LAB_00d59f68;
          }
          uVar4 = *(ulong *)(this + 0x128);
          if (uVar4 != 0) {
            uVar22 = *(ulong *)(this + 0x148);
            uVar21 = (uVar4 & 0xfffffffffffffffe) + lVar14;
            *(ulong *)(this + 0x148) = uVar21;
            uVar8 = uVar21;
            if (*(ulong *)(this + 0x150) < uVar21) {
              uVar6 = (uint)((float)uVar21 * 1.75);
              uVar23 = *(undefined8 *)(this + 0x158);
              if (uVar6 < 9) {
                uVar6 = 8;
              }
              *(long *)(this + 0x150) = (long)(int)uVar6;
              plVar5 = (long *)SpineExtension::getInstance();
              uVar23 = (**(code **)(*plVar5 + 0x20))
                                 (plVar5,uVar23,
                                  -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x52);
              uVar8 = *(ulong *)(this + 0x148);
              *(undefined8 *)(this + 0x158) = uVar23;
            }
            if (uVar22 <= uVar8 && uVar8 - uVar22 != 0) {
              memset((void *)(*(long *)(this + 0x158) + uVar22 * 4),0,(uVar8 - uVar22) * 4);
            }
            uVar22 = *(ulong *)(this + 0x188);
            *(ulong *)(this + 0x188) = uVar21;
            if (*(ulong *)(this + 400) < uVar21) {
              uVar6 = (uint)((float)uVar21 * 1.75);
              uVar23 = *(undefined8 *)(this + 0x198);
              if (uVar6 < 9) {
                uVar6 = 8;
              }
              *(long *)(this + 400) = (long)(int)uVar6;
              plVar5 = (long *)SpineExtension::getInstance();
              uVar23 = (**(code **)(*plVar5 + 0x20))
                                 (plVar5,uVar23,
                                  -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x52);
              uVar21 = *(ulong *)(this + 0x188);
              *(undefined8 *)(this + 0x198) = uVar23;
            }
            if (uVar22 <= uVar21 && uVar21 - uVar22 != 0) {
              memset((void *)(*(long *)(this + 0x198) + uVar22 * 4),0,(uVar21 - uVar22) * 4);
            }
            uVar21 = 0;
            uVar22 = uVar4 >> 1;
            pfVar11 = (float *)(*(long *)(this + 0x138) + 4);
            pfVar13 = (float *)(*(long *)(this + 0x198) + lVar14 * 4 + 4);
            pfVar15 = (float *)(*(long *)(this + 0x158) + lVar14 * 4 + 4);
            do {
              fVar26 = pfVar11[-1];
              fVar28 = *pfVar11;
              uVar21 = uVar21 + 2;
              pfVar11 = pfVar11 + 2;
              pfVar15[-1] = fVar26;
              *pfVar15 = fVar28;
              fVar26 = fVar26 - fVar44;
              fVar28 = fVar28 - fVar46;
              fVar29 = fVar45 * ((fVar48 - fVar46) * fVar26 + (fVar44 - fVar27) * fVar28);
              fVar26 = fVar45 * ((fVar46 - fVar42) * fVar26 + (fVar25 - fVar44) * fVar28);
              fVar28 = (1.0 - fVar29) - fVar26;
              pfVar13[-1] = fVar30 * fVar29 + fVar31 * fVar26 + fVar33 * fVar28;
              *pfVar13 = fVar36 * fVar29 + fVar47 * fVar26 + fVar39 * fVar28;
              pfVar13 = pfVar13 + 2;
              pfVar15 = pfVar15 + 2;
            } while (uVar21 < uVar4);
            uVar4 = *(ulong *)(this + 0x168);
            uVar21 = (uVar22 * 3 + uVar4) - 6;
            *(ulong *)(this + 0x168) = uVar21;
            if (*(ulong *)(this + 0x170) < uVar21) {
              uVar6 = (uint)((float)uVar21 * 1.75);
              uVar23 = *(undefined8 *)(this + 0x178);
              if (uVar6 < 9) {
                uVar6 = 8;
              }
              *(long *)(this + 0x170) = (long)(int)uVar6;
              plVar5 = (long *)SpineExtension::getInstance();
              uVar23 = (**(code **)(*plVar5 + 0x20))
                                 (plVar5,uVar23,
                                  -(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar6 << 1,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                  ,0x52);
              uVar21 = *(ulong *)(this + 0x168);
              *(undefined8 *)(this + 0x178) = uVar23;
            }
            if (uVar4 <= uVar21 && uVar21 - uVar4 != 0) {
              memset((void *)(*(long *)(this + 0x178) + uVar4 * 2),0,(uVar21 - uVar4) * 2);
            }
            if (1 < uVar22 - 1) {
              lVar14 = *(long *)(this + 0x178);
              uVar21 = uVar22 - 2;
              if (uVar21 < 8) {
LAB_00d5a3e4:
                uVar16 = 1;
                uVar8 = uVar4;
              }
              else {
                uVar8 = lVar14 + uVar4 * 2;
                auVar3._8_8_ = 0;
                auVar3._0_8_ = uVar22 - 3;
                uVar16 = (uVar22 - 3) * 6;
                if ((((~(uVar8 + 2) <= uVar16 && uVar16 - ~(uVar8 + 2) != 0) ||
                     (SUB168(auVar3 * ZEXT816(6),8) != 0)) ||
                    (~(uVar8 + 4) <= uVar16 && uVar16 - ~(uVar8 + 4) != 0)) ||
                   (~uVar8 <= uVar16 && uVar16 - ~uVar8 != 0)) goto LAB_00d5a3e4;
                uVar17 = uVar21 & 0xfffffffffffffff8;
                uVar16 = uVar17 | 1;
                uVar8 = uVar4 + uVar17 * 3;
                psVar12 = (short *)(lVar14 + uVar4 * 2);
                uVar4 = uVar17;
                sVar34 = 2;
                sVar37 = 4;
                sVar32 = 1;
                sVar35 = 3;
                sVar40 = 6;
                sVar43 = 8;
                sVar38 = 5;
                sVar41 = 7;
                do {
                  sVar49 = sVar32 + sVar2;
                  sVar50 = sVar34 + sVar2;
                  sVar53 = sVar38 + sVar2;
                  sVar54 = sVar40 + sVar2;
                  sVar51 = sVar35 + sVar2;
                  sVar52 = sVar37 + sVar2;
                  uVar4 = uVar4 - 8;
                  sVar38 = sVar38 + 8;
                  sVar40 = sVar40 + 8;
                  sVar35 = sVar35 + 8;
                  sVar37 = sVar37 + 8;
                  sVar32 = sVar32 + 8;
                  sVar34 = sVar34 + 8;
                  *psVar12 = sVar2;
                  psVar12[1] = sVar49;
                  psVar12[2] = sVar49 + 1;
                  psVar12[3] = sVar2;
                  psVar12[4] = sVar50;
                  psVar12[5] = sVar50 + 1;
                  psVar12[6] = sVar2;
                  psVar12[7] = sVar51;
                  psVar12[8] = sVar51 + 1;
                  psVar12[9] = sVar2;
                  psVar12[10] = sVar52;
                  psVar12[0xb] = sVar52 + 1;
                  psVar12[0xc] = sVar2;
                  psVar12[0xd] = sVar53;
                  psVar12[0xe] = sVar53 + 1;
                  psVar12[0xf] = sVar2;
                  psVar12[0x10] = sVar54;
                  psVar12[0x11] = sVar54 + 1;
                  psVar12[0x12] = sVar2;
                  psVar12[0x13] = sVar41 + sVar2;
                  psVar12[0x14] = sVar41 + sVar2 + 1;
                  psVar12[0x15] = sVar2;
                  psVar12[0x16] = sVar43 + sVar2;
                  psVar12[0x17] = sVar43 + sVar2 + 1;
                  psVar12 = psVar12 + 0x18;
                  sVar41 = sVar41 + 8;
                  sVar43 = sVar43 + 8;
                } while (uVar4 != 0);
                if (uVar21 == uVar17) goto LAB_00d5a418;
              }
              lVar9 = (uVar22 - 1) - uVar16;
              lVar10 = uVar16 + lVar19;
              psVar12 = (short *)(lVar14 + uVar8 * 2 + 2);
              do {
                sVar34 = (short)lVar10;
                psVar12[-1] = sVar2;
                *psVar12 = sVar34;
                lVar9 = lVar9 + -1;
                lVar10 = lVar10 + 1;
                psVar12[1] = sVar34 + 1;
                psVar12 = psVar12 + 3;
              } while (lVar9 != 0);
            }
LAB_00d5a418:
            lVar19 = uVar22 + lVar19;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < uVar18);
      }
      local_e8 = local_e8 + 3;
    } while (local_e8 < param_3);
  }
  return;
}

