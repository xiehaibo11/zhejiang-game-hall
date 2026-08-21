
/* WARNING: Removing unreachable block (ram,0x01354000) */
/* WARNING: Removing unreachable block (ram,0x01354010) */

ulong FUN_01352b00(ulong param_1,long param_2,ulong param_3)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  uint uVar8;
  double dVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  long unaff_x26;
  float fVar13;
  double dVar14;
  double unaff_d15;
  undefined1 auVar15 [16];
  
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = param_1;
  lVar4 = unaff_x26 + (ulong)*(uint *)(param_2 + -1);
  bVar2 = *(byte *)(lVar4 + 10) >> 3;
  iVar11 = (int)param_1;
  if (bVar2 < 0x11) {
    if (bVar2 < 5) {
      if (bVar2 < 2) {
        if (bVar2 == 0) {
          lVar1 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
          if (*(int *)(lVar1 + -1) != (int)*(undefined8 *)(unaff_x26 + 0xe8)) {
            if ((param_3 & 1) == 0) {
              uVar10 = (long)(param_3 << 0x20) >> 0x21;
            }
            else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
                     (uVar10 = (ulong)*(double *)(param_3 + 3),
                     *(double *)(param_3 + 3) != (double)(long)uVar10)) ||
                    (0x3ffffffffffffe < uVar10 + 0x1fffffffffffff)) goto LAB_01353f70;
            if (*(short *)(lVar4 + 7) == 0x423) {
              uVar8 = *(uint *)(param_2 + 0xb);
            }
            else {
              uVar8 = *(uint *)(lVar1 + 3);
            }
            if (((param_1 & 1) == 0) &&
               (uVar10 < (ulong)((long)(unaff_x26 + (ulong)uVar8 << 0x20) >> 0x21))) {
              if (uVar10 < (ulong)((long)((ulong)*(uint *)(lVar1 + 3) << 0x20) >> 0x21)) {
                *(int *)(lVar1 + uVar10 * 4 + 7) = iVar11;
                return param_1;
              }
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(0,0x1353fcc);
              (*pcVar3)();
            }
          }
        }
        else {
          if (bVar2 != 1) goto LAB_01353fc4;
          lVar1 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
          if (*(int *)(lVar1 + -1) != (int)*(undefined8 *)(unaff_x26 + 0xe8)) {
            if ((param_3 & 1) == 0) {
              uVar10 = (long)(param_3 << 0x20) >> 0x21;
            }
            else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
                     (uVar10 = (ulong)*(double *)(param_3 + 3),
                     *(double *)(param_3 + 3) != (double)(long)uVar10)) ||
                    (0x3ffffffffffffe < uVar10 + 0x1fffffffffffff)) goto LAB_01353f70;
            if (*(short *)(lVar4 + 7) == 0x423) {
              uVar8 = *(uint *)(param_2 + 0xb);
            }
            else {
              uVar8 = *(uint *)(lVar1 + 3);
            }
            if (((param_1 & 1) == 0) &&
               (uVar10 < (ulong)((long)(unaff_x26 + (ulong)uVar8 << 0x20) >> 0x21))) {
              if (uVar10 < (ulong)((long)((ulong)*(uint *)(lVar1 + 3) << 0x20) >> 0x21)) {
                *(int *)(lVar1 + uVar10 * 4 + 7) = iVar11;
                return param_1;
              }
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(0,0x1353fd4);
              (*pcVar3)();
            }
          }
        }
      }
      else if (bVar2 == 2) {
        uVar10 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
        if (*(int *)(uVar10 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xe8)) {
          if ((param_3 & 1) == 0) {
            uVar5 = (long)(param_3 << 0x20) >> 0x21;
          }
          else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
                   (uVar5 = (ulong)*(double *)(param_3 + 3),
                   *(double *)(param_3 + 3) != (double)(long)uVar5)) ||
                  (0x3ffffffffffffe < uVar5 + 0x1fffffffffffff)) goto LAB_01353f70;
          if (*(short *)(lVar4 + 7) == 0x423) {
            uVar8 = *(uint *)(param_2 + 0xb);
          }
          else {
            uVar8 = *(uint *)(uVar10 + 3);
          }
          if (uVar5 < (ulong)((long)(unaff_x26 + (ulong)uVar8 << 0x20) >> 0x21)) {
            if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) <= uVar5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(0,0x1353fdc);
              (*pcVar3)();
            }
            lVar4 = uVar5 * 4 + 7;
            *(int *)(uVar10 + lVar4) = iVar11;
            if (((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
              return param_1;
            }
            if ((param_1 & 1) == 0) {
              return param_1;
            }
            uVar5 = unaff_x26 + (param_1 & 0xffffffff);
            if (((uint)*(undefined8 *)((uVar5 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
              return uVar5;
            }
            FUN_0133eb00(uVar10,uVar10 + lVar4,0,2);
            return uVar5;
          }
        }
      }
      else if (bVar2 == 3) {
        uVar10 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
        if (*(int *)(uVar10 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xe8)) {
          if ((param_3 & 1) == 0) {
            uVar5 = (long)(param_3 << 0x20) >> 0x21;
          }
          else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
                   (uVar5 = (ulong)*(double *)(param_3 + 3),
                   *(double *)(param_3 + 3) != (double)(long)uVar5)) ||
                  (0x3ffffffffffffe < uVar5 + 0x1fffffffffffff)) goto LAB_01353f70;
          if (*(short *)(lVar4 + 7) == 0x423) {
            uVar8 = *(uint *)(param_2 + 0xb);
          }
          else {
            uVar8 = *(uint *)(uVar10 + 3);
          }
          if (uVar5 < (ulong)((long)(unaff_x26 + (ulong)uVar8 << 0x20) >> 0x21)) {
            if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) <= uVar5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(0,0x1353ff4);
              (*pcVar3)();
            }
            lVar4 = uVar5 * 4 + 7;
            *(int *)(uVar10 + lVar4) = iVar11;
            if (((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
              return param_1;
            }
            if ((param_1 & 1) == 0) {
              return param_1;
            }
            uVar5 = unaff_x26 + (param_1 & 0xffffffff);
            if (((uint)*(undefined8 *)((uVar5 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
              return uVar5;
            }
            FUN_0133eb00(uVar10,uVar10 + lVar4,0,2);
            return uVar5;
          }
        }
      }
      else {
        if (bVar2 != 4) goto LAB_01353fc4;
        lVar1 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
        if ((param_3 & 1) == 0) {
          uVar10 = (long)(param_3 << 0x20) >> 0x21;
        }
        else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
                 (uVar10 = (ulong)*(double *)(param_3 + 3),
                 *(double *)(param_3 + 3) != (double)(long)uVar10)) ||
                (0x3ffffffffffffe < uVar10 + 0x1fffffffffffff)) goto LAB_01353f70;
        if (*(short *)(lVar4 + 7) == 0x423) {
          uVar8 = *(uint *)(param_2 + 0xb);
        }
        else {
          uVar8 = *(uint *)(lVar1 + 3);
        }
        if ((param_1 & 1) == 0) {
          dVar14 = (double)(iVar11 >> 1);
        }
        else {
          if (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) goto LAB_01353f70;
          dVar14 = *(double *)(param_1 + 3);
        }
        if (uVar10 < (ulong)((long)(unaff_x26 + (ulong)uVar8 << 0x20) >> 0x21)) {
          if (uVar10 < (ulong)((long)((ulong)*(uint *)(lVar1 + 3) << 0x20) >> 0x21)) {
            *(double *)(lVar1 + uVar10 * 8 + 7) = dVar14 - unaff_d15;
            return param_1;
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0,0x135401c);
          (*pcVar3)();
        }
      }
    }
    else if (bVar2 < 7) {
      if (bVar2 == 5) {
        lVar1 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
        if ((param_3 & 1) == 0) {
          uVar10 = (long)(param_3 << 0x20) >> 0x21;
        }
        else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
                 (uVar10 = (ulong)*(double *)(param_3 + 3),
                 *(double *)(param_3 + 3) != (double)(long)uVar10)) ||
                (0x3ffffffffffffe < uVar10 + 0x1fffffffffffff)) goto LAB_01353f70;
        if (*(short *)(lVar4 + 7) == 0x423) {
          uVar8 = *(uint *)(param_2 + 0xb);
        }
        else {
          uVar8 = *(uint *)(lVar1 + 3);
        }
        if ((param_1 & 1) == 0) {
          dVar14 = (double)(iVar11 >> 1);
        }
        else {
          if (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) goto LAB_01353f70;
          dVar14 = *(double *)(param_1 + 3);
        }
        if (uVar10 < (ulong)((long)(unaff_x26 + (ulong)uVar8 << 0x20) >> 0x21)) {
          if (uVar10 < (ulong)((long)((ulong)*(uint *)(lVar1 + 3) << 0x20) >> 0x21)) {
            *(double *)(lVar1 + uVar10 * 8 + 7) = dVar14 - unaff_d15;
            return param_1;
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0,0x1354024);
          (*pcVar3)();
        }
      }
      else {
        if (bVar2 != 6) goto LAB_01353fc4;
        uVar10 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
        if (*(int *)(uVar10 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xe8)) {
          if ((param_3 & 1) == 0) {
            uVar5 = (long)(param_3 << 0x20) >> 0x21;
          }
          else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
                   (uVar5 = (ulong)*(double *)(param_3 + 3),
                   *(double *)(param_3 + 3) != (double)(long)uVar5)) ||
                  (0x3ffffffffffffe < uVar5 + 0x1fffffffffffff)) goto LAB_01353f70;
          if (*(short *)(lVar4 + 7) == 0x423) {
            uVar8 = *(uint *)(param_2 + 0xb);
          }
          else {
            uVar8 = *(uint *)(uVar10 + 3);
          }
          if (uVar5 < (ulong)((long)(unaff_x26 + (ulong)uVar8 << 0x20) >> 0x21)) {
            if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) <= uVar5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(0,0x1353fe4);
              (*pcVar3)();
            }
            lVar4 = uVar5 * 4 + 7;
            *(int *)(uVar10 + lVar4) = iVar11;
            if (((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
              return param_1;
            }
            if ((param_1 & 1) == 0) {
              return param_1;
            }
            uVar5 = unaff_x26 + (param_1 & 0xffffffff);
            if (((uint)*(undefined8 *)((uVar5 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
              return uVar5;
            }
            FUN_0133eb00(uVar10,uVar10 + lVar4,0,2);
            return uVar5;
          }
        }
      }
    }
    else if (bVar2 == 7) {
      uVar10 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
      if (*(int *)(uVar10 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xe8)) {
        if ((param_3 & 1) == 0) {
          uVar5 = (long)(param_3 << 0x20) >> 0x21;
        }
        else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
                 (uVar5 = (ulong)*(double *)(param_3 + 3),
                 *(double *)(param_3 + 3) != (double)(long)uVar5)) ||
                (0x3ffffffffffffe < uVar5 + 0x1fffffffffffff)) goto LAB_01353f70;
        if (*(short *)(lVar4 + 7) == 0x423) {
          uVar8 = *(uint *)(param_2 + 0xb);
        }
        else {
          uVar8 = *(uint *)(uVar10 + 3);
        }
        if (uVar5 < (ulong)((long)(unaff_x26 + (ulong)uVar8 << 0x20) >> 0x21)) {
          if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(0,0x1353ffc);
            (*pcVar3)();
          }
          lVar4 = uVar5 * 4 + 7;
          if (*(int *)(uVar10 + lVar4) != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
            *(int *)(uVar10 + lVar4) = iVar11;
            if (((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
              return param_1;
            }
            if ((param_1 & 1) == 0) {
              return param_1;
            }
            uVar5 = unaff_x26 + (param_1 & 0xffffffff);
            if (((uint)*(undefined8 *)((uVar5 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
              return uVar5;
            }
            FUN_0133eb00(uVar10,uVar10 + lVar4,0,2);
            return uVar5;
          }
        }
      }
    }
    else if (bVar2 == 8) {
      uVar10 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
      if (*(int *)(uVar10 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xe8)) {
        if ((param_3 & 1) == 0) {
          uVar5 = (long)(param_3 << 0x20) >> 0x21;
        }
        else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
                 (uVar5 = (ulong)*(double *)(param_3 + 3),
                 *(double *)(param_3 + 3) != (double)(long)uVar5)) ||
                (0x3ffffffffffffe < uVar5 + 0x1fffffffffffff)) goto LAB_01353f70;
        if (*(short *)(lVar4 + 7) == 0x423) {
          uVar8 = *(uint *)(param_2 + 0xb);
        }
        else {
          uVar8 = *(uint *)(uVar10 + 3);
        }
        if (uVar5 < (ulong)((long)(unaff_x26 + (ulong)uVar8 << 0x20) >> 0x21)) {
          if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(0,0x1353fec);
            (*pcVar3)();
          }
          lVar4 = uVar5 * 4 + 7;
          *(int *)(uVar10 + lVar4) = iVar11;
          if (((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
            return param_1;
          }
          if ((param_1 & 1) == 0) {
            return param_1;
          }
          uVar5 = unaff_x26 + (param_1 & 0xffffffff);
          if (((uint)*(undefined8 *)((uVar5 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
            return uVar5;
          }
          FUN_0133eb00(uVar10,uVar10 + lVar4,0,2);
          return uVar5;
        }
      }
    }
    else {
      if (bVar2 != 9) goto LAB_01353fc4;
      uVar10 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
      if (*(int *)(uVar10 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xe8)) {
        if ((param_3 & 1) == 0) {
          uVar5 = (long)(param_3 << 0x20) >> 0x21;
        }
        else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
                 (uVar5 = (ulong)*(double *)(param_3 + 3),
                 *(double *)(param_3 + 3) != (double)(long)uVar5)) ||
                (0x3ffffffffffffe < uVar5 + 0x1fffffffffffff)) goto LAB_01353f70;
        if (*(short *)(lVar4 + 7) == 0x423) {
          uVar8 = *(uint *)(param_2 + 0xb);
        }
        else {
          uVar8 = *(uint *)(uVar10 + 3);
        }
        if (uVar5 < (ulong)((long)(unaff_x26 + (ulong)uVar8 << 0x20) >> 0x21)) {
          if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(0,0x135400c);
            (*pcVar3)();
          }
          lVar4 = uVar5 * 4 + 7;
          if (*(int *)(uVar10 + lVar4) != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
            *(int *)(uVar10 + lVar4) = iVar11;
            if (((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
              return param_1;
            }
            if ((param_1 & 1) == 0) {
              return param_1;
            }
            uVar5 = unaff_x26 + (param_1 & 0xffffffff);
            if (((uint)*(undefined8 *)((uVar5 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
              return uVar5;
            }
            FUN_0133eb00(uVar10,uVar10 + lVar4,0,2);
            return uVar5;
          }
        }
      }
    }
    goto LAB_01353f70;
  }
  if (bVar2 < 0x16) {
    if (bVar2 < 0x13) {
      if (bVar2 == 0x11) {
        if ((param_3 & 1) == 0) {
          uVar10 = (long)(param_3 << 0x20) >> 0x21;
        }
        else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
                 (uVar10 = (ulong)*(double *)(param_3 + 3),
                 *(double *)(param_3 + 3) != (double)(long)uVar10)) ||
                (0x3ffffffffffffe < uVar10 + 0x1fffffffffffff)) goto LAB_01353f70;
        while ((param_1 & 1) != 0) {
          lVar4 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
          if (((int)lVar4 == (int)*(undefined8 *)(unaff_x26 + 0x140)) ||
             (*(short *)(lVar4 + 7) == 0x43)) {
            dVar9 = *(double *)(param_1 + 3);
            dVar14 = (double)(long)dVar9;
            if (SBORROW8((long)dVar14,1) || SCARRY8((long)dVar14,1)) {
              auVar15 = FUN_013c0b40();
              dVar14 = dVar9;
            }
            uVar6 = SUB81(dVar14,0);
            goto LAB_0135347c;
          }
          param_1 = thunk_FUN_01349c30();
        }
        uVar6 = (undefined1)((int)param_1 >> 1);
LAB_0135347c:
        lVar4 = auVar15._8_8_;
        if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar4 + 0xb) + 0x1b) >> 2 & 1) == 0) &&
           (uVar10 < *(ulong *)(lVar4 + 0x1f))) {
          *(undefined1 *)(*(long *)(lVar4 + 0x27) + (ulong)*(uint *)(lVar4 + 0x2f) + uVar10) = uVar6
          ;
          return auVar15._0_8_;
        }
      }
      else {
        if (bVar2 != 0x12) {
LAB_01353fc4:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0,0x1353fc8);
          (*pcVar3)();
        }
        if ((param_3 & 1) == 0) {
          uVar10 = (long)(param_3 << 0x20) >> 0x21;
        }
        else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
                 (uVar10 = (ulong)*(double *)(param_3 + 3),
                 *(double *)(param_3 + 3) != (double)(long)uVar10)) ||
                (0x3ffffffffffffe < uVar10 + 0x1fffffffffffff)) goto LAB_01353f70;
        while ((param_1 & 1) != 0) {
          lVar4 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
          if (((int)lVar4 == (int)*(undefined8 *)(unaff_x26 + 0x140)) ||
             (*(short *)(lVar4 + 7) == 0x43)) {
            dVar9 = *(double *)(param_1 + 3);
            dVar14 = (double)(long)dVar9;
            if (SBORROW8((long)dVar14,1) || SCARRY8((long)dVar14,1)) {
              auVar15 = FUN_013c0b40();
              dVar14 = dVar9;
            }
            uVar6 = SUB81(dVar14,0);
            goto LAB_01353588;
          }
          param_1 = thunk_FUN_01349c30();
        }
        uVar6 = (undefined1)((int)param_1 >> 1);
