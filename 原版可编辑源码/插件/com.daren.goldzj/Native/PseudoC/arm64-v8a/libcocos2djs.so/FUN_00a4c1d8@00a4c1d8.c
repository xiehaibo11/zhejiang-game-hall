
/* WARNING: Removing unreachable block (ram,0x00a4c5f4) */
/* WARNING: Removing unreachable block (ram,0x00a4c554) */
/* WARNING: Type propagation algorithm not settling */

int FUN_00a4c1d8(long param_1,undefined8 *param_2,long *param_3,char *param_4,ulong *param_5)

{
  long lVar1;
  long **pplVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  FILE *__stream;
  size_t sVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  long *plVar12;
  long *local_298;
  long *local_290;
  long local_288;
  long local_280;
  ulong local_278;
  undefined8 *local_270;
  stat local_268 [3];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_278 = 0;
  local_270 = (undefined8 *)0x0;
  *param_2 = 0;
  if (param_3 == (long *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00a53a70(param_1,local_268,2);
    if ((iVar4 == 0) &&
       (lVar5 = FUN_00a0e870("------------------------%08x%08x",(undefined4)local_268[0].st_dev,
                             local_268[0].st_dev._4_4_), lVar5 != 0)) {
      if (param_4 == (char *)0x0) {
        param_4 = "Content-Type: multipart/form-data";
      }
      iVar4 = FUN_00a4c8cc(&local_270,0,"%s; boundary=%s\r\n",param_4,lVar5);
      puVar3 = local_270;
      if (iVar4 == 0) {
        local_280 = 0;
        do {
                    /* catch() { ... } // from try @ 00a4c104 with catch @ 00a4c2b0 */
                    /* catch() { ... } // from try @ 00a4c0f8 with catch @ 00a4c2b4 */
                    /* catch() { ... } // from try @ 00a4c0d8 with catch @ 00a4c2b8 */
                    /* catch() { ... } // from try @ 00a4c110 with catch @ 00a4c2c8 */
                    /* try { // try from 00a4c320 to 00b4c373 has its CatchHandler @ 00a4c320
                       catch() { ... } // from try @ 00a4c320 with catch @ 00a4c320
                       catch() { ... } // from try @ 00a4c4e4 with catch @ 00a4c320 */
          if (((((local_278 != 0) &&
                (iVar4 = FUN_00a4c8cc(&local_270,&local_278,&DAT_018bc985), iVar4 != 0)) ||
               (iVar4 = FUN_00a4c8cc(&local_270,&local_278,"--%s\r\n",lVar5), iVar4 != 0)) ||
              ((iVar4 = FUN_00a4c8cc(&local_270,&local_278,"Content-Disposition: form-data; name=\""
                                    ), iVar4 != 0 ||
               (iVar4 = FUN_00a4c99c(&local_270,1,param_3[1],param_3[2],&local_278), iVar4 != 0))))
             || (iVar4 = FUN_00a4c8cc(&local_270,&local_278,&DAT_01a61e87), iVar4 != 0))
          goto joined_r0x00a4c7b4;
          local_288 = lVar5;
          if (param_3[9] != 0) {
            (*(code *)PTR_free_01d1b748)(local_280);
            iVar4 = FUN_00a53a70(param_1,local_268,2);
                    /* try { // try from 00a4c374 to 00b4c38b has its CatchHandler @ 00a4c560 */
            if ((iVar4 != 0) ||
               (local_280 = FUN_00a0e870("------------------------%08x%08x",
                                         (undefined4)local_268[0].st_dev,local_268[0].st_dev._4_4_),
               local_280 == 0)) {
              local_280 = 0;
              iVar4 = 0x1b;
              goto joined_r0x00a4c7b4;
            }
                    /* try { // try from 00a4c394 to 00b4c39f has its CatchHandler @ 00a4c55c */
                    /* try { // try from 00a4c3a0 to 00b4c3ab has its CatchHandler @ 00a4c558 */
            iVar4 = FUN_00a4c8cc(&local_270,&local_278,
                                 "\r\nContent-Type: multipart/mixed; boundary=%s\r\n",local_280);
                    /* try { // try from 00a4c3ac to 00b4c4e3 has its CatchHandler @ 00a4c570 */
            if (iVar4 != 0) goto joined_r0x00a4c7b4;
          }
          local_290 = param_3 + 4;
          local_298 = param_3 + 0xd;
          plVar12 = param_3;
          do {
            if (param_3[9] == 0) {
                    /* catch() { ... } // from try @ 00a4c3a0 with catch @ 00a4c558 */
                    /* catch() { ... } // from try @ 00a4c394 with catch @ 00a4c55c */
                    /* catch() { ... } // from try @ 00a4c374 with catch @ 00a4c560 */
                    /* catch() { ... } // from try @ 00a4c3ac with catch @ 00a4c570 */
              if (((param_3[10] & 0x51U) != 0) &&
                 ((plVar6 = param_3, (param_3[10] & 1U) != 0 || (param_3[0xb] != 0))))
              goto LAB_00a4c3f8;
            }
            else {
              iVar4 = FUN_00a4c8cc(&local_270,&local_278,
                                   "\r\n--%s\r\nContent-Disposition: attachment",local_280);
              plVar6 = plVar12;
              lVar5 = local_288;
              if (iVar4 != 0) goto joined_r0x00a4c7b4;
LAB_00a4c3f8:
              iVar4 = FUN_00a4cb60(plVar6,&local_270,&local_278);
              lVar5 = local_288;
              if (iVar4 != 0) goto joined_r0x00a4c7b4;
            }
            if ((plVar12[7] != 0) &&
               (iVar4 = FUN_00a4c8cc(&local_270,&local_278,"\r\nContent-Type: %s"),
               lVar5 = local_288, iVar4 != 0)) goto joined_r0x00a4c7b4;
            for (puVar10 = (undefined8 *)plVar12[8]; puVar10 != (undefined8 *)0x0;
                puVar10 = (undefined8 *)puVar10[1]) {
              iVar4 = FUN_00a4c8cc(&local_270,&local_278,&DAT_0189865c,*puVar10);
              lVar5 = local_288;
              if (iVar4 != 0) goto joined_r0x00a4c7b4;
            }
            iVar4 = FUN_00a4c8cc(&local_270,&local_278,"\r\n\r\n");
            lVar5 = local_288;
            if (iVar4 != 0) goto joined_r0x00a4c7b4;
            uVar9 = param_3[10];
            if ((uVar9 & 3) == 0) {
              if (((uint)uVar9 >> 4 & 1) == 0) {
                if (((uint)uVar9 >> 6 & 1) != 0) {
                    /* try { // try from 00a4c618 to 00b4c62f has its CatchHandler @ 00a4c798 */
                  pplVar2 = &local_298;
                  if ((uVar9 & 0x80) == 0) {
                    pplVar2 = &local_290;
                  }
                  uVar9 = **pplVar2;
                  if ((long)(local_278 | uVar9) < 0) goto LAB_00a4c7d8;
                  lVar5 = param_3[0xc];
                    /* try { // try from 00a4c644 to 00b4c657 has its CatchHandler @ 00a4c794 */
                  puVar10 = (undefined8 *)(*(code *)PTR_malloc_01d1b740)(0x20);
                  if (puVar10 != (undefined8 *)0x0) {
                    *puVar10 = 0;
                    /* try { // try from 00a4c658 to 00b4c667 has its CatchHandler @ 00a4c768 */
                    puVar10[2] = lVar5;
                    *(undefined4 *)(puVar10 + 1) = 3;
                    local_278 = local_278 + uVar9;
                    if (local_270 != (undefined8 *)0x0) {
                      *local_270 = puVar10;
                    }
                    iVar4 = 0;
                    local_270 = puVar10;
                    goto joined_r0x00a4c610;
                  }
LAB_00a4c7bc:
                  iVar4 = 0x1b;
                  lVar5 = local_288;
                  goto joined_r0x00a4c7b4;
                }
                lVar5 = param_3[3];
                pplVar2 = &local_298;
                if ((uVar9 & 0x80) == 0) {
                  pplVar2 = &local_290;
                }
                lVar8 = **pplVar2;
              }
              else {
                lVar5 = param_3[5];
                lVar8 = param_3[6];
              }
              iVar4 = FUN_00a4c99c(&local_270,2,lVar5,lVar8,&local_278);
joined_r0x00a4c610:
              if (iVar4 != 0) break;
            }
            else {
              pcVar11 = (char *)plVar12[3];
              iVar4 = strcmp("-",pcVar11);
              if (iVar4 == 0) {
LAB_00a4c58c:
                do {
                  sVar7 = fread(local_268,1,0x200,(FILE *)&__sF);
                  if (sVar7 == 0) {
                    iVar4 = 0;
                    goto LAB_00a4c680;
                  }
                  iVar4 = FUN_00a4c99c(&local_270,2,local_268,sVar7,&local_278);
                } while (iVar4 == 0);
                goto joined_r0x00a4c610;
              }
              __stream = fopen(pcVar11,"rb");
              if (__stream == (FILE *)0x0) {
                if (param_1 != 0) {
                    /* catch() { ... } // from try @ 00a4c644 with catch @ 00a4c794 */
                    /* catch() { ... } // from try @ 00a4c618 with catch @ 00a4c798 */
                  FUN_00a23020(param_1,"couldn\'t open file \"%s\"",plVar12[3]);
                }
                *param_2 = 0;
                iVar4 = 0x1a;
                lVar5 = local_288;
                goto joined_r0x00a4c7b4;
              }
              if (__stream == (FILE *)&__sF) goto LAB_00a4c58c;
              fclose(__stream);
              if ((long)local_278 < 0) {
LAB_00a4c7d8:
                iVar4 = 0x2b;
                lVar5 = local_288;
                goto joined_r0x00a4c7b4;
              }
              pcVar11 = (char *)plVar12[3];
              puVar10 = (undefined8 *)(*(code *)PTR_malloc_01d1b740)(0x20);
                    /* try { // try from 00a4c4e4 to 00b4c5c7 has its CatchHandler @ 00a4c320 */
              if (puVar10 == (undefined8 *)0x0) goto LAB_00a4c7bc;
              *puVar10 = 0;
              puVar10[2] = pcVar11;
              *(undefined4 *)(puVar10 + 1) = 4;
              iVar4 = strcmp("-",pcVar11);
              if (iVar4 != 0) {
                iVar4 = stat(pcVar11,local_268);
                if ((iVar4 != 0) || (((uint)local_268[0].st_nlink & 0xf000) == 0x4000)) {
                  (*(code *)PTR_free_01d1b748)(puVar10);
                  goto LAB_00a4c7d8;
                }
                local_278 = local_278 + local_268[0].st_size;
              }
              if (local_270 != (undefined8 *)0x0) {
                *local_270 = puVar10;
              }
              iVar4 = 0;
              local_270 = puVar10;
            }
LAB_00a4c680:
                    /* try { // try from 00a4c680 to 00b4c687 has its CatchHandler @ 00a4c74c */
            plVar12 = (long *)plVar12[9];
          } while (plVar12 != (long *)0x0);
                    /* try { // try from 00a4c688 to 00b4c697 has its CatchHandler @ 00a4c77c */
          lVar5 = local_288;
                    /* try { // try from 00a4c698 to 00b4c69f has its CatchHandler @ 00a4c764 */
                    /* try { // try from 00a4c6a0 to 00b4c6cf has its CatchHandler @ 00a4c76c */
          if ((iVar4 != 0) ||
             ((param_3[9] != 0 &&
              (iVar4 = FUN_00a4c8cc(&local_270,&local_278,"\r\n--%s--",local_280), iVar4 != 0))))
          goto joined_r0x00a4c7b4;
          param_3 = (long *)*param_3;
        } while (param_3 != (long *)0x0);
                    /* try { // try from 00a4c6d0 to 00b4c7e7 has its CatchHandler @ 00a4c5c8 */
        iVar4 = FUN_00a4c8cc(&local_270,&local_278,"\r\n--%s--\r\n",lVar5);
        if (iVar4 == 0) {
                    /* try { // try from 00a4c7e8 to 00b4c82b has its CatchHandler @ 00a4c7e8
                       catch() { ... } // from try @ 00a4c7e8 with catch @ 00a4c7e8
                       catch() { ... } // from try @ 00a4c844 with catch @ 00a4c7e8 */
          *param_5 = local_278;
          (*(code *)PTR_free_01d1b748)(local_280);
          (*(code *)PTR_free_01d1b748)(lVar5);
          *param_2 = puVar3;
          goto LAB_00a4c740;
        }
joined_r0x00a4c7b4:
        while (puVar3 != (undefined8 *)0x0) {
          puVar10 = (undefined8 *)*puVar3;
          if (*(uint *)(puVar3 + 1) < 3) {
            (*(code *)PTR_free_01d1b748)(puVar3[2]);
          }
          (*(code *)PTR_free_01d1b748)(puVar3);
          puVar3 = puVar10;
        }
        (*(code *)PTR_free_01d1b748)(local_280);
      }
      (*(code *)PTR_free_01d1b748)(lVar5);
    }
    else {
      iVar4 = 0x1b;
                    /* try { // try from 00a4c23c to 00b4c31f has its CatchHandler @ 00a4c084 */
    }
  }
LAB_00a4c740:
                    /* catch() { ... } // from try @ 00a4c680 with catch @ 00a4c74c */
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 00a4c698 with catch @ 00a4c764 */
                    /* catch() { ... } // from try @ 00a4c658 with catch @ 00a4c768 */
                    /* catch() { ... } // from try @ 00a4c6a0 with catch @ 00a4c76c */
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

