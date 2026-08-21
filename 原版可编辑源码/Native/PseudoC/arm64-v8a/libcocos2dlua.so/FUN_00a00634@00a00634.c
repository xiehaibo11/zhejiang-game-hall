
undefined4 FUN_00a00634(undefined8 param_1,long param_2,long param_3,int param_4)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined2 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 uVar16;
  uint uVar17;
  double dVar18;
  char *local_90 [4];
  undefined2 uStack_6b;
  undefined1 local_69;
  long local_68;
  
                    /* catch() { ... } // from try @ 00a004c8 with catch @ 00a00634
                       catch() { ... } // from try @ 00a00580 with catch @ 00a00634 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a00660 to 00b006ab has its CatchHandler @ 00a00660
                       catch() { ... } // from try @ 00a00660 with catch @ 00a00660
                       catch() { ... } // from try @ 00a006b0 with catch @ 00a00660 */
  if (param_3 == 0) goto LAB_00a00a48;
  lVar9 = *(long *)(param_3 + 8);
  if (((*(uint *)(param_3 + 0x1c) >> 0x1d & 1) != 0) && (param_4 != 0)) {
    lua_createtable(param_1,0,0);
    goto LAB_00a00690;
  }
                    /* try { // try from 00a006ac to 00b006af has its CatchHandler @ 00a006e4 */
                    /* try { // try from 00a006b0 to 00b006f7 has its CatchHandler @ 00a00660 */
  uVar16 = 0;
  switch(*(uint *)(param_3 + 0x1c) >> 0x18 & 0x1f) {
  case 1:
  case 2:
    if (*(char **)(param_3 + 0x10) == (char *)0x0) {
      if (param_4 == 0) break;
      dVar18 = 0.0;
    }
    else {
      dVar18 = strtod(*(char **)(param_3 + 0x10),local_90);
      if (*(char **)(param_3 + 0x10) == local_90[0]) break;
    }
LAB_00a009bc:
    lua_pushnumber(dVar18,param_1);
    goto LAB_00a00690;
  default:
    if (*(char **)(param_3 + 0x10) == (char *)0x0) {
      if (param_4 != 0) {
LAB_00a009a8:
        lua_pushinteger(param_1,0);
        goto LAB_00a00690;
      }
    }
    else {
      uVar6 = strtol(*(char **)(param_3 + 0x10),local_90,10);
      if (*(char **)(param_3 + 0x10) != local_90[0]) {
        if ((uVar6 == (long)(int)uVar6) || (bVar3 = *(byte *)(param_2 + 0x484) >> 3 & 3, bVar3 == 0)
           ) {
          dVar18 = (double)(long)uVar6;
          goto LAB_00a009bc;
        }
        uVar11 = -uVar6;
        if (-1 < (long)uVar6) {
          uVar11 = uVar6;
        }
        if (bVar3 == 2) {
          puVar7 = &uStack_6b;
          local_69 = 0;
          do {
            uVar15 = uVar11 & 0xf;
            uVar11 = uVar11 >> 4;
            *(char *)((long)puVar7 + 1) = "0123456789ABCDEF"[uVar15];
            puVar7 = (undefined2 *)((long)puVar7 + -1);
          } while (uVar11 != 0);
          *puVar7 = 0x7830;
        }
        else {
          puVar7 = (undefined2 *)&local_69;
          if (bVar3 == 1) {
            local_69 = 0;
            do {
              bVar4 = 9 < uVar11;
              puVar7 = (undefined2 *)((long)puVar7 + -1);
              *(undefined *)puVar7 = (&DAT_012f5a37)[uVar11 % 10];
              uVar11 = uVar11 / 10;
            } while (bVar4);
          }
        }
        if ((long)uVar6 < 0) {
LAB_00a00ae4:
          puVar7 = (undefined2 *)((long)puVar7 + -1);
          *(undefined1 *)puVar7 = 0x2d;
        }
LAB_00a00aec:
        puVar8 = (undefined1 *)((long)puVar7 + -1);
        *puVar8 = 0x23;
        goto LAB_00a006f0;
      }
    }
    break;
  case 8:
    lVar9 = *(long *)(param_3 + 0x10);
    if (lVar9 == 0) {
      if (param_4 != 0) {
LAB_00a00a80:
                    /* catch() { ... } // from try @ 00a0096c with catch @ 00a00a88
                       catch() { ... } // from try @ 00a009f8 with catch @ 00a00a88 */
        lua_pushboolean(param_1,0);
        goto LAB_00a00690;
      }
    }
    else {
                    /* try { // try from 00a007f8 to 00b0082b has its CatchHandler @ 00a008f8 */
      uVar6 = __strlen_chk(&DAT_012a5ace,5);
      uVar11 = uVar6 >> 5;
      if (uVar11 < uVar6) {
        uVar15 = uVar6 & 0xffffffff;
        uVar14 = uVar6;
        do {
          lVar12 = uVar14 + 0x14;
          uVar17 = (uint)uVar15;
                    /* try { // try from 00a0082c to 00b0083f has its CatchHandler @ 00a008c4 */
          uVar14 = uVar14 + ~uVar11;
          uVar15 = (ulong)(uVar17 * 0x20 + (uVar17 >> 2) +
                           (uint)(byte)"  [%02d] boolean %s\n"[lVar12] ^ uVar17);
                    /* try { // try from 00a00844 to 00b00877 has its CatchHandler @ 00a008c8 */
        } while (uVar11 < uVar14);
      }
      else {
        uVar15 = uVar6 & 0xffffffff;
      }
      if (*(long *)(param_2 + 0x30) == 0) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = *(long **)(*(long *)(param_2 + 0x30) + (*(int *)(param_2 + 0x20) - 1 & uVar15) * 8
                            );
                    /* catch() { ... } // from try @ 00a0082c with catch @ 00a008c4 */
                    /* catch() { ... } // from try @ 00a00844 with catch @ 00a008c8 */
        while ((plVar13 != (long *)0x0 &&
               ((((int)uVar15 != (int)plVar13[1] || (uVar6 != ((ulong)plVar13[1] >> 0x20 & 0xffff)))
                || (iVar5 = memcmp(&DAT_012a5ace,plVar13 + 2,uVar6), iVar5 != 0))))) {
          plVar13 = (long *)*plVar13;
        }
      }
                    /* catch() { ... } // from try @ 00a007f8 with catch @ 00a008f8 */
      lVar12 = 0;
      if (plVar13 != (long *)0x0) {
        lVar12 = (long)plVar13 + 0x10;
      }
      if (lVar9 == lVar12) {
        uVar16 = 1;
                    /* try { // try from 00a0096c to 00b009c7 has its CatchHandler @ 00a00a88 */
        lua_pushboolean(param_1,1);
        goto switchD_00a006c0_caseD_b;
      }
      lVar9 = *(long *)(param_3 + 0x10);
                    /* try { // try from 00a00914 to 00b0096b has its CatchHandler @ 00a00914
                       catch() { ... } // from try @ 00a00914 with catch @ 00a00914
                       catch() { ... } // from try @ 00a009c8 with catch @ 00a00914
                       catch() { ... } // from try @ 00a00a0c with catch @ 00a00914 */
      uVar6 = __strlen_chk("false",6);
      uVar11 = uVar6 >> 5;
      if (uVar11 < uVar6) {
        uVar15 = uVar6 & 0xffffffff;
        uVar14 = uVar6;
        do {
          pbVar1 = &DAT_012a5ad2 + uVar14;
          uVar17 = (uint)uVar15;
          uVar14 = uVar14 + ~uVar11;
          uVar15 = (ulong)(uVar17 * 0x20 + (uVar17 >> 2) + (uint)*pbVar1 ^ uVar17);
        } while (uVar11 < uVar14);
      }
      else {
                    /* try { // try from 00a009c8 to 00b009f7 has its CatchHandler @ 00a00914 */
        uVar15 = uVar6 & 0xffffffff;
      }
      if (*(long *)(param_2 + 0x30) == 0) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = *(long **)(*(long *)(param_2 + 0x30) + (*(int *)(param_2 + 0x20) - 1 & uVar15) * 8
                            );
                    /* try { // try from 00a00a0c to 00b00adf has its CatchHandler @ 00a00914 */
        while ((plVar13 != (long *)0x0 &&
               ((((int)uVar15 != (int)plVar13[1] || (uVar6 != ((ulong)plVar13[1] >> 0x20 & 0xffff)))
                || (iVar5 = memcmp("false",plVar13 + 2,uVar6), iVar5 != 0))))) {
                    /* try { // try from 00a009f8 to 00b00a0b has its CatchHandler @ 00a00a88 */
          plVar13 = (long *)*plVar13;
        }
      }
      lVar12 = 0;
      if (plVar13 != (long *)0x0) {
        lVar12 = (long)plVar13 + 0x10;
      }
      if (lVar9 == lVar12) goto LAB_00a00a80;
    }
    break;
  case 9:
  case 0xc:
    puVar8 = *(undefined1 **)(param_3 + 0x10);
    if (puVar8 == (undefined1 *)0x0) {
      if (param_4 == 0) break;
      lua_pushlstring(param_1,&DAT_013c996e,0);
    }
    else {
LAB_00a006f0:
      lua_pushstring(param_1,puVar8);
                    /* try { // try from 00a006f8 to 00b007f7 has its CatchHandler @ 00a006f8
                       catch() { ... } // from try @ 00a006f8 with catch @ 00a006f8
                       catch() { ... } // from try @ 00a00878 with catch @ 00a006f8 */
    }
