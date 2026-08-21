
/* WARNING: Removing unreachable block (ram,0x009fb970) */
/* WARNING: Removing unreachable block (ram,0x009fb97c) */
/* WARNING: Removing unreachable block (ram,0x009fb980) */
/* WARNING: Removing unreachable block (ram,0x009fbebc) */
/* WARNING: Removing unreachable block (ram,0x009fbecc) */
/* WARNING: Removing unreachable block (ram,0x009fb990) */
/* WARNING: Removing unreachable block (ram,0x009fb99c) */
/* WARNING: Removing unreachable block (ram,0x009fb9b4) */
/* WARNING: Removing unreachable block (ram,0x009fb9d4) */

void FUN_009fb6ac(undefined8 param_1,long param_2,int param_3,ulong *param_4)

{
  double *pdVar1;
  float *pfVar2;
  long lVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  undefined2 *puVar7;
  char *pcVar8;
  float extraout_w8;
  float fVar9;
  double extraout_x8;
  double dVar10;
  double dVar11;
  ulong uVar12;
  ulong uVar13;
  double extraout_d0;
  double dVar14;
  double local_80;
  long lStack_78;
  undefined2 uStack_4b;
  undefined1 local_49;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pcVar8 = "group";
  switch(param_3) {
  case 1:
  case 6:
  case 0x10:
    pdVar1 = (double *)*param_4;
    if ((double *)param_4[1] < pdVar1 + 1) {
      dVar14 = (double)luaL_error(param_1,"invalid fixed64 value at offset %d",
                                  ((int)pdVar1 - (int)param_4[2]) + 1);
      dVar10 = extraout_x8;
    }
    else {
      dVar10 = *pdVar1;
      *param_4 = (ulong)(pdVar1 + 1);
      dVar14 = dVar10;
      local_80 = dVar10;
    }
    if (param_3 == 0x10) {
      if ((dVar10 != (double)(long)SUB84(dVar10,0)) &&
         (bVar4 = *(byte *)(param_2 + 0x484) >> 3 & 3, bVar4 != 0)) {
        dVar11 = (double)-(long)dVar10;
        if (-1 < (long)dVar10) {
          dVar11 = dVar10;
        }
        if (bVar4 == 2) {
                    /* catch() { ... } // from try @ 009fbd84 with catch @ 009fbe94 */
          puVar7 = &uStack_4b;
          do {
            uVar13 = (ulong)dVar11 & 0xf;
            dVar11 = (double)((ulong)dVar11 >> 4);
            *(char *)((long)puVar7 + 1) = "0123456789ABCDEF"[uVar13];
            puVar7 = (undefined2 *)((long)puVar7 + -1);
          } while (dVar11 != 0.0);
          goto LAB_009fbf50;
        }
        puVar7 = (undefined2 *)&local_49;
        if (bVar4 == 1) {
          local_49 = 0;
          do {
                    /* try { // try from 009fb934 to 00afba13 has its CatchHandler @ 009fb934
                       catch() { ... } // from try @ 009fb934 with catch @ 009fb934
                       catch() { ... } // from try @ 009fbb2c with catch @ 009fb934
                       catch() { ... } // from try @ 009fbb98 with catch @ 009fb934 */
            bVar5 = 9 < (ulong)dVar11;
            puVar7 = (undefined2 *)((long)puVar7 + -1);
            *(undefined *)puVar7 = (&DAT_012f5a37)[(ulong)dVar11 % 10];
            dVar11 = (double)((ulong)dVar11 / 10);
          } while (bVar5);
        }
        goto LAB_009fbf58;
      }
    }
    else {
      if (param_3 != 6) {
        if (param_3 != 1) goto switchD_009fb75c_caseD_6;
        goto LAB_009fbd6c;
      }
                    /* catch() { ... } // from try @ 009fbc88 with catch @ 009fbd04 */
      if ((dVar10 != (double)(long)SUB84(dVar10,0)) &&
         (bVar4 = *(byte *)(param_2 + 0x484) >> 3 & 3, bVar4 != 0)) {
        dVar11 = (double)-(long)dVar10;
        if (-1 < (long)dVar10) {
          dVar11 = dVar10;
        }
                    /* try { // try from 009fbd18 to 00afbd73 has its CatchHandler @ 009fbd18
                       catch() { ... } // from try @ 009fbd18 with catch @ 009fbd18
                       catch() { ... } // from try @ 009fbe74 with catch @ 009fbd18 */
        if (bVar4 == 2) {
          puVar7 = &uStack_4b;
          do {
            uVar13 = (ulong)dVar11 & 0xf;
            dVar11 = (double)((ulong)dVar11 >> 4);
            *(char *)((long)puVar7 + 1) = "0123456789ABCDEF"[uVar13];
            puVar7 = (undefined2 *)((long)puVar7 + -1);
          } while (dVar11 != 0.0);
          goto LAB_009fbf50;
        }
        puVar7 = (undefined2 *)&local_49;
        if (bVar4 == 1) {
          local_49 = 0;
          do {
            bVar5 = 9 < (ulong)dVar11;
            puVar7 = (undefined2 *)((long)puVar7 + -1);
            *(undefined *)puVar7 = (&DAT_012f5a37)[(ulong)dVar11 % 10];
            dVar11 = (double)((ulong)dVar11 / 10);
          } while (bVar5);
        }
        goto LAB_009fbf58;
      }
    }
    goto LAB_009fbd68;
  case 2:
  case 7:
  case 0xf:
    pfVar2 = (float *)*param_4;
    if ((float *)param_4[1] < pfVar2 + 1) {
      dVar14 = (double)luaL_error(param_1,&DAT_012f5c3a,((int)pfVar2 - (int)param_4[2]) + 1);
      fVar9 = extraout_w8;
    }
    else {
      fVar9 = *pfVar2;
      *param_4 = (ulong)(pfVar2 + 1);
      local_80 = (double)CONCAT44(local_80._4_4_,fVar9);
      dVar14 = (double)fVar9;
    }
    if (param_3 == 0xf) {
LAB_009fbc88:
                    /* try { // try from 009fbc88 to 00afbc93 has its CatchHandler @ 009fbd04 */
      dVar14 = (double)(int)fVar9;
    }
    else if (param_3 == 7) {
                    /* try { // try from 009fbc9c to 00afbcab has its CatchHandler @ 009fbcec */
      if (((int)fVar9 < 0) && (bVar4 = *(byte *)(param_2 + 0x484) >> 3 & 3, bVar4 != 0)) {
        uVar13 = (ulong)(uint)fVar9;
                    /* try { // try from 009fbcac to 00afbcb3 has its CatchHandler @ 009fbccc */
        if (bVar4 == 2) {
          puVar7 = &uStack_4b;
          do {
            uVar12 = uVar13 & 0xf;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fbed8 with catch @ 009fbf0c
                        */
            uVar13 = uVar13 >> 4;
            *(char *)((long)puVar7 + 1) = "0123456789ABCDEF"[uVar12];
            puVar7 = (undefined2 *)((long)puVar7 + -1);
          } while (uVar13 != 0);
          goto LAB_009fbf1c;
        }
                    /* try { // try from 009fbcb4 to 00afbd17 has its CatchHandler @ 009fbc58 */
        puVar7 = (undefined2 *)&local_49;
        if (bVar4 == 1) {
                    /* catch() { ... } // from try @ 009fbcac with catch @ 009fbccc */
          local_49 = 0;
          do {
            bVar5 = 9 < uVar13;
                    /* catch() { ... } // from try @ 009fbc9c with catch @ 009fbcec */
            puVar7 = (undefined2 *)((long)puVar7 + -1);
            *(undefined *)puVar7 = (&DAT_012f5a37)[uVar13 % 10];
            uVar13 = uVar13 / 10;
          } while (bVar5);
        }
        goto LAB_009fbf64;
      }
      dVar14 = (double)(uint)fVar9;
                    /* try { // try from 009fbd84 to 00afbe53 has its CatchHandler @ 009fbe94 */
    }
    else if (param_3 != 2) goto switchD_009fb75c_caseD_6;
    goto LAB_009fbd6c;
  case 3:
  case 4:
  case 5:
  case 8:
  case 0xd:
  case 0xe:
  case 0x11:
  case 0x12:
    lVar6 = FUN_009fb4dc(param_4,&local_80);
    dVar14 = extraout_d0;
    if (lVar6 == 0) {
      dVar14 = (double)luaL_error(param_1,"invalid varint value at offset %d",
                                  ((int)*param_4 - (int)param_4[2]) + 1);
    }
    break;
  case 9:
  case 0xb:
  case 0xc:
    FUN_009fbfa0(param_1,param_4,&local_80);
    lua_pushlstring(param_1,local_80,lStack_78 - (long)local_80);
    goto switchD_009fb75c_caseD_6;
  case 10:
    goto switchD_009fb708_caseD_a;
  default:
    pcVar8 = "<unknown>";
    goto switchD_009fb708_caseD_a;
  }
  dVar10 = local_80;
  switch(param_3) {
  case 3:
    if ((local_80 != (double)(long)(int)local_80._0_4_) &&
       (bVar4 = *(byte *)(param_2 + 0x484) >> 3 & 3, bVar4 != 0)) {
      dVar11 = (double)-(long)local_80;
      if (-1 < (long)local_80) {
        dVar11 = local_80;
      }
      if (bVar4 == 2) {
        puVar7 = &uStack_4b;
        do {
          uVar13 = (ulong)dVar11 & 0xf;
          dVar11 = (double)((ulong)dVar11 >> 4);
          *(char *)((long)puVar7 + 1) = "0123456789ABCDEF"[uVar13];
          puVar7 = (undefined2 *)((long)puVar7 + -1);
        } while (dVar11 != 0.0);
LAB_009fbf50:
        local_49 = 0;
        *puVar7 = 0x7830;
      }
      else {
        puVar7 = (undefined2 *)&local_49;
        if (bVar4 == 1) {
          local_49 = 0;
          do {
            bVar5 = 9 < (ulong)dVar11;
            puVar7 = (undefined2 *)((long)puVar7 + -1);
            *(undefined *)puVar7 = (&DAT_012f5a37)[(ulong)dVar11 % 10];
            dVar11 = (double)((ulong)dVar11 / 10);
          } while (bVar5);
        }
      }
LAB_009fbf58:
      if (-1 < (long)dVar10) goto LAB_009fbf64;
      goto LAB_009fbf5c;
    }
    break;
  case 4:
    if ((local_80 != (double)(long)(int)local_80._0_4_) &&
       (bVar4 = *(byte *)(param_2 + 0x484) >> 3 & 3, bVar4 != 0)) {
      dVar11 = (double)-(long)local_80;
      if (-1 < (long)local_80) {
        dVar11 = local_80;
      }
      if (bVar4 == 2) {
        puVar7 = &uStack_4b;
        do {
          uVar13 = (ulong)dVar11 & 0xf;
          dVar11 = (double)((ulong)dVar11 >> 4);
          *(char *)((long)puVar7 + 1) = "0123456789ABCDEF"[uVar13];
          puVar7 = (undefined2 *)((long)puVar7 + -1);
        } while (dVar11 != 0.0);
        goto LAB_009fbf50;
      }
      puVar7 = (undefined2 *)&local_49;
      if (bVar4 == 1) {
                    /* try { // try from 009fba14 to 00afba23 has its CatchHandler @ 009fbbbc */
        local_49 = 0;
        do {
          bVar5 = 9 < (ulong)dVar11;
          puVar7 = (undefined2 *)((long)puVar7 + -1);
          *(undefined *)puVar7 = (&DAT_012f5a37)[(ulong)dVar11 % 10];
          dVar11 = (double)((ulong)dVar11 / 10);
        } while (bVar5);
      }
      goto LAB_009fbf58;
    }
    break;
  case 5:
                    /* try { // try from 009fbadc to 00afbae7 has its CatchHandler @ 009fbb9c */
    bVar4 = *(byte *)(param_2 + 0x484) >> 3 & 3;
    uVar13 = (ulong)(int)local_80._0_4_;
    if ((bVar4 != 0) && (uVar13 + 0x80000000 >> 0x20 != 0)) {
      dVar10 = (double)((long)local_80 << 0x20);
      uVar12 = -uVar13;
      if (-1 < (long)dVar10) {
        uVar12 = uVar13;
      }
      if (bVar4 == 2) {
        puVar7 = &uStack_4b;
        do {
          uVar13 = uVar12 & 0xf;
          uVar12 = uVar12 >> 4;
          *(char *)((long)puVar7 + 1) = "0123456789ABCDEF"[uVar13];
                    /* try { // try from 009fbe58 to 00afbe73 has its CatchHandler @ 009fbe80 */
          puVar7 = (undefined2 *)((long)puVar7 + -1);
        } while (uVar12 != 0);
        goto LAB_009fbf50;
      }
      puVar7 = (undefined2 *)&local_49;
      if (bVar4 == 1) {
                    /* try { // try from 009fbb20 to 00afbb2b has its CatchHandler @ 009fbbd8 */
                    /* try { // try from 009fbb2c to 00afbb7b has its CatchHandler @ 009fb934 */
        local_49 = 0;
        do {
          bVar5 = 9 < uVar12;
          puVar7 = (undefined2 *)((long)puVar7 + -1);
          *(undefined *)puVar7 = (&DAT_012f5a37)[uVar12 % 10];
          uVar12 = uVar12 / 10;
        } while (bVar5);
      }
      goto LAB_009fbf58;
    }
    dVar14 = (double)(long)uVar13;
    goto LAB_009fbd6c;
  default:
    goto switchD_009fb75c_caseD_6;
  case 8:
    lua_pushboolean(param_1,local_80 != 0.0);
    goto switchD_009fb75c_caseD_6;
  case 0xd:
    dVar10 = (double)((ulong)local_80 & 0xffffffff);
                    /* try { // try from 009fbb7c to 00afbb97 has its CatchHandler @ 009fbb9c */
    if (((int)local_80._0_4_ < 0) && (bVar4 = *(byte *)(param_2 + 0x484) >> 3 & 3, bVar4 != 0)) {
      if (bVar4 == 2) {
        puVar7 = &uStack_4b;
        do {
                    /* try { // try from 009fbe74 to 00afbeb7 has its CatchHandler @ 009fbd18 */
          uVar13 = (ulong)dVar10 & 0xf;
          dVar10 = (double)((ulong)dVar10 >> 4);
                    /* catch() { ... } // from try @ 009fbe58 with catch @ 009fbe80 */
          *(char *)((long)puVar7 + 1) = "0123456789ABCDEF"[uVar13];
                    /* catch() { ... } // from try @ 009fbd74 with catch @ 009fbe84 */
          puVar7 = (undefined2 *)((long)puVar7 + -1);
        } while (dVar10 != 0.0);
LAB_009fbf1c:
        local_49 = 0;
        *puVar7 = 0x7830;
      }
      else {
                    /* try { // try from 009fbb98 to 00afbbf3 has its CatchHandler @ 009fb934 */
                    /* catch() { ... } // from try @ 009fbadc with catch @ 009fbb9c
                       catch() { ... } // from try @ 009fbb7c with catch @ 009fbb9c */
        puVar7 = (undefined2 *)&local_49;
        if (bVar4 == 1) {
          local_49 = 0;
          do {
                    /* catch() { ... } // from try @ 009fba14 with catch @ 009fbbbc */
            bVar5 = 9 < (ulong)dVar10;
            puVar7 = (undefined2 *)((long)puVar7 + -1);
            *(undefined *)puVar7 = (&DAT_012f5a37)[(ulong)dVar10 % 10];
            dVar10 = (double)((ulong)dVar10 / 10);
                    /* catch() { ... } // from try @ 009fbb20 with catch @ 009fbbd8 */
          } while (bVar5);
        }
      }
      goto LAB_009fbf64;
    }
    break;
  case 0x11:
    fVar9 = (float)(-(local_80._0_4_ & 1) ^ local_80._0_4_ >> 1);
    bVar4 = *(byte *)(param_2 + 0x484) >> 3 & 3;
    uVar13 = (ulong)(int)fVar9;
    if ((bVar4 == 0) || (uVar13 + 0x80000000 >> 0x20 == 0)) goto LAB_009fbc88;
    uVar12 = -uVar13;
    if (-1 < (int)fVar9) {
      uVar12 = uVar13;
    }
    if (bVar4 == 2) {
      puVar7 = &uStack_4b;
      local_49 = 0;
      do {
        uVar13 = uVar12 & 0xf;
        uVar12 = uVar12 >> 4;
        *(char *)((long)puVar7 + 1) = "0123456789ABCDEF"[uVar13];
        puVar7 = (undefined2 *)((long)puVar7 + -1);
      } while (uVar12 != 0);
      *puVar7 = 0x7830;
    }
    else {
      puVar7 = (undefined2 *)&local_49;
      if (bVar4 == 1) {
        local_49 = 0;
        do {
          bVar5 = 9 < uVar12;
          puVar7 = (undefined2 *)((long)puVar7 + -1);
          *(undefined *)puVar7 = (&DAT_012f5a37)[uVar12 % 10];
          uVar12 = uVar12 / 10;
        } while (bVar5);
      }
    }
    if (-1 < (int)fVar9) goto LAB_009fbf64;
LAB_009fbf5c:
    puVar7 = (undefined2 *)((long)puVar7 + -1);
    *(undefined1 *)puVar7 = 0x2d;
LAB_009fbf64:
    *(undefined1 *)((long)puVar7 + -1) = 0x23;
    lua_pushstring(dVar14,param_1);
    goto switchD_009fb75c_caseD_6;
  case 0x12:
    bVar4 = *(byte *)(param_2 + 0x484) >> 3 & 3;
    dVar10 = (double)(-((ulong)local_80 & 1) ^ (ulong)local_80 >> 1);
    if ((bVar4 != 0) && ((long)dVar10 + 0x80000000U >> 0x20 != 0)) {
      dVar11 = (double)-(long)dVar10;
      if (-1 < (long)dVar10) {
        dVar11 = dVar10;
      }
      if (bVar4 == 2) {
        puVar7 = &uStack_4b;
        do {
          uVar13 = (ulong)dVar11 & 0xf;
          dVar11 = (double)((ulong)dVar11 >> 4);
          *(char *)((long)puVar7 + 1) = "0123456789ABCDEF"[uVar13];
          puVar7 = (undefined2 *)((long)puVar7 + -1);
        } while (dVar11 != 0.0);
        goto LAB_009fbf50;
      }
      puVar7 = (undefined2 *)&local_49;
      if (bVar4 == 1) {
        local_49 = 0;
        do {
          bVar5 = 9 < (ulong)dVar11;
                    /* try { // try from 009fbc58 to 00afbc87 has its CatchHandler @ 009fbc58
                       catch() { ... } // from try @ 009fbc58 with catch @ 009fbc58
                       catch() { ... } // from try @ 009fbcb4 with catch @ 009fbc58 */
          puVar7 = (undefined2 *)((long)puVar7 + -1);
          *(undefined *)puVar7 = (&DAT_012f5a37)[(ulong)dVar11 % 10];
          dVar11 = (double)((ulong)dVar11 / 10);
        } while (bVar5);
      }
      goto LAB_009fbf58;
    }
  }
LAB_009fbd68:
  dVar14 = (double)(long)dVar10;
LAB_009fbd6c:
  lua_pushnumber(dVar14,param_1);
                    /* try { // try from 009fbd74 to 00afbd83 has its CatchHandler @ 009fbe84 */
switchD_009fb75c_caseD_6:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_009fb708_caseD_a:
  luaL_error(param_1,"unknown type %s (%d)",pcVar8,param_3);
  goto switchD_009fb75c_caseD_6;
}

