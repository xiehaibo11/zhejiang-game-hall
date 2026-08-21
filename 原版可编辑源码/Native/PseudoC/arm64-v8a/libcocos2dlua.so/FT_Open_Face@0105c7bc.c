
/* WARNING: Type propagation algorithm not settling */

uint FT_Open_Face(long *param_1,uint *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  code *pcVar12;
  short sVar13;
  long lVar14;
  short *psVar15;
  size_t __n;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long local_70;
  undefined8 *local_68;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105c794 with catch @ 0105c7bc
                        */
                    /* try { // try from 0105c7d0 to 0115c92b has its CatchHandler @ 0105c7d0
                       catch() { ... } // from try @ 0105c7d0 with catch @ 0105c7d0
                       catch() { ... } // from try @ 0105c948 with catch @ 0105c7d0 */
  local_70 = 0;
  if (param_2 == (uint *)0x0) {
    return 6;
  }
  if (-1 < param_3 && param_4 == (long *)0x0) {
    return 6;
  }
  if (((byte)*param_2 >> 1 & 1) == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(long *)(param_2 + 8) != 0;
  }
  if (param_1 == (long *)0x0) {
    return 0x21;
  }
  local_68 = (undefined8 *)0x0;
  lVar16 = *param_1;
  puVar7 = (undefined8 *)(**(code **)(lVar16 + 8))(lVar16,0x50);
  if (puVar7 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
    lVar16 = 0;
    uVar6 = 0x40;
    lVar8 = local_70;
  }
  else {
    memset(puVar7,0,0x50);
    puVar7[7] = lVar16;
    uVar6 = *param_2;
    if ((uVar6 & 1) == 0) {
      if ((uVar6 >> 2 & 1) != 0) {
        uVar6 = FT_Stream_Open(puVar7,*(undefined8 *)(param_2 + 6));
        puVar7[4] = *(undefined8 *)(param_2 + 6);
        if (uVar6 != 0) goto LAB_0105ca3c;
        goto LAB_0105c8dc;
      }
      if (((uVar6 >> 1 & 1) != 0) && (*(long *)(param_2 + 8) != 0)) {
        (**(code **)(lVar16 + 0x10))(lVar16,puVar7);
        puVar7 = *(undefined8 **)(param_2 + 8);
        goto LAB_0105c8dc;
      }
      uVar6 = 6;
LAB_0105ca3c:
      (**(code **)(lVar16 + 0x10))(lVar16,puVar7);
      lVar16 = 0;
      local_68 = (undefined8 *)0x0;
      puVar18 = (undefined8 *)0x0;
LAB_0105ca58:
      puVar7 = local_68;
      uVar5 = uVar6 & 0xff;
      puVar17 = puVar18;
                    /* catch() { ... } // from try @ 0105c92c with catch @ 0105ca6c */
      if (((uVar5 == 2) || (uVar5 == 0x51)) || (uVar5 == 0x55)) {
        uVar5 = FUN_01065fac(param_1,local_68,param_3,param_4);
        if ((uVar5 & 0xff) == 2) {
                    /* catch() { ... } // from try @ 0105cae4 with catch @ 0105caa4 */
          uVar5 = FUN_01066104(param_1,puVar7,0,param_3,param_4);
        }
        if ((((uVar5 & 0xff) == 0x55) || ((uVar5 & 0xff) == 2)) && (((byte)*param_2 >> 2 & 1) != 0))
        {
                    /* try { // try from 0105cadc to 0115cae3 has its CatchHandler @ 0105cb80 */
          uVar5 = FUN_01066954(param_1,puVar7,param_3,param_4,param_2);
        }
                    /* try { // try from 0105cae4 to 0115cb9b has its CatchHandler @ 0105caa4 */
        if (uVar5 == 0) {
          if (puVar7 != (undefined8 *)0x0) {
            lVar16 = puVar7[7];
            if ((code *)puVar7[6] != (code *)0x0) {
              (*(code *)puVar7[6])(puVar7);
            }
            if (bVar3 == false) {
              pcVar12 = *(code **)(lVar16 + 0x10);
LAB_0105cb6c:
              (*pcVar12)(lVar16,puVar7);
              return 0;
            }
          }
          return 0;
        }
        uVar6 = uVar5 & 0xff;
        if ((uVar5 & 0xff) != 2) {
          uVar6 = uVar5;
        }
      }
    }
    else {
      uVar19 = *(undefined8 *)(param_2 + 4);
      uVar11 = *(undefined8 *)(param_2 + 2);
      puVar7[2] = 0;
      puVar7[8] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[1] = uVar19;
      *puVar7 = uVar11;
LAB_0105c8dc:
      puVar7[7] = lVar16;
      lVar16 = *param_1;
      local_68 = puVar7;
      if (((*param_2 >> 3 & 1) == 0) ||
         (puVar17 = *(undefined8 **)(param_2 + 10), puVar17 == (undefined8 *)0x0)) {
        uVar5 = *(uint *)((long)param_1 + 0x14);
        if (uVar5 == 0) {
          uVar6 = 0xb;
          puVar18 = (undefined8 *)0x0;
        }
        else {
          puVar18 = (undefined8 *)0x0;
          plVar9 = param_1 + 3;
          uVar6 = 0xb;
                    /* try { // try from 0105c92c to 0115c947 has its CatchHandler @ 0105ca6c */
          do {
            puVar17 = (undefined8 *)*plVar9;
            if ((*(byte *)*puVar17 & 1) != 0) {
                    /* try { // try from 0105c948 to 0115caa3 has its CatchHandler @ 0105c7d0 */
              if (((byte)*param_2 >> 4 & 1) == 0) {
                uVar6 = 0;
                uVar11 = 0;
              }
              else {
                uVar6 = param_2[0xc];
                uVar11 = *(undefined8 *)(param_2 + 0xe);
              }
              uVar6 = FUN_0105cffc(puVar17,&local_68,bVar3,param_3,uVar6,uVar11,&local_70);
              if (uVar6 == 0) goto LAB_0105cbac;
              iVar4 = strcmp(*(char **)(*(long *)*plVar9 + 0x10),"truetype");
              puVar7 = local_68;
              puVar18 = puVar17;
              if (((uVar6 & 0xff) == 0x8e) && (iVar4 == 0)) {
                if (((code *)local_68[5] != (code *)0x0) &&
                   (lVar8 = (*(code *)local_68[5])(local_68,0,0,0), lVar8 != 0)) break;
                puVar7[2] = 0;
                uVar6 = FUN_0105d398(param_1,puVar7,param_3,param_4);
                if (uVar6 == 0) {
                  lVar16 = puVar7[7];
                  if ((code *)puVar7[6] != (code *)0x0) {
                    (*(code *)puVar7[6])(puVar7);
                  }
                  if (bVar3 != false) {
                    return 0;
                  }
                  pcVar12 = *(code **)(lVar16 + 0x10);
                  goto LAB_0105cb6c;
                }
              }
              if ((uVar6 & 0xff) != 2) break;
            }
            plVar9 = plVar9 + 1;
          } while (plVar9 < param_1 + (ulong)uVar5 + 3);
        }
        goto LAB_0105ca58;
      }
      if ((*(byte *)*puVar17 & 1) == 0) {
        uVar6 = 0x20;
      }
      else {
        if ((*param_2 >> 4 & 1) == 0) {
          uVar6 = 0;
          uVar11 = 0;
        }
        else {
          uVar6 = param_2[0xc];
          uVar11 = *(undefined8 *)(param_2 + 0xe);
        }
                    /* catch() { ... } // from try @ 0105cadc with catch @ 0105cb80 */
        uVar6 = FUN_0105cffc(puVar17,&local_68,bVar3,param_3,uVar6,uVar11,&local_70);
        puVar7 = local_68;
        if (uVar6 == 0) {
LAB_0105cbac:
          plVar9 = (long *)(**(code **)(lVar16 + 8))(lVar16,0x18);
          lVar8 = local_70;
          if (plVar9 == (long *)0x0) {
            uVar6 = 0x40;
            goto joined_r0x0105c8c0;
          }
          plVar9[2] = local_70;
          lVar16 = *(long *)(local_70 + 0xb0);
          lVar14 = *(long *)(lVar16 + 0x28);
          *plVar9 = lVar14;
          plVar9[1] = 0;
          plVar10 = (long *)(lVar14 + 8);
          if (lVar14 == 0) {
            plVar10 = (long *)(lVar16 + 0x20);
          }
          *plVar10 = (long)plVar9;
          *(long **)(lVar16 + 0x28) = plVar9;
          if (-1 < param_3) {
            uVar6 = FT_New_GlyphSlot(local_70,0);
            if (uVar6 == 0) {
              if (lVar8 == 0) {
                return 0x23;
              }
              if (*(long *)(lVar8 + 0xb0) == 0) {
                uVar6 = 0x22;
              }
              else {
                lVar14 = *(long *)(*(long *)(lVar8 + 0xb0) + 0x18);
                lVar16 = *(long *)(lVar8 + 0xb8);
                __n = *(size_t *)(lVar14 + 0x50);
                if ((long)__n < 1) {
                  if (__n == 0) {
                    plVar9 = (long *)0x0;
                    goto LAB_0105cd64;
                  }
                  uVar6 = 6;
                }
                else {
                  plVar9 = (long *)(**(code **)(lVar16 + 8))(lVar16,__n);
                  if (plVar9 == (long *)0x0) {
LAB_0105cdd8:
                    uVar6 = 0x40;
                  }
                  else {
                    memset(plVar9,0,__n);
LAB_0105cd64:
                    plVar10 = (long *)(**(code **)(lVar16 + 8))(lVar16,0x18);
                    if (plVar10 == (long *)0x0) {
                      if (plVar9 == (long *)0x0) goto LAB_0105cdd8;
                      uVar6 = 0x40;
                    }
                    else {
                      plVar10[1] = 0;
                      plVar10[2] = 0;
                      *plVar10 = 0;
                      *plVar9 = lVar8;
                      plVar9[10] = 0;
                      pcVar12 = *(code **)(lVar14 + 0x70);
                      if ((pcVar12 == (code *)0x0) || (uVar6 = (*pcVar12)(plVar9), uVar6 == 0)) {
                        plVar10[2] = (long)plVar9;
                        lVar16 = *(long *)(lVar8 + 0xd0);
                        *plVar10 = lVar16;
                        plVar10[1] = 0;
                        puVar7 = (undefined8 *)(lVar16 + 8);
                        if (lVar16 == 0) {
                          puVar7 = (undefined8 *)(lVar8 + 200);
                        }
                        *puVar7 = plVar10;
                        *(long **)(lVar8 + 0xd0) = plVar10;
                        *(long **)(lVar8 + 0xa0) = plVar9;
                        goto LAB_0105ce0c;
                      }
                    /* try { // try from 0105cdac to 0115cdcb has its CatchHandler @ 0105ceec */
                      (**(code **)(lVar16 + 0x10))(lVar16,plVar10);
                    }
                    /* try { // try from 0105cdcc to 0115cf23 has its CatchHandler @ 0105cc48 */
                    (**(code **)(lVar16 + 0x10))(lVar16,plVar9);
                  }
                }
              }
            }
            if (lVar8 == 0) {
              return uVar6;
            }
            puVar17 = *(undefined8 **)(lVar8 + 0xb0);
                    /* try { // try from 0105cc0c to 0115cc1b has its CatchHandler @ 0105cc34 */
            if (puVar17 == (undefined8 *)0x0) {
              return uVar6;
            }
            iVar4 = *(int *)(*(long *)(lVar8 + 0xf0) + 0x6c);
            iVar2 = iVar4 + -1;
            *(int *)(*(long *)(lVar8 + 0xf0) + 0x6c) = iVar2;
            if (iVar2 != 0 && 0 < iVar4) {
              return uVar6;
            }
            plVar9 = (long *)puVar17[4];
            if (plVar9 == (long *)0x0) {
              return uVar6;
            }
            lVar16 = puVar17[2];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105cc0c with catch @ 0105cc34
                        */
            while (plVar9[2] != lVar8) {
              plVar9 = (long *)plVar9[1];
              if (plVar9 == (long *)0x0) {
                return uVar6;
              }
            }
            lVar14 = *plVar9;
            plVar9 = (long *)plVar9[1];
            puVar7 = (undefined8 *)(lVar14 + 8);
            if (lVar14 == 0) {
              puVar7 = puVar17 + 4;
            }
            *puVar7 = plVar9;
            if (plVar9 == (long *)0x0) {
              plVar9 = puVar17 + 5;
            }
            *plVar9 = lVar14;
            (**(code **)(lVar16 + 0x10))(lVar16);
            goto LAB_0105cc60;
          }
LAB_0105ce0c:
          uVar6 = (uint)*(ulong *)(lVar8 + 0x10);
          if ((*(ulong *)(lVar8 + 0x10) & 1) != 0) {
            sVar13 = *(short *)(lVar8 + 0x8e);
            if (sVar13 < 0) {
              sVar13 = -sVar13;
              *(short *)(lVar8 + 0x8e) = sVar13;
            }
            if ((uVar6 >> 5 & 1) == 0) {
              *(short *)(lVar8 + 0x92) = sVar13;
            }
          }
          if ((uVar6 >> 1 & 1) == 0) goto LAB_0105cf08;
          iVar4 = *(int *)(lVar8 + 0x38);
          if (iVar4 < 1) goto LAB_0105cf08;
          psVar15 = *(short **)(lVar8 + 0x40);
          if (*psVar15 < 0) {
            *psVar15 = -*psVar15;
            lVar16 = *(long *)(psVar15 + 8);
            if (-1 < lVar16) goto LAB_0105ce54;
LAB_0105ce7c:
            *(long *)(psVar15 + 8) = (long)(short)-(short)lVar16;
            lVar16 = *(long *)(psVar15 + 0xc);
          }
          else {
            lVar16 = *(long *)(psVar15 + 8);
            if (lVar16 < 0) goto LAB_0105ce7c;
LAB_0105ce54:
            lVar16 = *(long *)(psVar15 + 0xc);
          }
          if (lVar16 < 0) {
            *(long *)(psVar15 + 0xc) = -lVar16;
          }
          if (1 < iVar4) {
            plVar9 = (long *)(psVar15 + 0x1c);
            lVar16 = 1;
            do {
              if ((short)plVar9[-3] < 0) {
                *(short *)(plVar9 + -3) = -(short)plVar9[-3];
                lVar14 = plVar9[-1];
                if (-1 < lVar14) goto LAB_0105cef0;
LAB_0105cec0:
                plVar9[-1] = (long)(short)-(short)lVar14;
                lVar14 = *plVar9;
              }
              else {
                lVar14 = plVar9[-1];
                    /* catch() { ... } // from try @ 0105cdac with catch @ 0105ceec */
                if (lVar14 < 0) goto LAB_0105cec0;
LAB_0105cef0:
                lVar14 = *plVar9;
              }
              if (lVar14 < 0) {
                *plVar9 = -lVar14;
              }
              lVar16 = lVar16 + 1;
              plVar9 = plVar9 + 4;
            } while (lVar16 < iVar4);
          }
LAB_0105cf08:
          puVar7 = *(undefined8 **)(lVar8 + 0xf0);
          *puVar7 = 0x10000;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0x10000;
          puVar7[4] = 0;
          puVar7[5] = 0;
          *(undefined4 *)((long)puVar7 + 0x6c) = 1;
                    /* catch() { ... } // from try @ 0105cf64 with catch @ 0105cf24 */
          if (param_4 != (long *)0x0) {
            *param_4 = lVar8;
            return 0;
          }
          if (lVar8 == 0) {
            return 0;
          }
          lVar16 = *(long *)(lVar8 + 0xb0);
          if (lVar16 == 0) {
            return 0;
          }
          *(undefined4 *)((long)puVar7 + 0x6c) = 0;
          plVar9 = *(long **)(lVar16 + 0x20);
          if (plVar9 == (long *)0x0) {
            return 0;
          }
          lVar14 = *(long *)(lVar16 + 0x10);
          do {
                    /* try { // try from 0105cf5c to 0115cf63 has its CatchHandler @ 0105d000 */
            if (plVar9[2] == lVar8) {
              lVar1 = *plVar9;
              plVar9 = (long *)plVar9[1];
              puVar7 = (undefined8 *)(lVar1 + 8);
              if (lVar1 == 0) {
                puVar7 = (undefined8 *)(lVar16 + 0x20);
              }
              *puVar7 = plVar9;
              if (plVar9 == (long *)0x0) {
                plVar9 = (long *)(lVar16 + 0x28);
              }
              *plVar9 = lVar1;
              (**(code **)(lVar14 + 0x10))(lVar14);
              FUN_0105db48(lVar14,lVar8,lVar16);
              return 0;
            }
            plVar9 = (long *)plVar9[1];
                    /* try { // try from 0105cf64 to 0115d01b has its CatchHandler @ 0105cf24 */
          } while (plVar9 != (long *)0x0);
          return 0;
        }
      }
    }
    lVar8 = local_70;
    if (puVar7 != (undefined8 *)0x0) {
      lVar14 = puVar7[7];
      if ((code *)puVar7[6] != (code *)0x0) {
        (*(code *)puVar7[6])(puVar7);
      }
      lVar8 = local_70;
      if (bVar3 == false) {
        (**(code **)(lVar14 + 0x10))(lVar14,puVar7);
        lVar8 = local_70;
      }
    }
  }
joined_r0x0105c8c0:
  local_70 = lVar8;
  if (lVar8 == 0) {
    return uVar6;
  }
LAB_0105cc60:
  FUN_0105db48(lVar16,lVar8,puVar17);
  return uVar6;
}