LAB_01353588:
        lVar4 = auVar15._8_8_;
        if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar4 + 0xb) + 0x1b) >> 2 & 1) == 0) &&
           (uVar10 < *(ulong *)(lVar4 + 0x1f))) {
          *(undefined1 *)(*(long *)(lVar4 + 0x27) + (ulong)*(uint *)(lVar4 + 0x2f) + uVar10) = uVar6
          ;
          return auVar15._0_8_;
        }
      }
    }
    else if (bVar2 == 0x13) {
      if ((param_3 & 1) == 0) {
        uVar10 = (long)(param_3 << 0x20) >> 0x21;
      }
      else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
               (uVar10 = (ulong)*(double *)(param_3 + 3),
               *(double *)(param_3 + 3) != (double)(long)uVar10)) ||
              (0x3ffffffffffffe < uVar10 + 0x1fffffffffffff)) goto LAB_01353f70;
      while ((param_1 & 1) != 0) {
        lVar4 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
        if (((int)lVar4 == (int)*(undefined8 *)(unaff_x26 + 0x140)) ||
           (*(short *)(lVar4 + 7) == 0x43)) {
          dVar9 = *(double *)(param_1 + 3);
          dVar14 = (double)(long)dVar9;
          if (SBORROW8((long)dVar14,1) || SCARRY8((long)dVar14,1)) {
            auVar15 = FUN_013c0b40();
            dVar14 = dVar9;
          }
          uVar7 = SUB82(dVar14,0);
          goto LAB_01353694;
        }
        param_1 = thunk_FUN_01349c30();
      }
      uVar7 = (undefined2)((int)param_1 >> 1);
