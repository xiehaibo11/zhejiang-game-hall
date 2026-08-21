
void FUN_00dd8950(long param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x350);
  if ((*(byte *)(lVar4 + 4) & 1) == 0) {
    if ((*(byte *)(lVar4 + 0x20) & 1) == 0) {
      uVar2 = 0xc;
      bVar3 = 1;
    }
    else {
      uVar2 = 0xd;
      bVar3 = *(int *)(lVar4 + 0x78) == 0 | 2;
    }
    FUN_00ddaa8c(param_1,bVar3,uVar2);
    FUN_00ddaa8c(param_1,bVar3,uVar2);
    FUN_00ddaa8c(param_1,bVar3,uVar2);
    FUN_00ddaa8c(param_1,bVar3,uVar2);
    FUN_00ddaa8c(param_1,bVar3,uVar2);
    FUN_00ddaa8c(param_1,bVar3,uVar2);
    if (*(long *)(param_1 + 0x370) <= *(long *)(param_1 + 0x390)) {
      TIFFFlushData1(param_1);
    }
    puVar1 = *(undefined1 **)(param_1 + 0x388);
    uVar2 = *(undefined4 *)(lVar4 + 0x48);
    *(undefined1 **)(param_1 + 0x388) = puVar1 + 1;
    *puVar1 = (char)uVar2;
    *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x390) + 1;
    *(undefined4 *)(lVar4 + 0x48) = 0;
    *(undefined4 *)(lVar4 + 0x4c) = 8;
  }
  return;
}

