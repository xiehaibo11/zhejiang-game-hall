
/* WARNING: Removing unreachable block (ram,0x00a62fdc) */
/* WARNING: Removing unreachable block (ram,0x00a62f3c) */
/* WARNING: Type propagation algorithm not settling */

int FUN_00a62bc0(long param_1,undefined8 *param_2,long *param_3,char *param_4,ulong *param_5)

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
                    /* catch() { ... } // from try @ 00a62b7c with catch @ 00a62c04 */
  *param_2 = 0;
  if (param_3 == (long *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00a6a458(param_1,local_268,2);
    if ((iVar4 == 0) &&
       (lVar5 = FUN_00a24258("------------------------%08x%08x",(undefined4)local_268[0].st_dev,
                             local_268[0].st_dev._4_4_), lVar5 != 0)) {
      if (param_4 == (char *)0x0) {
        param_4 = "Content-Type: multipart/form-data";
      }
      iVar4 = FUN_00a632b4(&local_270,0,"%s; boundary=%s\r\n",param_4,lVar5);
      puVar3 = local_270;
      if (iVar4 == 0) {
        local_280 = 0;
        do {
          if (((((local_278 != 0) &&
                (iVar4 = FUN_00a632b4(&local_270,&local_278,&DAT_013ecf75), iVar4 != 0)) ||
               (iVar4 = FUN_00a632b4(&local_270,&local_278,"--%s\r\n",lVar5), iVar4 != 0)) ||
              ((iVar4 = FUN_00a632b4(&local_270,&local_278,"Content-Disposition: form-data; name=\""
                                    ), iVar4 != 0 ||
               (iVar4 = FUN_00a63384(&local_270,1,param_3[1],param_3[2],&local_278), iVar4 != 0))))
             || (iVar4 = FUN_00a632b4(&local_270,&local_278,"\""), iVar4 != 0))
          goto joined_r0x00a6319c;
          local_288 = lVar5;
          if (param_3[9] != 0) {
            (*(code *)PTR_free_01769a00)(local_280);
                    /* try { // try from 00a62d48 to 00b62dbf has its CatchHandler @ 00a62d48
                       catch() { ... } // from try @ 00a62d48 with catch @ 00a62d48
                       catch() { ... } // from try @ 00a62dcc with catch @ 00a62d48 */
            iVar4 = FUN_00a6a458(param_1,local_268,2);
            if ((iVar4 != 0) ||
               (local_280 = FUN_00a24258("------------------------%08x%08x",
                                         (undefined4)local_268[0].st_dev,local_268[0].st_dev._4_4_),
               local_280 == 0)) {
              local_280 = 0;
              iVar4 = 0x1b;
              goto joined_r0x00a6319c;
            }
            iVar4 = FUN_00a632b4(&local_270,&local_278,
                                 "\r\nContent-Type: multipart/mixed; boundary=%s\r\n",local_280);
            if (iVar4 != 0) goto joined_r0x00a6319c;
          }
          local_290 = param_3 + 4;
          local_298 = param_3 + 0xd;
          plVar12 = param_3;
          do {
            if (param_3[9] == 0) {
              if (((param_3[10] & 0x51U) != 0) &&
                 ((plVar6 = param_3, (param_3[10] & 1U) != 0 || (param_3[0xb] != 0))))
              goto LAB_00a62de0;
            }
            else {
                    /* try { // try from 00a62dc0 to 00b62dcb has its CatchHandler @ 00a62e48 */
              iVar4 = FUN_00a632b4(&local_270,&local_278,
                                   "\r\n--%s\r\nContent-Disposition: attachment",local_280);
                    /* try { // try from 00a62dcc to 00b62e7f has its CatchHandler @ 00a62d48 */
              plVar6 = plVar12;
              lVar5 = local_288;
              if (iVar4 != 0) goto joined_r0x00a6319c;
LAB_00a62de0:
              iVar4 = FUN_00a63548(plVar6,&local_270,&local_278);
              lVar5 = local_288;
              if (iVar4 != 0) goto joined_r0x00a6319c;
            }
            if ((plVar12[7] != 0) &&
               (iVar4 = FUN_00a632b4(&local_270,&local_278,"\r\nContent-Type: %s"),
               lVar5 = local_288, iVar4 != 0)) goto joined_r0x00a6319c;
            for (puVar10 = (undefined8 *)plVar12[8]; puVar10 != (undefined8 *)0x0;
                puVar10 = (undefined8 *)puVar10[1]) {
              iVar4 = FUN_00a632b4(&local_270,&local_278,&DAT_013cafa0,*puVar10);
              lVar5 = local_288;
              if (iVar4 != 0) goto joined_r0x00a6319c;
            }
                    /* catch() { ... } // from try @ 00a62dc0 with catch @ 00a62e48 */
            iVar4 = FUN_00a632b4(&local_270,&local_278,"\r\n\r\n");
            lVar5 = local_288;
            if (iVar4 != 0) goto joined_r0x00a6319c;
            uVar9 = param_3[10];
            if ((uVar9 & 3) == 0) {
              if (((uint)uVar9 >> 4 & 1) == 0) {
                if (((uint)uVar9 >> 6 & 1) != 0) {
                  pplVar2 = &local_298;
                  if ((uVar9 & 0x80) == 0) {
                    pplVar2 = &local_290;
                  }
                  uVar9 = **pplVar2;
                  if ((long)(local_278 | uVar9) < 0) goto LAB_00a631c0;
                  lVar5 = param_3[0xc];
                  puVar10 = (undefined8 *)(*(code *)PTR_malloc_017699f8)(0x20);
                  if (puVar10 != (undefined8 *)0x0) {
                    *puVar10 = 0;
                    puVar10[2] = lVar5;
                    *(undefined4 *)(puVar10 + 1) = 3;
                    local_278 = local_278 + uVar9;
                    if (local_270 != (undefined8 *)0x0) {
                      *local_270 = puVar10;
                    }
                    iVar4 = 0;
                    local_270 = puVar10;
                    goto joined_r0x00a62ff8;
                  }
LAB_00a631a4:
                  iVar4 = 0x1b;
                  lVar5 = local_288;
                  goto joined_r0x00a6319c;
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
              iVar4 = FUN_00a63384(&local_270,2,lVar5,lVar8,&local_278);
joined_r0x00a62ff8:
              if (iVar4 != 0) break;
            }
            else {
              pcVar11 = (char *)plVar12[3];
              iVar4 = strcmp("-",pcVar11);
              if (iVar4 == 0) {
LAB_00a62f74:
                do {
                  sVar7 = fread(local_268,1,0x200,(FILE *)&__sF);
                    /* catch() { ... } // from try @ 00a62f00 with catch @ 00a62f88 */
                  if (sVar7 == 0) {
                    iVar4 = 0;
                    goto LAB_00a63068;
                  }
                  iVar4 = FUN_00a63384(&local_270,2,local_268,sVar7,&local_278);
                } while (iVar4 == 0);
                goto joined_r0x00a62ff8;
              }
                    /* try { // try from 00a62e80 to 00b62eff has its CatchHandler @ 00a62e80
                       catch() { ... } // from try @ 00a62e80 with catch @ 00a62e80
                       catch() { ... } // from try @ 00a62f0c with catch @ 00a62e80 */
              __stream = fopen(pcVar11,"rb");
              if (__stream == (FILE *)0x0) {
                if (param_1 != 0) {
                  FUN_00a38a08(param_1,"couldn\'t open file \"%s\"",plVar12[3]);
                }
                *param_2 = 0;
                iVar4 = 0x1a;
                lVar5 = local_288;
                goto joined_r0x00a6319c;
              }
              if (__stream == (FILE *)&__sF) goto LAB_00a62f74;
              fclose(__stream);
              if ((long)local_278 < 0) {
LAB_00a631c0:
                iVar4 = 0x2b;
                lVar5 = local_288;
                goto joined_r0x00a6319c;
              }
              pcVar11 = (char *)plVar12[3];
              puVar10 = (undefined8 *)(*(code *)PTR_malloc_017699f8)(0x20);
              if (puVar10 == (undefined8 *)0x0) goto LAB_00a631a4;
              *puVar10 = 0;
              puVar10[2] = pcVar11;
              *(undefined4 *)(puVar10 + 1) = 4;
              iVar4 = strcmp("-",pcVar11);
              if (iVar4 != 0) {
                iVar4 = stat(pcVar11,local_268);
                    /* try { // try from 00a62f00 to 00b62f0b has its CatchHandler @ 00a62f88 */
                    /* try { // try from 00a62f0c to 00b62fbf has its CatchHandler @ 00a62e80 */
                if ((iVar4 != 0) || (((uint)local_268[0].st_nlink & 0xf000) == 0x4000)) {
                  (*(code *)PTR_free_01769a00)(puVar10);
                  goto LAB_00a631c0;
                }
                local_278 = local_278 + local_268[0].st_size;
              }
              if (local_270 != (undefined8 *)0x0) {
                *local_270 = puVar10;
              }
              iVar4 = 0;
              local_270 = puVar10;
            }
LAB_00a63068:
            plVar12 = (long *)plVar12[9];
          } while (plVar12 != (long *)0x0);
          lVar5 = local_288;
          if ((iVar4 != 0) ||
             ((param_3[9] != 0 &&
              (iVar4 = FUN_00a632b4(&local_270,&local_278,"\r\n--%s--",local_280), iVar4 != 0))))
          goto joined_r0x00a6319c;
          param_3 = (long *)*param_3;
        } while (param_3 != (long *)0x0);
        iVar4 = FUN_00a632b4(&local_270,&local_278,"\r\n--%s--\r\n",lVar5);
        if (iVar4 == 0) {
          *param_5 = local_278;
          (*(code *)PTR_free_01769a00)(local_280);
          (*(code *)PTR_free_01769a00)(lVar5);
          *param_2 = puVar3;
          goto LAB_00a63128;
        }
joined_r0x00a6319c:
        while (puVar3 != (undefined8 *)0x0) {
          puVar10 = (undefined8 *)*puVar3;
          if (*(uint *)(puVar3 + 1) < 3) {
            (*(code *)PTR_free_01769a00)(puVar3[2]);
          }
          (*(code *)PTR_free_01769a00)(puVar3);
          puVar3 = puVar10;
        }
        (*(code *)PTR_free_01769a00)(local_280);
      }
      (*(code *)PTR_free_01769a00)(lVar5);
    }
    else {
      iVar4 = 0x1b;
    }
  }
LAB_00a63128:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

