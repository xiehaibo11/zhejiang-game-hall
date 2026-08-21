
void _TIFFRewriteField(undefined8 *param_1,short param_2,uint param_3,ulong param_4,void *param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  void *__ptr;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  code *pcVar14;
  uint local_a4;
  ulong local_a0;
  ulong local_98;
  ushort local_8c [2];
  short local_88 [2];
  short local_84 [2];
  short local_80;
  ushort local_7e;
  undefined8 local_7c;
  ulong local_74;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_88[0] = 0;
  local_8c[0] = 0;
  local_a0 = 0;
  local_98 = 0;
  TIFFFindField(param_1,param_2,0);
  if ((*(byte *)((long)param_1 + 0x11) >> 3 & 1) == 0) {
    if (param_1[3] == 0) {
      TIFFErrorExt(param_1[0x77],"TIFFResetField",
                   "Attempt to reset field on directory not already on disk.");
    }
    else {
      lVar4 = (*(code *)param_1[0x7a])(param_1[0x77],param_1[3],0);
      if (lVar4 == param_1[3]) {
        if ((*(byte *)((long)param_1 + 0x12) >> 3 & 1) != 0) {
          lVar5 = (*(code *)param_1[0x78])(param_1[0x77],&local_80,8);
          if (lVar5 != 8) goto LAB_01130a48;
          if (*(char *)(param_1 + 2) < '\0') {
            TIFFSwabLong8(&local_80);
          }
          lVar4 = lVar4 + 8;
          lVar5 = 0x14;
          local_84[0] = local_80;
joined_r0x011309d0:
          while (local_84[0] != 0) {
            lVar6 = (*(code *)param_1[0x78])(param_1[0x77],&local_80,lVar5);
            if (lVar6 != lVar5) {
              uVar13 = param_1[0x77];
              uVar9 = *param_1;
              pcVar8 = "%s: Can not read TIFF directory entry.";
              goto LAB_01130ef4;
            }
            local_88[0] = local_80;
            if (*(char *)(param_1 + 2) < '\0') {
              TIFFSwabShort(local_88);
            }
            if (local_88[0] == param_2) goto LAB_011309e0;
            lVar4 = lVar4 + lVar5;
          }
          if (local_88[0] != param_2) {
            TIFFErrorExt(param_1[0x77],"TIFFResetField","%s: Could not find tag %d.",*param_1,
                         param_2);
            goto LAB_01130ef8;
          }
LAB_011309e0:
          local_8c[0] = local_7e;
          uVar11 = *(uint *)(param_1 + 2);
          if ((uVar11 >> 7 & 1) != 0) {
            TIFFSwabShort(local_8c);
            uVar11 = *(uint *)(param_1 + 2);
          }
          if ((uVar11 >> 0x13 & 1) == 0) {
            local_a4 = (uint)local_7c;
            if ((uVar11 >> 7 & 1) != 0) {
              TIFFSwabLong(&local_a4);
              uVar11 = *(uint *)(param_1 + 2);
            }
            local_98 = (ulong)local_a4;
            local_a4 = local_7c._4_4_;
            if ((uVar11 >> 7 & 1) != 0) {
              TIFFSwabLong(&local_a4);
            }
            local_a0 = (ulong)local_a4;
          }
          else {
            local_98 = local_7c;
            if ((uVar11 >> 7 & 1) != 0) {
              TIFFSwabLong8(&local_98);
              uVar11 = *(uint *)(param_1 + 2);
            }
            local_a0 = local_74;
            if ((uVar11 >> 7 & 1) != 0) {
              TIFFSwabLong8(&local_a0);
            }
          }
          iVar3 = TIFFDataWidth(param_3);
          uVar11 = param_3;
          if (((iVar3 == 8) && ((*(byte *)((long)param_1 + 0x12) >> 3 & 1) == 0)) &&
             (param_3 - 0x10 < 3)) {
            uVar11 = *(uint *)(&DAT_0147e0e0 + (long)(int)(param_3 - 0x10) * 4);
          }
          iVar3 = TIFFDataWidth(uVar11);
          __ptr = (void *)_TIFFCheckMalloc(param_1,param_4,(long)iVar3,"for field buffer.");
          uVar13 = 0;
          if (__ptr == (void *)0x0) goto LAB_01130efc;
          if (uVar11 == param_3) {
            iVar3 = TIFFDataWidth(param_3);
            memcpy(__ptr,param_5,(long)iVar3 * param_4);
          }
          else if ((param_3 == 0x11) && (uVar11 == 9)) {
            if (0 < (long)param_4) {
              lVar6 = 0;
              do {
                lVar12 = *(long *)((long)param_5 + lVar6 * 8);
                iVar3 = (int)lVar12;
                *(int *)((long)__ptr + lVar6 * 4) = iVar3;
                if (iVar3 != lVar12) goto LAB_01130c28;
                lVar6 = lVar6 + 1;
              } while (lVar6 < (long)param_4);
            }
          }
          else if ((((param_3 == 0x10) && (uVar11 == 4)) || ((param_3 == 0x12 && (uVar11 == 0xd))))
                  && (0 < (long)param_4)) {
            lVar6 = 0;
            do {
              uVar7 = *(ulong *)((long)param_5 + lVar6 * 8);
              *(int *)((long)__ptr + lVar6 * 4) = (int)uVar7;
              if ((uVar7 & 0xffffffff00000000) != 0) goto LAB_01130c28;
              lVar6 = lVar6 + 1;
            } while (lVar6 < (long)param_4);
          }
          iVar3 = TIFFDataWidth(uVar11);
          if ((1 < iVar3) && (*(char *)(param_1 + 2) < '\0')) {
            iVar3 = TIFFDataWidth(uVar11);
            if (iVar3 == 2) {
              TIFFSwabArrayOfShort(__ptr,param_4);
            }
            else {
              iVar3 = TIFFDataWidth(uVar11);
              if (iVar3 == 4) {
                TIFFSwabArrayOfLong(__ptr,param_4);
              }
              else {
                iVar3 = TIFFDataWidth(uVar11);
                if (iVar3 == 8) {
                  TIFFSwabArrayOfLong8(__ptr,param_4);
                }
              }
            }
          }
          uVar1 = *(uint *)(param_1 + 2);
          iVar3 = TIFFDataWidth(uVar11);
          if ((uVar1 >> 0x13 & 1) == 0) {
            if ((long)((long)iVar3 * param_4) < 5) {
              local_a0 = lVar4 + 8;
              goto LAB_01130cbc;
            }
LAB_01130cc8:
            bVar10 = false;
          }
          else {
            if (8 < (long)((long)iVar3 * param_4)) goto LAB_01130cc8;
            local_a0 = lVar4 + 0xc;
LAB_01130cbc:
            bVar10 = true;
          }
          if ((local_98 == param_4) && ((uint)local_8c[0] == (uVar11 & 0xffff))) {
            uVar7 = (*(code *)param_1[0x7a])(param_1[0x77],local_a0,0);
            if (uVar7 == local_a0) {
              pcVar14 = (code *)param_1[0x79];
              uVar13 = param_1[0x77];
              iVar3 = TIFFDataWidth(uVar11);
              lVar4 = (*pcVar14)(uVar13,__ptr,(long)iVar3 * param_4);
              iVar3 = TIFFDataWidth(uVar11);
              _TIFFfree(__ptr);
              if (lVar4 != (long)iVar3 * param_4) {
LAB_01130e9c:
                TIFFErrorExt(param_1[0x77],"TIFFResetField","Error writing directory link");
                goto LAB_01130ef8;
              }
LAB_01130e94:
              uVar13 = 1;
              goto LAB_01130efc;
            }
            _TIFFfree(__ptr);
          }
          else {
            if (bVar10) {
              iVar3 = TIFFDataWidth(uVar11);
              memcpy(&local_a0,__ptr,(long)iVar3 * param_4);
            }
            else {
              local_a0 = (*(code *)param_1[0x7a])(param_1[0x77],0,2);
              pcVar14 = (code *)param_1[0x79];
              uVar13 = param_1[0x77];
              iVar3 = TIFFDataWidth(uVar11);
              lVar6 = (*pcVar14)(uVar13,__ptr,(long)iVar3 * param_4);
              iVar3 = TIFFDataWidth(uVar11);
              _TIFFfree(__ptr);
              if (lVar6 != (long)iVar3 * param_4) goto LAB_01130e9c;
            }
            local_8c[0] = (ushort)uVar11;
            uVar11 = *(uint *)(param_1 + 2);
            local_7e = local_8c[0];
            if ((uVar11 >> 7 & 1) != 0) {
              TIFFSwabShort((ulong)&local_80 | 2);
              uVar11 = *(uint *)(param_1 + 2);
            }
            if ((uVar11 >> 0x13 & 1) == 0) {
              local_7c = CONCAT44(local_7c._4_4_,(int)local_98);
              if ((uVar11 >> 7 & 1) != 0) {
                TIFFSwabLong(&local_7c);
                uVar11 = *(uint *)(param_1 + 2);
              }
              local_7c = CONCAT44((int)local_a0,(uint)local_7c);
              if ((uVar11 >> 7 & 1) != 0) {
                TIFFSwabLong((long)&local_7c + 4);
              }
            }
            else {
              local_7c = local_98;
              if ((uVar11 >> 7 & 1) != 0) {
                TIFFSwabLong8(&local_7c);
                uVar11 = *(uint *)(param_1 + 2);
              }
              local_74 = local_a0;
              if ((uVar11 >> 7 & 1) != 0) {
                TIFFSwabLong8(&local_74);
              }
            }
            lVar6 = (*(code *)param_1[0x7a])(param_1[0x77],lVar4,0);
            if (lVar6 == lVar4) {
              lVar4 = (*(code *)param_1[0x79])(param_1[0x77],&local_80,lVar5);
              if (lVar4 == lVar5) goto LAB_01130e94;
              uVar13 = param_1[0x77];
              uVar9 = *param_1;
              pcVar8 = "%s: Can not write TIFF directory entry.";
              goto LAB_01130ef4;
            }
          }
          goto LAB_01130edc;
        }
        lVar5 = (*(code *)param_1[0x78])(param_1[0x77],local_84,2);
        if (lVar5 == 2) {
          if (*(char *)(param_1 + 2) < '\0') {
            TIFFSwabShort(local_84);
          }
          lVar4 = lVar4 + 2;
          lVar5 = 0xc;
          goto joined_r0x011309d0;
        }
LAB_01130a48:
        uVar13 = param_1[0x77];
        uVar9 = *param_1;
        pcVar8 = "%s: Can not read TIFF directory count";
      }
      else {
LAB_01130edc:
        uVar13 = param_1[0x77];
        uVar9 = *param_1;
        pcVar8 = "%s: Seek error accessing TIFF directory";
      }
LAB_01130ef4:
      TIFFErrorExt(uVar13,"TIFFResetField",pcVar8,uVar9);
    }
  }
  else {
    TIFFErrorExt(param_1[0x77],"TIFFResetField",
                 "Memory mapped files not currently supported for this operation.");
  }
  goto LAB_01130ef8;
LAB_01130c28:
  _TIFFfree(__ptr);
  TIFFErrorExt(param_1[0x77],"TIFFResetField","Value exceeds 32bit range of output type.");
LAB_01130ef8:
  uVar13 = 0;
LAB_01130efc:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar13);
}

