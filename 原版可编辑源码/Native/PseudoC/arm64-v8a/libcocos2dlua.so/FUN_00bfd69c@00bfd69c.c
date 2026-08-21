
void FUN_00bfd69c(undefined8 param_1,long *param_2,char *param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined1 *puVar5;
  size_t sVar6;
  long lVar7;
  ulong uVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  char *pcVar12;
  uint local_3c;
  int local_30;
  uint local_2c;
  int local_c;
  char *local_8;
  
  if ((int)param_4 < 0) {
    uVar10 = ~param_4;
    local_2c = 0xffffffff;
    local_30 = -1;
  }
  else {
    local_30 = 1;
    uVar10 = 0;
    local_2c = param_4;
    if (param_4 == 0) {
      return;
    }
  }
  local_3c = 0;
  uVar11 = 1;
LAB_00bfd710:
  lVar3 = FUN_00bfc824(param_1,uVar10,&local_c);
  if (lVar3 != 0) {
    lVar1 = 0;
    if (local_c != 0) {
      lVar1 = lVar3 + (long)local_c * 8;
    }
    uVar8 = *(ulong *)(lVar3 + -8) & 0x7fffffffffff;
    pcVar12 = param_3;
LAB_00bfd748:
    cVar9 = *pcVar12;
    if (cVar9 != '\0') {
      do {
        pcVar12 = pcVar12 + 1;
        switch(cVar9) {
        case 'F':
        case 'f':
          goto switchD_00bfd7d0_caseD_46;
        default:
          pcVar4 = (char *)*param_2;
          if ((int)param_2[1] == (int)pcVar4) {
            pcVar4 = (char *)FUN_00c1a4a8(param_2,1);
          }
          *pcVar4 = cVar9;
          *param_2 = (long)(pcVar4 + 1);
          cVar9 = *pcVar12;
          if (cVar9 == '\0') goto joined_r0x00bfd78c;
          break;
        case 'Z':
          local_3c = (int)*param_2 - (int)param_2[2];
          goto LAB_00bfd748;
        case 'l':
          goto switchD_00bfd7d0_caseD_6c;
        case 'p':
          uVar11 = 0;
          goto LAB_00bfd748;
        }
      } while( true );
    }
    goto joined_r0x00bfd78c;
  }
  if (local_30 != 1) goto code_r0x00bfd970;
  goto LAB_00bfd790;
switchD_00bfd7d0_caseD_46:
  lVar7 = FUN_00bfcc0c(param_1,lVar3,&local_8);
  if (lVar7 != 0) {
    if ((cVar9 == 'F') && (*(char *)(uVar8 + 10) == '\0')) {
      iVar2 = *(int *)(*(long *)(uVar8 + 0x20) + -0x20);
      if (iVar2 != -1) {
        FUN_00bfc604(param_2,*(undefined8 *)(*(long *)(uVar8 + 0x20) + -0x28),iVar2,uVar11);
        puVar5 = (undefined1 *)*param_2;
        if ((int)param_2[1] == (int)puVar5) {
          puVar5 = (undefined1 *)FUN_00c1a4a8(param_2,1);
        }
        *puVar5 = 0x3a;
        *param_2 = (long)(puVar5 + 1);
      }
    }
    pcVar4 = local_8;
    sVar6 = strlen(local_8);
    FUN_00c1a5d8(param_2,pcVar4,sVar6);
    goto LAB_00bfd748;
  }
switchD_00bfd7d0_caseD_6c:
  if (*(byte *)(uVar8 + 10) != 0) {
    if (*(byte *)(uVar8 + 10) < 2) {
      puVar5 = (undefined1 *)*param_2;
      if ((int)param_2[1] == (int)puVar5) {
        puVar5 = (undefined1 *)FUN_00c1a4a8(param_2,1);
      }
      *puVar5 = 0x40;
      *param_2 = (long)(puVar5 + 1);
      FUN_00bff758(param_2,*(undefined8 *)(uVar8 + 0x28));
    }
    else {
      FUN_00c1a5d8(param_2,"[builtin#",9);
      FUN_00bff62c(param_2,*(undefined1 *)(uVar8 + 10));
      puVar5 = (undefined1 *)*param_2;
      if ((int)param_2[1] == (int)puVar5) {
        puVar5 = (undefined1 *)FUN_00c1a4a8(param_2,1);
      }
      *puVar5 = 0x5d;
      *param_2 = (long)(puVar5 + 1);
    }
    goto LAB_00bfd748;
  }
  lVar7 = *(long *)(uVar8 + 0x20);
  iVar2 = FUN_00bfc604(param_2,*(undefined8 *)(lVar7 + -0x28),*(undefined4 *)(lVar7 + -0x20),uVar11)
  ;
  if (iVar2 == 0) goto LAB_00bfd748;
  if (cVar9 == 'l') {
    iVar2 = FUN_00bfc748(param_1,uVar8,lVar1);
    puVar5 = (undefined1 *)*param_2;
    if ((int)param_2[1] != (int)puVar5) goto LAB_00bfd8ec;
  }
  else {
    puVar5 = (undefined1 *)*param_2;
    iVar2 = *(int *)(lVar7 + -0x20);
    if ((int)param_2[1] != (int)puVar5) goto LAB_00bfd8ec;
  }
  puVar5 = (undefined1 *)FUN_00c1a4a8(param_2,1);
LAB_00bfd8ec:
  *puVar5 = 0x3a;
  *param_2 = (long)(puVar5 + 1);
  if (iVar2 < 0) {
    iVar2 = *(int *)(lVar7 + -0x20);
  }
  FUN_00bff62c(param_2,iVar2);
  goto LAB_00bfd748;
code_r0x00bfd970:
  uVar10 = uVar10 - local_c;
joined_r0x00bfd78c:
  uVar10 = uVar10 + local_30;
  if (local_2c == uVar10) {
LAB_00bfd790:
    if (local_3c != 0) {
      *param_2 = param_2[2] + (ulong)local_3c;
    }
    return;
  }
  goto LAB_00bfd710;
}

