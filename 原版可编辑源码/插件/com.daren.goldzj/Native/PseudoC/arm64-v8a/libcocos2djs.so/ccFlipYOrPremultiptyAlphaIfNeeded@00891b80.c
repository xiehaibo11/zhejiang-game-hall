
/* cocos2d::ccFlipYOrPremultiptyAlphaIfNeeded(unsigned int, int, int, unsigned int, void*) */

void __thiscall
cocos2d::ccFlipYOrPremultiptyAlphaIfNeeded
          (cocos2d *this,uint param_1,int param_2,int param_3,uint param_4,void *param_5)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uchar uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  uchar *puVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uchar *puVar17;
  uchar *puVar18;
  uchar *puVar19;
  uchar *puVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  uVar12 = (uint)param_5;
  puVar11 = (uchar *)(ulong)param_4;
  if (puVar11 == (uchar *)0x0) {
    return;
  }
  if (DAT_01d36d1c != '\0') {
    uVar14 = param_1;
    switch((uint)this) {
    case 0x1907:
      uVar14 = param_1 * 3;
      break;
    case 0x1908:
      uVar14 = param_1 << 2;
      break;
    case 0x1909:
      break;
    case 0x190a:
      uVar14 = param_1 << 1;
      break;
    default:
      goto switchD_00891bd4_default;
    }
    if (2 < param_2 + 1U) {
      iVar3 = (int)uVar14 >> 2;
      iVar4 = param_2;
      if (param_2 < 0) {
        iVar4 = param_2 + 1;
      }
      iVar10 = -1;
      if (-1 < -iVar3) {
        iVar10 = -iVar3;
      }
      uVar12 = iVar10 + iVar3;
      uVar1 = (ulong)uVar12 + 1;
      lVar9 = (ulong)uVar12 * 4 + 4;
      uVar12 = uVar12 + 1 & 7;
      uVar7 = uVar14 * (param_2 + -1);
      lVar13 = uVar1 - uVar12;
      uVar15 = 0;
      uVar16 = 0;
      uVar2 = uVar14 & 3;
      uVar8 = uVar7;
      iVar10 = param_2;
      do {
        iVar10 = iVar10 + -1;
        uVar22 = (ulong)(uVar14 * (int)uVar16);
        puVar18 = puVar11 + uVar22;
        puVar20 = puVar11 + iVar10 * uVar14;
        iVar21 = iVar3;
        if ((uVar1 < 8) ||
           ((uVar23 = (ulong)(uVar7 + (int)uVar16 * -uVar14), puVar18 < puVar11 + uVar23 + lVar9 &&
            (puVar11 + uVar23 < puVar11 + uVar22 + lVar9)))) {
LAB_00891ce8:
          do {
            uVar5 = *(undefined4 *)puVar18;
            iVar21 = iVar21 + -1;
            puVar17 = puVar18 + 4;
            *(undefined4 *)puVar18 = *(undefined4 *)puVar20;
            *(undefined4 *)puVar20 = uVar5;
            puVar18 = puVar17;
            puVar20 = puVar20 + 4;
          } while (0 < iVar21);
        }
        else {
          puVar17 = puVar11 + (ulong)uVar8 + 0x10;
          puVar19 = puVar11 + (ulong)uVar15 + 0x10;
          puVar18 = puVar18 + lVar13 * 4;
          puVar20 = puVar20 + lVar13 * 4;
          lVar24 = lVar13;
          do {
            uVar26 = *(undefined8 *)(puVar19 + -8);
            uVar25 = *(undefined8 *)(puVar19 + -0x10);
            uVar31 = *(undefined8 *)(puVar19 + 8);
            uVar30 = *(undefined8 *)puVar19;
            uVar27 = *(undefined8 *)(puVar17 + -0x10);
            uVar29 = *(undefined8 *)(puVar17 + 8);
            uVar28 = *(undefined8 *)puVar17;
            lVar24 = lVar24 + -8;
            *(undefined8 *)(puVar19 + -8) = *(undefined8 *)(puVar17 + -8);
            *(undefined8 *)(puVar19 + -0x10) = uVar27;
            *(undefined8 *)(puVar19 + 8) = uVar29;
            *(undefined8 *)puVar19 = uVar28;
            *(undefined8 *)(puVar17 + -8) = uVar26;
            *(undefined8 *)(puVar17 + -0x10) = uVar25;
            *(undefined8 *)(puVar17 + 8) = uVar31;
            *(undefined8 *)puVar17 = uVar30;
            puVar17 = puVar17 + 0x20;
            puVar19 = puVar19 + 0x20;
          } while (lVar24 != 0);
          iVar21 = iVar3 - (int)lVar13;
          if (uVar12 != 0) goto LAB_00891ce8;
        }
        puVar20 = puVar11 + (ulong)uVar8 + lVar9;
        if (uVar2 == 1) {
LAB_00891d40:
          uVar6 = *puVar18;
          *puVar18 = *puVar20;
          *puVar20 = uVar6;
        }
        else {
          puVar17 = puVar18;
          puVar19 = puVar20;
          if (uVar2 == 2) {
LAB_00891d30:
            uVar6 = *puVar17;
            puVar18 = puVar17 + 1;
            *puVar17 = *puVar19;
            puVar20 = puVar19 + 1;
            *puVar19 = uVar6;
            goto LAB_00891d40;
          }
          if (uVar2 == 3) {
            uVar6 = *puVar18;
            puVar17 = puVar18 + 1;
            *puVar18 = *puVar20;
            puVar19 = puVar20 + 1;
            *puVar20 = uVar6;
            goto LAB_00891d30;
          }
        }
        uVar16 = uVar16 + 1;
        uVar8 = uVar8 - uVar14;
        uVar15 = uVar15 + uVar14;
      } while (uVar16 < (uint)(iVar4 >> 1));
    }
  }
switchD_00891bd4_default:
  if (DAT_01d36d20 == '\0') {
    return;
  }
  premultiplyPixels(puVar11,puVar11,(uint)this,param_1,param_2,uVar12);
  return;
}

