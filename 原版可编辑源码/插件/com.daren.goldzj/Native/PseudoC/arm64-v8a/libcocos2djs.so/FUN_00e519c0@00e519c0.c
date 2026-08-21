
int FUN_00e519c0(long param_1,char *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong *puVar6;
  undefined8 uVar7;
  size_t sVar8;
  void *__dest;
  undefined4 uVar9;
  long lVar10;
  undefined **ppuVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  int local_68;
  int local_64;
  
  uVar17 = *(undefined8 *)(param_1 + 0xb8);
  local_68 = 0;
  plVar5 = (long *)FUN_00e14820(param_2,*(undefined8 *)(param_1 + 0xa8));
  if (plVar5 != (long *)0x0) {
    lVar10 = *(long *)(param_1 + 0x90);
    lVar13 = *plVar5;
    iVar4 = *(int *)(lVar10 + lVar13 * 0x18 + 8);
    if (iVar4 == 3) {
      if (param_3 != (byte *)0x0) {
        bVar1 = *param_3;
        if (((ulong)bVar1 != 0) &&
           ((1 << (ulong)(bVar1 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar1 >> 3]) != 0)) {
          uVar14 = 0;
          uVar15 = (ulong)bVar1;
          do {
            param_3 = param_3 + 1;
            if (0x1999999999999997 < uVar14) {
              uVar14 = 0xffffffffffffffff;
              break;
            }
            bVar1 = *param_3;
            uVar14 = (ulong)(byte)(&DAT_01977bbf)[uVar15] + uVar14 * 10;
            uVar15 = (ulong)bVar1;
          } while ((1 << (ulong)(bVar1 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar1 >> 3]) != 0);
          goto LAB_00e51f0c;
        }
      }
    }
    else {
      if (iVar4 != 2) {
        if (iVar4 != 1) {
          return local_68;
        }
        puVar16 = (undefined8 *)(lVar10 + lVar13 * 0x18 + 0x10);
        FUN_00e139fc(uVar17,*puVar16);
        *puVar16 = 0;
        if (param_3 == (byte *)0x0) {
          return local_68;
        }
        if (*param_3 == 0) {
          return local_68;
        }
        uVar17 = FUN_00e1eb6c(uVar17,param_3,&local_68);
        *puVar16 = uVar17;
        return local_68;
      }
      if (param_3 != (byte *)0x0) {
        bVar1 = *param_3;
        uVar14 = 0;
        if (bVar1 != 0) {
          bVar3 = bVar1 == 0x2d;
          if (bVar3) {
            param_3 = param_3 + 1;
            bVar1 = *param_3;
          }
          if ((1 << (ulong)(bVar1 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar1 >> 3]) == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = 0;
            do {
              param_3 = param_3 + 1;
              uVar14 = (ulong)bVar1;
              if (0xcccccccccccccca < (long)uVar15) {
                uVar15 = 0x7fffffffffffffff;
                break;
              }
              bVar1 = *param_3;
              uVar15 = (ulong)(byte)(&DAT_01977bbf)[uVar14] + uVar15 * 10;
            } while ((1 << (ulong)(bVar1 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar1 >> 3]) != 0);
          }
          uVar14 = -uVar15;
          if (!bVar3) {
            uVar14 = uVar15;
          }
        }
        goto LAB_00e51f0c;
      }
    }
    uVar14 = 0;
LAB_00e51f0c:
    *(ulong *)(lVar10 + lVar13 * 0x18 + 0x10) = uVar14;
    return local_68;
  }
  lVar10 = param_1 + 0xd0;
  puVar6 = (ulong *)FUN_00e14820(param_2,lVar10);
  if (puVar6 == (ulong *)0x0) {
    uVar7 = *(undefined8 *)(param_1 + 0xb8);
    local_64 = 0;
    lVar13 = FUN_00e14820(param_2,lVar10);
    if (lVar13 == 0) {
      lVar13 = FUN_00e13bcc(uVar7,0x18,*(long *)(param_1 + 200),*(long *)(param_1 + 200) + 1,
                            *(undefined8 *)(param_1 + 0xc0),&local_64);
      *(long *)(param_1 + 0xc0) = lVar13;
      if (local_64 != 0) {
        return local_64;
      }
      lVar19 = *(long *)(param_1 + 200);
      puVar16 = (undefined8 *)(lVar13 + lVar19 * 0x18);
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      sVar8 = strlen(param_2);
      __dest = (void *)FUN_00e13bcc(uVar7,1,0,sVar8 + 1,0,&local_64);
      *puVar16 = __dest;
      if (local_64 != 0) {
        return local_64;
      }
      memcpy(__dest,param_2,sVar8 + 1);
      *(undefined8 *)(lVar13 + lVar19 * 0x18 + 8) = 1;
      iVar4 = thunk_FUN_00e145f4(*puVar16,*(long *)(param_1 + 200) + 0x53,lVar10,uVar7);
      if (iVar4 != 0) {
        return iVar4;
      }
      *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
      local_64 = 0;
    }
    local_68 = 0;
    puVar6 = (ulong *)FUN_00e14820(param_2,lVar10);
    lVar10 = *(long *)(param_1 + 0x88);
    if (lVar10 == *(long *)(param_1 + 0x80)) goto LAB_00e51a94;
LAB_00e51c1c:
    uVar14 = *puVar6;
    iVar4 = local_68;
    if (uVar14 < 0x53) goto LAB_00e51c8c;
LAB_00e51c28:
    ppuVar11 = (undefined **)(*(long *)(param_1 + 0xc0) + uVar14 * 0x18 + -0x7c8);
  }
  else {
    lVar10 = *(long *)(param_1 + 0x88);
    if (lVar10 != *(long *)(param_1 + 0x80)) goto LAB_00e51c1c;
LAB_00e51a94:
    if (lVar10 == 0) {
      lVar10 = FUN_00e13bcc(uVar17,0x18,0,1,0,&local_68);
      *(long *)(param_1 + 0x90) = lVar10;
    }
    else {
      lVar10 = FUN_00e13bcc(uVar17,0x18,lVar10,lVar10 + 1,*(undefined8 *)(param_1 + 0x90),&local_68)
      ;
      *(long *)(param_1 + 0x90) = lVar10;
    }
    if (local_68 != 0) {
      return local_68;
    }
    puVar16 = (undefined8 *)(lVar10 + *(long *)(param_1 + 0x80) * 0x18);
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
    uVar14 = *puVar6;
    local_68 = 0;
    iVar4 = 0;
    if (0x52 < uVar14) goto LAB_00e51c28;
LAB_00e51c8c:
    local_68 = iVar4;
    ppuVar11 = &PTR_s_ADD_STYLE_NAME_01c958c0 + uVar14 * 3;
  }
  lVar10 = *(long *)(param_1 + 0x88);
  lVar13 = *(long *)(param_1 + 0x90);
  puVar16 = (undefined8 *)(lVar13 + lVar10 * 0x18);
  *puVar16 = *ppuVar11;
  puVar16[1] = ppuVar11[1];
  iVar4 = *(int *)(ppuVar11 + 1);
  if (iVar4 == 3) {
    if (param_3 != (byte *)0x0) {
      bVar1 = *param_3;
      if (((ulong)bVar1 != 0) &&
         ((1 << (ulong)(bVar1 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar1 >> 3]) != 0)) {
        uVar14 = 0;
        uVar15 = (ulong)bVar1;
        do {
          param_3 = param_3 + 1;
          if (0x1999999999999997 < uVar14) {
            uVar14 = 0xffffffffffffffff;
            break;
          }
          bVar1 = *param_3;
          uVar14 = (ulong)(byte)(&DAT_01977bbf)[uVar15] + uVar14 * 10;
          uVar15 = (ulong)bVar1;
        } while ((1 << (ulong)(bVar1 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar1 >> 3]) != 0);
        goto LAB_00e51f38;
      }
    }
LAB_00e51e28:
    uVar14 = 0;
  }
  else {
    if (iVar4 != 2) {
      if (iVar4 == 1) {
        puVar18 = (undefined8 *)(lVar13 + lVar10 * 0x18 + 0x10);
        *puVar18 = 0;
        if ((param_3 != (byte *)0x0) && (*param_3 != 0)) {
          uVar7 = FUN_00e1eb6c(uVar17,param_3,&local_68);
          *puVar18 = uVar7;
          if (local_68 != 0) {
            return local_68;
          }
        }
      }
      goto LAB_00e51f44;
    }
    if (param_3 == (byte *)0x0) goto LAB_00e51e28;
    bVar1 = *param_3;
    uVar14 = 0;
    if (bVar1 != 0) {
      bVar3 = bVar1 == 0x2d;
      if (bVar3) {
        param_3 = param_3 + 1;
        bVar1 = *param_3;
      }
      if ((1 << (ulong)(bVar1 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar1 >> 3]) == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        do {
          param_3 = param_3 + 1;
          uVar14 = (ulong)bVar1;
          if (0xcccccccccccccca < (long)uVar15) {
            uVar15 = 0x7fffffffffffffff;
            break;
          }
          bVar1 = *param_3;
          uVar15 = (ulong)(byte)(&DAT_01977bbf)[uVar14] + uVar15 * 10;
        } while ((1 << (ulong)(bVar1 & 7) & (uint)(byte)(&DAT_01977c3f)[bVar1 >> 3]) != 0);
      }
      uVar14 = -uVar15;
      if (!bVar3) {
        uVar14 = uVar15;
      }
    }
  }
LAB_00e51f38:
  *(ulong *)(lVar13 + lVar10 * 0x18 + 0x10) = uVar14;
LAB_00e51f44:
  iVar4 = strncmp(param_2,"COMMENT",7);
  if ((((iVar4 == 0) && ((byte)param_2[7] < 0x21)) &&
      ((1L << ((ulong)(byte)param_2[7] & 0x3f) & 0x100002601U) != 0)) ||
     (local_68 = thunk_FUN_00e145f4(*puVar16,*(undefined8 *)(param_1 + 0x88),
                                    *(undefined8 *)(param_1 + 0xa8),uVar17), local_68 == 0)) {
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
    iVar4 = strncmp(param_2,"DEFAULT_CHAR",0xc);
    if (((iVar4 == 0) && ((byte)param_2[0xc] < 0x21)) &&
       ((1L << ((ulong)(byte)param_2[0xc] & 0x3f) & 0x100002601U) != 0)) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar13 + lVar10 * 0x18 + 0x10);
    }
    else {
      iVar4 = strncmp(param_2,"FONT_ASCENT",0xb);
      if (((iVar4 == 0) && ((byte)param_2[0xb] < 0x21)) &&
         ((1L << ((ulong)(byte)param_2[0xb] & 0x3f) & 0x100002601U) != 0)) {
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar13 + lVar10 * 0x18 + 0x10);
      }
      else {
        iVar4 = strncmp(param_2,"FONT_DESCENT",0xc);
        if (((iVar4 == 0) && ((byte)param_2[0xc] < 0x21)) &&
           ((1L << ((ulong)(byte)param_2[0xc] & 0x3f) & 0x100002601U) != 0)) {
          *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar13 + lVar10 * 0x18 + 0x10);
        }
        else {
          iVar4 = strncmp(param_2,"SPACING",7);
          if (((iVar4 == 0) && ((byte)param_2[7] < 0x21)) &&
             ((1L << ((ulong)(byte)param_2[7] & 0x3f) & 0x100002601U) != 0)) {
            pbVar12 = *(byte **)(lVar13 + lVar10 * 0x18 + 0x10);
            if (pbVar12 == (byte *)0x0) {
              local_68 = 3;
            }
            else {
              uVar2 = *pbVar12 - 0x43;
              uVar14 = (ulong)uVar2;
              if (uVar2 < 0x2e) {
                if ((1L << (uVar14 & 0x3f) & 0x100000001U) == 0) {
                  if ((1L << (uVar14 & 0x3f) & 0x40000000400U) == 0) {
                    if ((1L << (uVar14 & 0x3f) & 0x200000002000U) == 0) {
                      return local_68;
                    }
                    uVar9 = 8;
                  }
                  else {
                    uVar9 = 0x10;
                  }
                }
                else {
                  uVar9 = 0x20;
                }
                *(undefined4 *)(param_1 + 0x30) = uVar9;
              }
            }
          }
        }
      }
    }
  }
  return local_68;
}

