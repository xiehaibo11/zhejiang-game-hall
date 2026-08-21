
/* WARNING: Type propagation algorithm not settling */

int FUN_00a55fd4(long *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  char *__s;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 local_60;
  long local_58;
  undefined1 *local_48;
  
  lVar8 = *param_1;
                    /* catch() { ... } // from try @ 00a55f58 with catch @ 00a55ff8 */
                    /* catch() { ... } // from try @ 00a55f3c with catch @ 00a55ffc
                       catch() { ... } // from try @ 00a55fa4 with catch @ 00a55ffc */
  uVar1 = (undefined4)param_1[0x4c];
  __s = *(char **)(lVar8 + 0x8cc0);
  *param_2 = 1;
  sVar3 = strlen(__s);
  if (sVar3 < 3) {
    local_48 = &DAT_013c996e;
    local_60 = 0;
    puVar9 = (undefined1 *)0x0;
    goto LAB_00a56180;
  }
  sVar3 = strlen(__s + 2);
  if (sVar3 != 0) {
    if (sVar3 < 8) {
      uVar5 = 0;
    }
    else {
      uVar5 = sVar3 & 0xfffffffffffffff8;
      if (uVar5 != 0) {
        pcVar6 = __s + 4;
        uVar7 = uVar5;
        do {
          uVar10 = *(undefined8 *)(pcVar6 + -2);
          if ((char)uVar10 == '?') {
            pcVar6[-2] = '\t';
          }
          if ((char)((ulong)uVar10 >> 8) == '?') {
            pcVar6[-1] = '\t';
          }
          if ((char)((ulong)uVar10 >> 0x10) == '?') {
            *pcVar6 = '\t';
          }
          if ((char)((ulong)uVar10 >> 0x18) == '?') {
            pcVar6[1] = '\t';
          }
          if ((char)((ulong)uVar10 >> 0x20) == '?') {
            pcVar6[2] = '\t';
          }
          if ((char)((ulong)uVar10 >> 0x28) == '?') {
            pcVar6[3] = '\t';
          }
          if ((char)((ulong)uVar10 >> 0x30) == '?') {
            pcVar6[4] = '\t';
          }
          if ((char)((ulong)uVar10 >> 0x38) == '?') {
            pcVar6[5] = '\t';
          }
          uVar7 = uVar7 - 8;
          pcVar6 = pcVar6 + 8;
        } while (uVar7 != 0);
        if (sVar3 == uVar5) goto LAB_00a56158;
      }
    }
    lVar4 = sVar3 - uVar5;
    pcVar6 = __s + uVar5 + 2;
    do {
      if (*pcVar6 == '?') {
        *pcVar6 = '\t';
      }
      lVar4 = lVar4 + -1;
      pcVar6 = pcVar6 + 1;
    } while (lVar4 != 0);
  }
LAB_00a56158:
  FUN_00a45500(lVar8,__s + 2,0,&local_48,&local_60,0);
  puVar9 = local_48;
  if (local_48 == (undefined1 *)0x0) {
    return 0x1b;
  }
LAB_00a56180:
  lVar4 = FUN_00a2c6f4(local_60);
  while( true ) {
    iVar2 = FUN_00a38cd0(param_1,uVar1,local_48,lVar4,&local_58);
    if ((iVar2 != 0) || (iVar2 = FUN_00a391f0(param_1,2,local_48,local_58), iVar2 != 0))
    goto LAB_00a56200;
    lVar4 = lVar4 - local_58;
    local_48 = local_48 + local_58;
    if (lVar4 < 1) break;
    iVar2 = FUN_00a2b3d0(0xffffffff,0xffffffff,uVar1,100);
    if (iVar2 < 0) {
      iVar2 = 0x37;
LAB_00a56200:
      (*(code *)PTR_free_01769a00)(puVar9);
LAB_00a56214:
      FUN_00a38a08(lVar8,"Failed sending Gopher request");
      return iVar2;
    }
  }
  (*(code *)PTR_free_01769a00)(puVar9);
  iVar2 = FUN_00a38b64(uVar1,param_1,&DAT_013ecf75);
  if (iVar2 == 0) {
    iVar2 = FUN_00a391f0(param_1,2,&DAT_013ecf75,2);
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_00a49fc0(param_1,0,0xffffffffffffffff,0,lVar8 + 0x98,0xffffffff,0);
    return 0;
  }
  goto LAB_00a56214;
}

