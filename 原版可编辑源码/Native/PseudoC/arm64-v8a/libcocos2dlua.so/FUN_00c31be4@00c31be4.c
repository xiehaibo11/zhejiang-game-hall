
undefined8 FUN_00c31be4(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_00c29dd4(param_1,1);
  if (*(char *)(lVar3 + 10) == '\0') {
    iVar1 = FUN_00c29cf0(param_1,2);
    if (iVar1 - 1U < (uint)*(byte *)(lVar3 + 0xb)) {
      lVar4 = FUN_00c29dd4(param_1,3);
      uVar5 = 3;
      if (*(char *)(lVar4 + 10) != '\0') goto LAB_00c31cd8;
      iVar2 = FUN_00c29cf0(param_1,4);
      if (iVar2 - 1U < (uint)*(byte *)(lVar4 + 0xb)) {
        lVar4 = lVar4 + ((long)(int)(iVar2 - 1U) + 4) * 8;
        *(undefined8 *)(lVar3 + ((long)(int)(iVar1 - 1U) + 4) * 8 + 8) = *(undefined8 *)(lVar4 + 8);
        if (((*(byte *)(*(long *)(lVar4 + 8) + 8) & 3) != 0) &&
           ((*(byte *)(lVar3 + 8) >> 2 & 1) != 0)) {
          FUN_00c1a1ac(*(undefined8 *)(param_1 + 0x10),lVar3);
          return 0;
        }
        return 0;
      }
      uVar5 = 4;
    }
    else {
      uVar5 = 2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00bfb458(param_1,uVar5,0x446);
  }
  uVar5 = 1;
LAB_00c31cd8:
                    /* WARNING: Subroutine does not return */
  FUN_00bfb458(param_1,uVar5,0x25f);
}