LAB_00a00690:
    uVar16 = 1;
  case 0xb:
    goto switchD_00a006c0_caseD_b;
  case 0xe:
    if (((lVar9 != 0) && (lVar12 = *(long *)(param_3 + 0x10), lVar12 != 0)) &&
       (*(long *)(lVar9 + 0x30) != 0)) {
      uVar11 = *(long *)(lVar9 + 0x30) - 1;
      uVar6 = uVar11 & lVar12 * 0x9e3779b1;
      if ((uVar11 & lVar12 * 0x9e3779b1) == 0) {
        uVar6 = 1;
      }
      for (plVar13 = (long *)(*(long *)(lVar9 + 0x48) +
                             uVar6 * ((ulong)*(uint *)(lVar9 + 0x40) & 0x7fffffff));
          plVar13[1] != lVar12; plVar13 = (long *)((long)plVar13 + *plVar13)) {
        if (*plVar13 == 0) goto LAB_00a00990;
      }
      if ((plVar13 != (long *)0x0) &&
         (puVar10 = (undefined8 *)plVar13[2], puVar10 != (undefined8 *)0x0)) {
        if ((*(byte *)(param_2 + 0x484) & 1) != 0) {
          iVar5 = *(int *)(puVar10 + 3);
          uVar6 = (ulong)iVar5;
          bVar3 = *(byte *)(param_2 + 0x484) >> 3 & 3;
          if ((bVar3 != 0) && (uVar6 + 0x80000000 >> 0x20 != 0)) {
            uVar11 = -uVar6;
            if (-1 < iVar5) {
              uVar11 = uVar6;
            }
            if (bVar3 == 2) {
              puVar7 = &uStack_6b;
              local_69 = 0;
              do {
                uVar6 = uVar11 & 0xf;
                uVar11 = uVar11 >> 4;
                *(char *)((long)puVar7 + 1) = "0123456789ABCDEF"[uVar6];
                puVar7 = (undefined2 *)((long)puVar7 + -1);
              } while (uVar11 != 0);
              *puVar7 = 0x7830;
            }
            else {
              puVar7 = (undefined2 *)&local_69;
              if (bVar3 == 1) {
                local_69 = 0;
                do {
                  bVar4 = 9 < uVar11;
                  puVar7 = (undefined2 *)((long)puVar7 + -1);
                  *(undefined *)puVar7 = (&DAT_012f5a37)[uVar11 % 10];
                  uVar11 = uVar11 / 10;
                } while (bVar4);
              }
            }
            if (iVar5 < 0) goto LAB_00a00ae4;
            goto LAB_00a00aec;
          }
          dVar18 = (double)iVar5;
          goto LAB_00a009bc;
        }
        puVar8 = (undefined1 *)*puVar10;
        goto LAB_00a006f0;
      }
    }
LAB_00a00990:
    if (param_4 != 0) {
      if (((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) ||
         ((-1 < *(int *)(lVar9 + 0x20) ||
          (((*(long *)(lVar9 + 0x28) == 0 ||
            (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 0x10),
            puVar10 == (undefined8 *)0x0)) || ((*(byte *)(param_2 + 0x484) & 1) != 0))))))
      goto LAB_00a009a8;
      puVar8 = (undefined1 *)*puVar10;
      goto LAB_00a006f0;
    }
  }
LAB_00a00a48:
  uVar16 = 0;
switchD_00a006c0_caseD_b:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

