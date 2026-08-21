
undefined4 FUN_00e6f148(__jmp_buf_tag *param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 local_24;
  
  iVar2 = setjmp(param_1);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      local_24 = FT_Outline_Decompose(param_1[1].__saved_mask.__val + 9,&PTR_FUN_01c97920,param_1);
      iVar2 = (int)param_1[1].__saved_mask.__val[2];
    }
    else {
      FUN_00e851f0();
      local_24 = FT_Outline_Decompose(param_1[1].__saved_mask.__val + 9,&PTR_FUN_01c97920,param_1);
      FUN_00e851f4();
      iVar2 = (int)param_1[1].__saved_mask.__val[2];
    }
    if (iVar2 == 0) {
      piVar3 = (int *)(param_1[1].__saved_mask.__val[3] +
                      (long)(*(int *)((long)param_1[1].__jmpbuf + 0x3c) -
                            (int)param_1[1].__saved_mask.__val[0]) * 8);
      piVar4 = *(int **)piVar3;
      iVar2 = (int)param_1[1].__jmpbuf[7];
      if ((piVar4 != (int *)0x0) && (iVar5 = *piVar4, iVar5 <= iVar2)) {
        do {
          piVar3 = piVar4;
          if (iVar5 == iVar2) {
            uVar7 = NEON_rev64(param_1[1].__saved_mask.__val[1],4);
            *(ulong *)(piVar3 + 1) =
                 CONCAT44((int)((ulong)*(undefined8 *)(piVar3 + 1) >> 0x20) +
                          (int)((ulong)uVar7 >> 0x20),(int)*(undefined8 *)(piVar3 + 1) + (int)uVar7)
            ;
            return local_24;
          }
          piVar4 = *(int **)(piVar3 + 4);
        } while ((piVar4 != (int *)0x0) && (iVar5 = *piVar4, iVar5 <= iVar2));
        piVar3 = piVar3 + 4;
      }
      uVar1 = param_1[1].__saved_mask.__val[6];
      if ((long)param_1[1].__saved_mask.__val[5] <= (long)uVar1) {
                    /* WARNING: Subroutine does not return */
        longjmp(param_1,1);
      }
      uVar6 = param_1[1].__saved_mask.__val[4];
      param_1[1].__saved_mask.__val[6] = uVar1 + 1;
      piVar4 = (int *)(uVar6 + uVar1 * 0x18);
      *piVar4 = iVar2;
      uVar7 = NEON_rev64(param_1[1].__saved_mask.__val[1],4);
      *(undefined8 *)(piVar4 + 1) = uVar7;
      *(undefined8 *)(piVar4 + 4) = *(undefined8 *)piVar3;
      *(int **)piVar3 = piVar4;
    }
  }
  else {
    local_24 = 0x40;
  }
  return local_24;
}