LAB_01353694:
      lVar4 = auVar15._8_8_;
      if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar4 + 0xb) + 0x1b) >> 2 & 1) == 0) &&
         (uVar10 < *(ulong *)(lVar4 + 0x1f))) {
        *(undefined2 *)(*(long *)(lVar4 + 0x27) + (ulong)*(uint *)(lVar4 + 0x2f) + uVar10 * 2) =
             uVar7;
        return auVar15._0_8_;
      }
    }
    else if (bVar2 == 0x14) {
      if ((param_3 & 1) == 0) {
        uVar10 = (long)(param_3 << 0x20) >> 0x21;
      }
      else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
               (uVar10 = (ulong)*(double *)(param_3 + 3),
               *(double *)(param_3 + 3) != (double)(long)uVar10)) ||
              (0x3ffffffffffffe < uVar10 + 0x1fffffffffffff)) goto LAB_01353f70;
      while ((param_1 & 1) != 0) {
        lVar4 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
        if (((int)lVar4 == (int)*(undefined8 *)(unaff_x26 + 0x140)) ||
           (*(short *)(lVar4 + 7) == 0x43)) {
          dVar9 = *(double *)(param_1 + 3);
          dVar14 = (double)(long)dVar9;
          if (SBORROW8((long)dVar14,1) || SCARRY8((long)dVar14,1)) {
            auVar15 = FUN_013c0b40();
            dVar14 = dVar9;
          }
          uVar7 = SUB82(dVar14,0);
          goto LAB_013537a0;
        }
        param_1 = thunk_FUN_01349c30();
      }
      uVar7 = (undefined2)((int)param_1 >> 1);
