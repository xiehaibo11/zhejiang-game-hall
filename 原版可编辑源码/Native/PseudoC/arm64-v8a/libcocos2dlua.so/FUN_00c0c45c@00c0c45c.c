
void FUN_00c0c45c(long *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_18 [24];
  
  iVar3 = *(int *)((long)param_1 + 0x34);
  lVar6 = *param_1;
  if (iVar3 == 0x28) {
    lVar2 = param_1[0xe];
    FUN_00c079c0();
    FUN_00c0ad38(param_1,param_2,0);
    FUN_00c086ac(param_1,0x29,0x28,(int)lVar2);
    FUN_00c08060(*param_1,param_2);
  }
  else {
    if ((iVar3 != 0x10a) && (iVar3 != 0x11f)) {
                    /* WARNING: Subroutine does not return */
      FUN_00c07bc4(param_1,0xa7b);
    }
    uVar5 = FUN_00c07cb4(param_1);
    FUN_00c084cc(lVar6,uVar5,param_2,1);
  }
LAB_00c0c4c8:
  do {
    iVar3 = *(int *)((long)param_1 + 0x34);
    while (iVar3 != 0x2e) {
      if (iVar3 == 0x5b) {
        FUN_00c08cac(lVar6,param_2);
        FUN_00c079c0(param_1);
        FUN_00c0ad38(param_1,auStack_18,0);
        FUN_00c08d80(*param_1,auStack_18);
        FUN_00c07cfc(param_1,0x5d);
        FUN_00c08d98(lVar6,param_2 + 1,param_2 + 2,auStack_18);
        goto LAB_00c0c4c8;
      }
      if (iVar3 == 0x3a) {
        FUN_00c079c0(param_1);
        uVar5 = FUN_00c07cb4(param_1);
        iVar3 = FUN_00c08cac(lVar6,param_2);
        if (param_2[2] == 0xc) {
          FUN_00c07f1c(lVar6,*param_2);
        }
        iVar1 = *(int *)(lVar6 + 0x34);
        FUN_00c07f70(lVar6,(iVar1 + 2) * 0x100 | 0x12U | iVar3 << 0x10);
        uVar4 = FUN_00c07b10(lVar6,uVar5,0xfffffffb);
        if (uVar4 < 0x100) {
          FUN_00c07f38(lVar6,3);
          *(int *)(lVar6 + 0x34) = *(int *)(lVar6 + 0x34) + 3;
          FUN_00c07f70(lVar6,iVar1 << 8 | 0x39U | iVar3 << 0x18 | uVar4 << 0x10);
        }
        else {
          FUN_00c07f38(lVar6,4);
          *(int *)(lVar6 + 0x34) = *(int *)(lVar6 + 0x34) + 4;
          FUN_00c07f70(lVar6,(iVar1 + 3) * 0x100 | 0x27U | uVar4 << 0x10);
          FUN_00c07f70(lVar6,iVar1 << 8 | 0x38U | (iVar1 + 3) * 0x10000 | iVar3 << 0x18);
          *(int *)(lVar6 + 0x34) = *(int *)(lVar6 + 0x34) + -1;
        }
        *param_2 = iVar1;
        param_2[2] = 0xc;
        FUN_00c0c20c(param_1,param_2);
        goto LAB_00c0c4c8;
      }
      if ((iVar3 != 0x120 && iVar3 != 0x28) && (iVar3 != 0x7b)) {
        return;
      }
      FUN_00c08060(lVar6,param_2);
      if (param_2[2] == 0xc) {
        FUN_00c07f1c(lVar6,*param_2);
      }
      uVar4 = *(int *)(lVar6 + 0x34) + 1;
      if (*(byte *)(lVar6 + 0x5a) < uVar4) {
        if (0xf9 < uVar4) goto LAB_00c0c76c;
        *(char *)(lVar6 + 0x5a) = (char)uVar4;
      }
      *(uint *)(lVar6 + 0x34) = uVar4;
      FUN_00c08ac0(lVar6,param_2);
      uVar4 = *(int *)(lVar6 + 0x34) + 1;
      if (*(byte *)(lVar6 + 0x5a) < uVar4) {
        if (0xf9 < uVar4) {
LAB_00c0c76c:
                    /* WARNING: Subroutine does not return */
          entry(lVar6);
        }
        *(char *)(lVar6 + 0x5a) = (char)uVar4;
      }
      *(uint *)(lVar6 + 0x34) = uVar4;
      FUN_00c0c20c(param_1,param_2);
      iVar3 = *(int *)((long)param_1 + 0x34);
    }
    FUN_00c0906c(param_1,param_2);
  } while( true );
}

