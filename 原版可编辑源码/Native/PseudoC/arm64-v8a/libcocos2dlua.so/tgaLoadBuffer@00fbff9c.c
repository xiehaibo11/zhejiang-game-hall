
/* cocos2d::tgaLoadBuffer(unsigned char*, long) */

sImageTGA * cocos2d::tgaLoadBuffer(uchar *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  sImageTGA sVar3;
  sImageTGA sVar4;
  undefined1 uVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  long lVar9;
  byte bVar10;
  sImageTGA *psVar11;
  ulong uVar12;
  void *__dest;
  undefined4 uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  size_t __n;
  uint uVar18;
  byte bVar19;
  undefined1 local_6c [4];
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  if (param_1 == (uchar *)0x0) {
    psVar11 = (sImageTGA *)0x0;
    goto LAB_00fc01b0;
  }
  psVar11 = malloc(0x20);
  uVar12 = tgaLoadHeader(param_1,param_2,psVar11);
  if ((uVar12 & 1) == 0) {
LAB_00fc01a8:
    uVar13 = 4;
  }
  else {
    sVar3 = psVar11[4];
    if (((byte)sVar3 - 2 < 2) || ((byte)sVar3 == 10)) {
      sVar4 = psVar11[5];
      sVar7 = *(short *)(psVar11 + 8);
      sVar8 = *(short *)(psVar11 + 6);
      bVar10 = (byte)sVar4 >> 3;
      uVar12 = (ulong)bVar10;
      __dest = malloc((long)(int)((int)sVar7 * (uint)bVar10 * (int)sVar8));
      *(void **)(psVar11 + 0x10) = __dest;
      if (__dest != (void *)0x0) {
        if (sVar3 == (sImageTGA)0xa) {
          iVar17 = (int)sVar8 * (int)sVar7;
          if (iVar17 != 0) {
            uVar18 = 0;
            uVar14 = 0x12;
LAB_00fc00b8:
            if (uVar14 + 1 <= (ulong)param_2) {
              bVar6 = param_1[uVar14];
              bVar19 = bVar6 & 0x7f;
              uVar15 = uVar14 + 1;
              while (uVar14 = uVar15 + uVar12, uVar14 <= (ulong)param_2) {
                __memcpy_chk(local_6c,param_1 + uVar15,uVar12,4);
                do {
                  memcpy((void *)(*(long *)(psVar11 + 0x10) + (ulong)uVar18),local_6c,uVar12);
                  iVar17 = iVar17 + -1;
                  uVar18 = uVar18 + bVar10;
                  if (iVar17 == 0) goto LAB_00fc018c;
                  if (bVar19 == 0) goto LAB_00fc00b8;
                  bVar19 = bVar19 - 1;
                  uVar15 = uVar14;
                } while ((bVar6 & 0x80) != 0);
              }
            }
          }
        }
        else {
          iVar17 = (uint)bVar10 * (int)sVar7 * (int)sVar8;
          __n = (size_t)iVar17;
          if ((ulong)param_2 < __n + 0x12) {
            uVar13 = 2;
            goto LAB_00fc01ac;
          }
          memcpy(__dest,param_1 + 0x12,__n);
          if ((0x17 < (byte)sVar4) && (0 < iVar17)) {
            lVar16 = 0;
            do {
              puVar1 = (undefined1 *)(*(long *)(psVar11 + 0x10) + lVar16);
              uVar5 = *puVar1;
              *puVar1 = puVar1[2];
              lVar2 = *(long *)(psVar11 + 0x10) + lVar16;
              lVar16 = lVar16 + uVar12;
              *(undefined1 *)(lVar2 + 2) = uVar5;
            } while (lVar16 < (long)__n);
          }
        }
LAB_00fc018c:
        *(undefined4 *)psVar11 = 0;
        if ((*(int *)(psVar11 + 0x18) == 0) ||
           (tgaFlipImage(psVar11), *(int *)(psVar11 + 0x18) == 0)) goto LAB_00fc01b0;
      }
      goto LAB_00fc01a8;
    }
    if (sVar3 == (sImageTGA)0x1) {
      uVar13 = 3;
    }
    else {
      uVar13 = 5;
    }
  }
LAB_00fc01ac:
  *(undefined4 *)psVar11 = uVar13;
LAB_00fc01b0:
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return psVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