LAB_013537a0:
      lVar4 = auVar15._8_8_;
      if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar4 + 0xb) + 0x1b) >> 2 & 1) == 0) &&
         (uVar10 < *(ulong *)(lVar4 + 0x1f))) {
        *(undefined2 *)(*(long *)(lVar4 + 0x27) + (ulong)*(uint *)(lVar4 + 0x2f) + uVar10 * 2) =
             uVar7;
        return auVar15._0_8_;
      }
    }
    else {
      if (bVar2 != 0x15) goto LAB_01353fc4;
      if ((param_3 & 1) == 0) {
        uVar10 = (long)(param_3 << 0x20) >> 0x21;
      }
      else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
               (uVar10 = (ulong)*(double *)(param_3 + 3),
               *(double *)(param_3 + 3) != (double)(long)uVar10)) ||
              (0x3ffffffffffffe < uVar10 + 0x1fffffffffffff)) goto LAB_01353f70;
      while ((param_1 & 1) != 0) {
        lVar4 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
        if (((int)lVar4 == (int)*(undefined8 *)(unaff_x26 + 0x140)) ||
           (*(short *)(lVar4 + 7) == 0x43)) {
          dVar9 = *(double *)(param_1 + 3);
          dVar14 = (double)(long)dVar9;
          if (SBORROW8((long)dVar14,1) || SCARRY8((long)dVar14,1)) {
            auVar15 = FUN_013c0b40();
            dVar14 = dVar9;
          }
          uVar5 = (ulong)dVar14 & 0xffffffff;
          goto LAB_013538ac;
        }
        param_1 = thunk_FUN_01349c30();
      }
      uVar5 = (ulong)(uint)((int)param_1 >> 1);
