
void png_user_version_check(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined1 auStack_b8 [128];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x20000;
  }
  else {
    lVar4 = 0;
    iVar5 = 0;
    do {
      cVar1 = *(char *)(param_2 + lVar4);
      if (cVar1 != (&DAT_01447da8)[lVar4]) {
        *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x20000;
      }
      if (cVar1 == '.') {
        iVar5 = iVar5 + 1;
      }
    } while (((iVar5 < 2) && (lVar4 != 6)) && (lVar4 = lVar4 + 1, cVar1 != '\0'));
    if ((*(uint *)(param_1 + 0x168) >> 0x11 & 1) == 0) {
      uVar3 = 1;
      goto LAB_010bc820;
    }
  }
  uVar3 = png_safecat(auStack_b8,0x80,0,"Application built with libpng-");
  uVar3 = png_safecat(auStack_b8,0x80,uVar3,param_2);
  uVar3 = png_safecat(auStack_b8,0x80,uVar3," but running with ");
  png_safecat(auStack_b8,0x80,uVar3,&DAT_01447da8);
  png_warning(param_1,auStack_b8);
  uVar3 = 0;
LAB_010bc820:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

