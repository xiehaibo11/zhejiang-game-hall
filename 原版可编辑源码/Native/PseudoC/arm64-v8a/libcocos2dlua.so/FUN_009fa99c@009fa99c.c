
void FUN_009fa99c(undefined8 param_1,long *param_2,int param_3,undefined4 param_4,long *param_5)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  void *__src;
  byte *pbVar6;
  undefined8 uVar7;
  ulong uVar8;
  double *pdVar9;
  float *pfVar10;
  void *__dest;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  double dVar18;
  undefined1 auVar19 [16];
  uint local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_5c = 0;
  pcVar12 = "group";
  switch(param_4) {
  case 1:
    dVar18 = (double)lua_tonumber(param_1,param_3);
    if (dVar18 != 0.0) {
      local_5c = 1;
LAB_009fae50:
      pdVar9 = (double *)FUN_009f9d60(param_2,8);
      if (pdVar9 == (double *)0x0) goto LAB_009faed8;
      *pdVar9 = dVar18;
      *param_2 = *param_2 + 8;
      lVar13 = 8;
      goto joined_r0x009faed0;
    }
    iVar3 = lua_type(param_1,param_3);
    local_5c = (uint)(iVar3 == 3);
    if (iVar3 == 3) goto LAB_009fae50;
    goto LAB_009faee4;
  case 2:
    dVar18 = (double)lua_tonumber(param_1,param_3);
    if (dVar18 == 0.0) {
      iVar3 = lua_type(param_1,param_3);
      local_5c = (uint)(iVar3 == 3);
      if (iVar3 != 3) goto LAB_009faee4;
    }
    else {
      local_5c = 1;
    }
    pfVar10 = (float *)FUN_009f9d60(param_2,4);
    if (pfVar10 == (float *)0x0) {
LAB_009faed8:
      lVar13 = 0;
    }
    else {
      *pfVar10 = (float)dVar18;
      *param_2 = *param_2 + 4;
      lVar13 = 4;
    }
joined_r0x009faed0:
    if (dVar18 == 0.0) goto joined_r0x009fafe0;
    goto LAB_009faee4;
  case 3:
  case 4:
    uVar11 = FUN_009f9b80(param_1,param_3,&local_5c);
    if ((local_5c != 0) && (lVar13 = FUN_009f9d60(param_2,10), uVar8 = uVar11, lVar13 != 0))
    goto LAB_009fae04;
LAB_009fae1c:
    lVar13 = 0;
    break;
  case 5:
    uVar8 = FUN_009f9b80(param_1,param_3,&local_5c);
    uVar11 = uVar8;
    if ((local_5c == 0) || (lVar13 = FUN_009f9d60(param_2,10), lVar13 == 0)) goto LAB_009fae1c;
    uVar11 = (ulong)(int)uVar8;
    goto LAB_009fae04;
  case 6:
  case 0x10:
    uVar11 = FUN_009f9b80(param_1,param_3,&local_5c);
    if ((local_5c == 0) || (puVar5 = (ulong *)FUN_009f9d60(param_2,8), puVar5 == (ulong *)0x0))
    goto LAB_009fae1c;
    *puVar5 = uVar11;
    *param_2 = *param_2 + 8;
    lVar13 = 8;
    break;
  case 7:
  case 0xf:
    uVar11 = FUN_009f9b80(param_1,param_3,&local_5c);
    if ((local_5c == 0) ||
       (puVar4 = (undefined1 *)FUN_009f9d60(param_2,4), puVar4 == (undefined1 *)0x0))
    goto LAB_009fae1c;
    *puVar4 = (char)uVar11;
    puVar4[1] = (char)(uVar11 >> 8);
    puVar4[2] = (char)(uVar11 >> 0x10);
    puVar4[3] = (char)(uVar11 >> 0x18);
    *param_2 = *param_2 + 4;
    lVar13 = 4;
    break;
  case 8:
    uVar11 = lua_toboolean(param_1,param_3);
    uVar17 = (uint)uVar11;
    local_5c = uVar17;
    pbVar6 = (byte *)FUN_009f9d60(param_2,5);
    if (pbVar6 == (byte *)0x0) {
      lVar13 = 0;
    }
    else {
      uVar8 = (uVar11 & 0xffffffff) >> 7;
      if (uVar8 == 0) {
        bVar14 = (byte)uVar11 & 0x7f;
        lVar13 = 1;
      }
      else {
        *pbVar6 = (byte)uVar11 | 0x80;
        if (uVar17 >> 0xe == 0) {
          bVar14 = (byte)(uVar17 >> 7) & 0x7f;
          lVar13 = 2;
          pbVar6 = pbVar6 + 1;
        }
        else {
          pbVar6[1] = (byte)uVar8 | 0x80;
          if (uVar17 >> 0x15 == 0) {
            bVar14 = (byte)(uVar17 >> 0xe) & 0x7f;
            lVar13 = 3;
            pbVar6 = pbVar6 + 2;
          }
          else {
            bVar14 = (byte)(uVar11 >> 0x18) >> 4;
            pbVar6[2] = (byte)(uVar17 >> 0xe) | 0x80;
            if (uVar17 >> 0x1c == 0) {
              bVar14 = (byte)(uVar17 >> 0x15) & 0x7f;
              lVar13 = 4;
              pbVar6 = pbVar6 + 3;
            }
            else {
              pbVar6[3] = (byte)(uVar17 >> 0x15) | 0x80;
              lVar13 = 5;
              pbVar6 = pbVar6 + 4;
            }
          }
        }
      }
      *pbVar6 = bVar14;
      *param_2 = *param_2 + lVar13;
      uVar17 = local_5c;
    }
    if (uVar17 != 0) {
      lVar13 = 0;
    }
    local_5c = 1;
    goto joined_r0x009fafe0;
  case 9:
  case 0xc:
    auVar19 = FUN_009f9e20(param_1,param_3);
    __src = auVar19._0_8_;
    local_5c = (uint)(__src != (void *)0x0);
    if (__src == (void *)0x0) {
LAB_009fab74:
      lVar13 = 0;
    }
    else {
      uVar11 = (long)auVar19._8_8_ - (long)__src;
      lVar13 = FUN_009f9d60(param_2,uVar11 + 5);
      if (lVar13 == 0) goto LAB_009fab74;
      pbVar6 = (byte *)FUN_009f9d60(param_2,5);
      if (pbVar6 == (byte *)0x0) {
        lVar13 = 0;
      }
      else {
        uVar17 = (uint)uVar11;
        if ((uVar11 >> 7 & 0x1ffffff) == 0) {
          bVar14 = (byte)uVar11 & 0x7f;
          lVar13 = 1;
        }
        else {
          *pbVar6 = (byte)uVar11 | 0x80;
          if (uVar17 >> 0xe == 0) {
            bVar14 = (byte)(uVar17 >> 7) & 0x7f;
            lVar13 = 2;
            pbVar6 = pbVar6 + 1;
          }
          else {
            pbVar6[1] = (byte)(uVar11 >> 7) | 0x80;
            if (uVar17 >> 0x15 == 0) {
              bVar14 = (byte)(uVar17 >> 0xe) & 0x7f;
              lVar13 = 3;
              pbVar6 = pbVar6 + 2;
            }
            else {
              bVar14 = (byte)(uVar11 >> 0x18) >> 4;
              pbVar6[2] = (byte)(uVar17 >> 0xe) | 0x80;
              if (uVar17 >> 0x1c == 0) {
                bVar14 = (byte)(uVar17 >> 0x15) & 0x7f;
                lVar13 = 4;
                pbVar6 = pbVar6 + 3;
              }
              else {
                pbVar6[3] = (byte)(uVar17 >> 0x15) | 0x80;
                lVar13 = 5;
                pbVar6 = pbVar6 + 4;
              }
            }
          }
        }
        *pbVar6 = bVar14;
        *param_2 = *param_2 + lVar13;
      }
      __dest = (void *)FUN_009f9d60(param_2,uVar11);
      if (__dest == (void *)0x0) {
        uVar11 = 0;
      }
      else {
        memcpy(__dest,__src,uVar11);
        *param_2 = *param_2 + uVar11;
      }
      lVar13 = uVar11 + lVar13;
    }
    if (auVar19._8_8_ != __src) {
      lVar13 = 0;
    }
    uVar16 = 4;
    uVar15 = 4;
    goto joined_r0x009fafe0;
  case 10:
    goto switchD_009faa04_caseD_a;
  case 0xb:
    pcVar12 = "message";
    goto switchD_009faa04_caseD_a;
  case 0xd:
    uVar11 = FUN_009f9b80(param_1,param_3,&local_5c);
    if ((local_5c != 0) && (pbVar6 = (byte *)FUN_009f9d60(param_2,5), pbVar6 != (byte *)0x0)) {
      uVar17 = (uint)uVar11;
      if ((uVar11 >> 7 & 0x1ffffff) == 0) {
        bVar14 = (byte)uVar11 & 0x7f;
        lVar13 = 1;
      }
      else {
        *pbVar6 = (byte)uVar11 | 0x80;
        if (uVar17 >> 0xe == 0) {
          bVar14 = (byte)(uVar17 >> 7);
LAB_009faf60:
          bVar14 = bVar14 & 0x7f;
          pbVar6 = pbVar6 + 1;
          lVar13 = 2;
        }
        else {
          pbVar6[1] = (byte)(uVar11 >> 7) | 0x80;
          if (uVar17 >> 0x15 == 0) {
            pbVar6 = pbVar6 + 2;
            bVar14 = (byte)(uVar17 >> 0xe) & 0x7f;
            lVar13 = 3;
          }
          else {
            bVar14 = (byte)(uVar11 >> 0x18);
            pbVar6[2] = (byte)(uVar17 >> 0xe) | 0x80;
            if (uVar17 >> 0x1c != 0) {
              bVar2 = (byte)(uVar17 >> 0x15);
              goto LAB_009facb4;
            }
            bVar14 = (byte)(uVar17 >> 0x15);
LAB_009fb060:
            pbVar6 = pbVar6 + 3;
            bVar14 = bVar14 & 0x7f;
            lVar13 = 4;
          }
        }
      }
      goto LAB_009fb064;
    }
LAB_009facc4:
    lVar13 = 0;
    goto LAB_009fb074;
  case 0xe:
    pcVar12 = "enum";
    goto switchD_009faa04_caseD_a;
  case 0x11:
    uVar11 = FUN_009f9b80(param_1,param_3,&local_5c);
    if ((local_5c == 0) || (pbVar6 = (byte *)FUN_009f9d60(param_2,5), pbVar6 == (byte *)0x0))
    goto LAB_009facc4;
    uVar17 = (int)uVar11 << 1 ^ (int)uVar11 >> 0x1f;
    if (uVar17 >> 7 == 0) {
      bVar14 = (byte)uVar17 & 0x7f;
      lVar13 = 1;
    }
    else {
      *pbVar6 = (byte)uVar17 | 0x80;
      if (uVar17 >> 0xe == 0) {
        bVar14 = (byte)(uVar17 >> 7);
        goto LAB_009faf60;
      }
      pbVar6[1] = (byte)(uVar17 >> 7) | 0x80;
      if (uVar17 >> 0x15 == 0) {
        pbVar6 = pbVar6 + 2;
        bVar14 = (byte)(uVar17 >> 0xe) & 0x7f;
        lVar13 = 3;
      }
      else {
        bVar14 = (byte)(uVar17 >> 0x18);
        pbVar6[2] = (byte)(uVar17 >> 0xe) | 0x80;
        if (uVar17 >> 0x1c == 0) {
          bVar14 = (byte)(uVar17 >> 0x15);
          goto LAB_009fb060;
        }
        bVar2 = (byte)(uVar17 >> 0x15);
LAB_009facb4:
        bVar14 = bVar14 >> 4;
        pbVar6[3] = bVar2 | 0x80;
        pbVar6 = pbVar6 + 4;
        lVar13 = 5;
      }
    }
LAB_009fb064:
    *pbVar6 = bVar14;
    *param_2 = *param_2 + lVar13;
LAB_009fb074:
    if (uVar11 != 0) {
      lVar13 = 0;
    }
joined_r0x009fafe0:
    uVar16 = 3;
    uVar15 = 3;
    goto joined_r0x009fafe0;
  case 0x12:
    uVar8 = FUN_009f9b80(param_1,param_3,&local_5c);
    uVar11 = uVar8;
    if ((local_5c == 0) || (lVar13 = FUN_009f9d60(param_2,10), lVar13 == 0)) goto LAB_009fae1c;
    uVar11 = uVar8 << 1 ^ (long)uVar8 >> 0x3f;
LAB_009fae04:
    iVar3 = FUN_009fb0c8(lVar13,uVar11);
    lVar13 = (long)iVar3;
    *param_2 = *param_2 + lVar13;
    uVar11 = uVar8;
    break;
  default:
    pcVar12 = "<unknown>";
switchD_009faa04_caseD_a:
    lua_pushfstring(param_1,"unknown type %s",pcVar12);
    if (0 < param_3) {
      uVar7 = lua_tolstring(param_1,0xffffffff,0);
      FUN_009fa638(param_1,0,param_3,uVar7);
    }
    lua_error(param_1);
LAB_009faee4:
    lVar13 = 0;
    uVar16 = 3;
    uVar15 = 3;
joined_r0x009fafe0:
    if (param_5 == (long *)0x0) goto LAB_009fb088;
    goto LAB_009fb084;
  }
  if (uVar11 != 0) {
    lVar13 = 0;
  }
  uVar15 = 3;
  uVar16 = 3;
  if (param_5 != (long *)0x0) {
LAB_009fb084:
    uVar15 = uVar16;
    *param_5 = lVar13;
  }
LAB_009fb088:
  if (local_5c != 0) {
    uVar15 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar15);
}