LAB_013538ac:
      lVar4 = auVar15._8_8_;
      if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar4 + 0xb) + 0x1b) >> 2 & 1) == 0) &&
         (uVar10 < *(ulong *)(lVar4 + 0x1f))) {
        *(uint *)(*(long *)(lVar4 + 0x27) + (ulong)*(uint *)(lVar4 + 0x2f) + uVar10 * 4) =
             (uint)uVar5;
        return auVar15._0_8_;
      }
      if (0x3fffffff < (uint)uVar5) {
        uVar12 = **(ulong **)(unaff_x26 + 0x1428);
        uVar10 = uVar12 + 0xc;
        if (uVar10 < **(ulong **)(unaff_x26 + 0x1430)) {
          lVar4 = uVar12 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar10;
        }
        else {
          lVar4 = FUN_01348560(auVar15._0_8_,0xc);
        }
        *(int *)(lVar4 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(double *)(lVar4 + 3) = (double)uVar5;
      }
    }
  }
  else if (bVar2 < 0x19) {
    if (bVar2 == 0x16) {
      if ((param_3 & 1) == 0) {
        uVar10 = (long)(param_3 << 0x20) >> 0x21;
      }
      else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
               (uVar10 = (ulong)*(double *)(param_3 + 3),
               *(double *)(param_3 + 3) != (double)(long)uVar10)) ||
              (0x3ffffffffffffe < uVar10 + 0x1fffffffffffff)) goto LAB_01353f70;
      while ((param_1 & 1) != 0) {
        lVar4 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
        if (((int)lVar4 == (int)*(undefined8 *)(unaff_x26 + 0x140)) ||
           (*(short *)(lVar4 + 7) == 0x43)) {
          dVar9 = *(double *)(param_1 + 3);
          dVar14 = (double)(long)dVar9;
          if (SBORROW8((long)dVar14,1) || SCARRY8((long)dVar14,1)) {
            auVar15 = FUN_013c0b40();
            dVar14 = dVar9;
          }
          iVar11 = SUB84(dVar14,0);
          goto LAB_013539b8;
        }
        param_1 = thunk_FUN_01349c30();
      }
      iVar11 = (int)param_1 >> 1;
