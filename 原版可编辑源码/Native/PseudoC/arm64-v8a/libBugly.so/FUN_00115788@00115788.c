
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00115788(char *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  int local_80 [2];
  long local_78;
  undefined8 local_70 [9];
  long local_28 [3];
  ushort local_10 [4];
  long local_8;
  
  cVar5 = *param_1;
  local_8 = ___stack_chk_guard;
  if (cVar5 != '\0') {
    cVar1 = param_1[2];
    if (cVar1 == '\0') {
      lVar4 = _Uelf64_memory_read(param_1,**(long **)(param_1 + 0x18) + 0x38,local_10,2,0);
      if (((lVar4 == 2) &&
          (lVar4 = _Uelf64_memory_read(param_1,**(long **)(param_1 + 0x18) + 0x20,local_28,8,0),
          lVar4 == 8)) && (local_10[0] != 0)) {
        iVar6 = 0;
        lVar4 = local_28[0];
        do {
          lVar3 = _Uelf64_memory_read(param_1,lVar4 + **(long **)(param_1 + 0x18),local_80,4,0);
          if ((lVar3 != 4) ||
             (lVar3 = _Uelf64_memory_read(param_1,**(long **)(param_1 + 0x18) + 8 + lVar4,&local_78,
                                          8,0), lVar3 != 8)) {
LAB_00115984:
            cVar5 = '\0';
            goto LAB_0011582c;
          }
          if ((local_80[0] == 1) && (local_78 == param_2)) {
            lVar4 = _Uelf64_memory_read(param_1,**(long **)(param_1 + 0x18) + 0x10 + lVar4,local_70,
                                        8,0);
            if (lVar4 != 8) goto LAB_00115984;
            *param_3 = local_70[0];
            goto LAB_0011582c;
          }
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 0x38;
        } while (iVar6 < (int)(uint)local_10[0]);
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 8);
      if (*(ushort *)(lVar4 + 0x38) != 0) {
        piVar2 = (int *)(lVar4 + *(long *)(lVar4 + 0x20));
        do {
          if ((*piVar2 == 1) && (*(long *)(piVar2 + 2) == param_2)) {
            *param_3 = *(undefined8 *)(piVar2 + 4);
            cVar5 = cVar1;
            goto LAB_0011582c;
          }
          piVar2 = piVar2 + 0xe;
        } while (piVar2 != (int *)(lVar4 + *(long *)(lVar4 + 0x20) + 0x38 +
                                           (ulong)(*(ushort *)(lVar4 + 0x38) - 1) * 0x38));
      }
    }
    cVar5 = '\0';
  }
LAB_0011582c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar5);
}

