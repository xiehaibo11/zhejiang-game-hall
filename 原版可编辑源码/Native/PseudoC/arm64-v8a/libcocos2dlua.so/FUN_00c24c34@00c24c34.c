
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c24c34(long param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  FILE *__stream;
  undefined4 uVar7;
  ulong *puVar8;
  char acStack_108 [256];
  long local_8;
  
  pcVar6 = (char *)(param_3 + 0x18);
  local_8 = ___stack_chk_guard;
  pcVar2 = strchr(pcVar6,0x2f);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = strchr(pcVar6,0x2e);
    if (pcVar2 == (char *)0x0) {
      pcVar6 = (char *)FUN_00c00c18(param_1,"%s.so",pcVar6);
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
    }
    if (((*pcVar6 == 'l') && (pcVar6[1] == 'i')) && (pcVar6[2] == 'b')) goto LAB_00c24c7c;
    uVar4 = FUN_00c00c18(param_1,"lib%s",pcVar6);
    uVar7 = 0x101;
    if (param_4 == 0) {
      uVar7 = 1;
    }
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
    lVar3 = dlopen(uVar4,uVar7);
  }
  else {
LAB_00c24c7c:
    uVar7 = 0x101;
    if (param_4 == 0) {
      uVar7 = 1;
    }
    lVar3 = dlopen(pcVar6,uVar7);
  }
  if (lVar3 != 0) {
LAB_00c24c98:
    uVar4 = FUN_00c1b840(param_1,0,0);
    uVar5 = FUN_00c1cb88(param_1,0x10,uVar4);
    *(undefined8 *)(uVar5 + 0x38) = uVar4;
    *(undefined1 *)(uVar5 + 10) = 2;
    puVar8 = *(ulong **)(param_1 + 0x28);
    *(undefined8 *)(uVar5 + 0x20) = param_2;
    *(ulong **)(param_1 + 0x28) = puVar8 + 1;
    *puVar8 = uVar5 | 0xfff9800000000000;
    *(long *)(uVar5 + 0x30) = lVar3;
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pcVar6 = (char *)dlerror();
  if ((*pcVar6 == '/') && (pcVar2 = strchr(pcVar6,0x3a), pcVar2 != (char *)0x0)) {
    lVar3 = FUN_00bfba1c(param_1,pcVar6,(long)pcVar2 - (long)pcVar6);
    __stream = fopen((char *)(lVar3 + 0x18),"r");
    if (__stream != (FILE *)0x0) {
      pcVar2 = fgets(acStack_108,0x100,__stream);
      if (pcVar2 == (char *)0x0) {
LAB_00c24e1c:
        fclose(__stream);
      }
      else {
        iVar1 = strncmp(acStack_108,"/* GNU ld script",0x10);
        if (iVar1 == 0) {
          do {
            pcVar2 = fgets(acStack_108,0x100,__stream);
            if (pcVar2 == (char *)0x0) goto LAB_00c24e1c;
            lVar3 = FUN_00c24a04(param_1,acStack_108);
          } while (lVar3 == 0);
          fclose(__stream);
        }
        else {
          lVar3 = FUN_00c24a04(param_1,acStack_108);
          fclose(__stream);
          if (lVar3 == 0) goto LAB_00c24e24;
        }
        uVar7 = 0x101;
        if (param_4 == 0) {
          uVar7 = 1;
        }
        lVar3 = dlopen(lVar3,uVar7);
        if (lVar3 != 0) goto LAB_00c24c98;
        pcVar6 = (char *)dlerror();
      }
    }
  }
LAB_00c24e24:
                    /* WARNING: Subroutine does not return */
  FUN_00bfb194(param_1,pcVar6);
}