LAB_013539b8:
      lVar4 = auVar15._8_8_;
      if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar4 + 0xb) + 0x1b) >> 2 & 1) == 0) &&
         (uVar10 < *(ulong *)(lVar4 + 0x1f))) {
        *(int *)(*(long *)(lVar4 + 0x27) + (ulong)*(uint *)(lVar4 + 0x2f) + uVar10 * 4) = iVar11;
        return auVar15._0_8_;
      }
      if (SCARRY4(iVar11,iVar11)) {
        uVar5 = **(ulong **)(unaff_x26 + 0x1428);
        uVar10 = uVar5 + 0xc;
        if (uVar10 < **(ulong **)(unaff_x26 + 0x1430)) {
          lVar4 = uVar5 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar10;
        }
        else {
          lVar4 = FUN_01348560(auVar15._0_8_,0xc);
        }
        *(int *)(lVar4 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(double *)(lVar4 + 3) = (double)iVar11;
      }
    }
    else if (bVar2 == 0x17) {
      uVar10 = param_1;
      if ((param_3 & 1) == 0) {
        uVar5 = (long)(param_3 << 0x20) >> 0x21;
      }
      else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
               (uVar5 = (ulong)*(double *)(param_3 + 3),
               *(double *)(param_3 + 3) != (double)(long)uVar5)) ||
              (0x3ffffffffffffe < uVar5 + 0x1fffffffffffff)) goto LAB_01353f70;
      while ((uVar10 & 1) != 0) {
        lVar4 = unaff_x26 + (ulong)*(uint *)(uVar10 - 1);
        if (((int)lVar4 == (int)*(undefined8 *)(unaff_x26 + 0x140)) ||
           (*(short *)(lVar4 + 7) == 0x43)) {
          fVar13 = (float)*(double *)(uVar10 + 3);
          goto LAB_01353aa4;
        }
        uVar10 = thunk_FUN_01349c30();
      }
      fVar13 = (float)((int)uVar10 >> 1);
LAB_01353aa4:
      if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) >> 2 & 1) == 0) &&
         (uVar5 < *(ulong *)(param_2 + 0x1f))) {
        *(float *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + uVar5 * 4) =
             fVar13;
        return param_1;
      }
      if (((param_1 & 1) != 0) &&
         (iVar11 = (int)*(undefined8 *)(unaff_x26 + 0x140), *(int *)(param_1 - 1) != iVar11)) {
        uVar5 = **(ulong **)(unaff_x26 + 0x1428);
        uVar10 = uVar5 + 0xc;
        if (uVar10 < **(ulong **)(unaff_x26 + 0x1430)) {
          lVar4 = uVar5 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar10;
        }
        else {
          lVar4 = FUN_01348560(param_1,0xc);
          iVar11 = (int)*(undefined8 *)(unaff_x26 + 0x140);
        }
        *(int *)(lVar4 + -1) = iVar11;
        *(double *)(lVar4 + 3) = (double)fVar13;
      }
    }
    else {
      if (bVar2 != 0x18) goto LAB_01353fc4;
      uVar10 = param_1;
      if ((param_3 & 1) == 0) {
        uVar5 = (long)(param_3 << 0x20) >> 0x21;
      }
      else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
               (uVar5 = (ulong)*(double *)(param_3 + 3),
               *(double *)(param_3 + 3) != (double)(long)uVar5)) ||
              (0x3ffffffffffffe < uVar5 + 0x1fffffffffffff)) goto LAB_01353f70;
      while ((uVar10 & 1) != 0) {
        lVar4 = unaff_x26 + (ulong)*(uint *)(uVar10 - 1);
        if (((int)lVar4 == (int)*(undefined8 *)(unaff_x26 + 0x140)) ||
           (*(short *)(lVar4 + 7) == 0x43)) {
          dVar14 = *(double *)(uVar10 + 3);
          goto LAB_01353b8c;
        }
        uVar10 = thunk_FUN_01349c30();
      }
      dVar14 = (double)((int)uVar10 >> 1);
LAB_01353b8c:
      if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) >> 2 & 1) == 0) &&
         (uVar5 < *(ulong *)(param_2 + 0x1f))) {
        *(double *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + uVar5 * 8) =
             dVar14;
        return param_1;
      }
      if (((param_1 & 1) != 0) &&
         (iVar11 = (int)*(undefined8 *)(unaff_x26 + 0x140), *(int *)(param_1 - 1) != iVar11)) {
        uVar5 = **(ulong **)(unaff_x26 + 0x1428);
        uVar10 = uVar5 + 0xc;
        if (uVar10 < **(ulong **)(unaff_x26 + 0x1430)) {
          lVar4 = uVar5 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar10;
        }
        else {
          lVar4 = FUN_01348560(param_1,0xc);
          iVar11 = (int)*(undefined8 *)(unaff_x26 + 0x140);
        }
        *(int *)(lVar4 + -1) = iVar11;
        *(double *)(lVar4 + 3) = dVar14;
      }
    }
  }
  else if (bVar2 == 0x19) {
    if ((param_3 & 1) == 0) {
      uVar10 = (long)(param_3 << 0x20) >> 0x21;
    }
    else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
             (uVar10 = (ulong)*(double *)(param_3 + 3),
             *(double *)(param_3 + 3) != (double)(long)uVar10)) ||
            (0x3ffffffffffffe < uVar10 + 0x1fffffffffffff)) goto LAB_01353f70;
    while ((param_1 & 1) != 0) {
      lVar4 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
      if (((int)lVar4 == (int)*(undefined8 *)(unaff_x26 + 0x140)) || (*(short *)(lVar4 + 7) == 0x43)
         ) {
        dVar14 = *(double *)(param_1 + 3);
        if (dVar14 <= 0.0) {
          uVar6 = 0;
        }
        else if (255.0 <= dVar14) {
          uVar6 = 0xff;
        }
        else {
          dVar9 = (double)(long)(double)(long)dVar14;
          if (SBORROW8((long)dVar9,1) || SCARRY8((long)dVar9,1)) {
            auVar15 = FUN_013c0b40();
            dVar9 = (double)(long)dVar14;
          }
          uVar6 = SUB81(dVar9,0);
        }
        goto LAB_01353cec;
      }
      param_1 = thunk_FUN_01349c30();
    }
    uVar8 = (int)param_1 >> 1;
    if (0xff < uVar8) {
      if ((int)uVar8 < 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0xff;
      }
    }
    uVar6 = (undefined1)uVar8;
LAB_01353cec:
    lVar4 = auVar15._8_8_;
    if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar4 + 0xb) + 0x1b) >> 2 & 1) == 0) &&
       (uVar10 < *(ulong *)(lVar4 + 0x1f))) {
      *(undefined1 *)(*(long *)(lVar4 + 0x27) + (ulong)*(uint *)(lVar4 + 0x2f) + uVar10) = uVar6;
      return auVar15._0_8_;
    }
  }
  else if (bVar2 == 0x1a) {
    if ((param_3 & 1) == 0) {
      uVar10 = (long)(param_3 << 0x20) >> 0x21;
    }
    else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
             (uVar10 = (ulong)*(double *)(param_3 + 3),
             *(double *)(param_3 + 3) != (double)(long)uVar10)) ||
            (0x3ffffffffffffe < uVar10 + 0x1fffffffffffff)) goto LAB_01353f70;
    if ((param_1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
    }
    if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) != 0x41) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(param_1,1,*(undefined8 *)(unaff_x26 + 0x1c40));
    }
    if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) >> 2 & 1) == 0) &&
       (uVar10 < *(ulong *)(param_2 + 0x1f))) {
      if ((*(uint *)(param_1 + 3) >> 1 & 0x3fffffff) == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(param_1 + 7);
        if ((*(uint *)(param_1 + 3) & 1) != 0) {
          lVar4 = -lVar4;
        }
      }
      *(long *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + uVar10 * 8) = lVar4;
      return param_1;
    }
  }
  else {
    if (bVar2 != 0x1b) goto LAB_01353fc4;
    if ((param_3 & 1) == 0) {
      uVar10 = (long)(param_3 << 0x20) >> 0x21;
    }
    else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
             (uVar10 = (ulong)*(double *)(param_3 + 3),
             *(double *)(param_3 + 3) != (double)(long)uVar10)) ||
            (0x3ffffffffffffe < uVar10 + 0x1fffffffffffff)) goto LAB_01353f70;
    if ((param_1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
    }
    if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) != 0x41) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(param_1,1,*(undefined8 *)(unaff_x26 + 0x1c40));
    }
    if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) >> 2 & 1) == 0) &&
       (uVar10 < *(ulong *)(param_2 + 0x1f))) {
      if ((*(uint *)(param_1 + 3) >> 1 & 0x3fffffff) == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(param_1 + 7);
        if ((*(uint *)(param_1 + 3) & 1) != 0) {
          lVar4 = -lVar4;
        }
      }
      *(long *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + uVar10 * 8) = lVar4;
      return param_1;
    }
  }
LAB_01353f70:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1ee0));
}

