
undefined4 FUN_010b035c(__jmp_buf_tag *param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 local_14;
  
  iVar2 = setjmp(param_1);
  if (iVar2 == 0) {
    local_14 = FT_Outline_Decompose(param_1[10].__saved_mask.__val + 2,&PTR_FUN_0172c448,param_1);
    if ((int)param_1[1].__saved_mask.__val[8] == 0) {
      iVar2 = (int)param_1[1].__saved_mask.__val[6];
      uVar3 = param_1[1].__saved_mask.__val[7];
      if (uVar3 != 0 || iVar2 != 0) {
        uVar6 = param_1[1].__saved_mask.__val[4];
        puVar5 = (ulong *)(param_1[0xc].__jmpbuf[6] + *(long *)&param_1[1].__mask_was_saved * 8);
        puVar4 = (ulong *)*puVar5;
        if (param_1[1].__jmpbuf[7] <= (long)uVar6) {
          uVar6 = param_1[1].__jmpbuf[7];
        }
        while ((puVar4 != (ulong *)0x0 && ((long)*puVar4 <= (long)uVar6))) {
          if (*puVar4 == uVar6) goto LAB_010b0424;
          puVar5 = puVar4 + 3;
          puVar4 = (ulong *)*puVar5;
        }
        uVar1 = param_1[1].__saved_mask.__val[0xb];
        if ((long)param_1[1].__saved_mask.__val[10] <= (long)uVar1) {
                    /* WARNING: Subroutine does not return */
          longjmp(param_1,1);
        }
        uVar7 = param_1[1].__saved_mask.__val[9];
        param_1[1].__saved_mask.__val[0xb] = uVar1 + 1;
        puVar4 = (ulong *)(uVar7 + uVar1 * 0x20);
        *(undefined4 *)(puVar4 + 2) = 0;
        *puVar4 = uVar6;
        puVar4[1] = 0;
        puVar4[3] = *puVar5;
        *puVar5 = (ulong)puVar4;
LAB_010b0424:
        *(int *)(puVar4 + 2) = (int)puVar4[2] + iVar2;
        puVar4[1] = puVar4[1] + uVar3;
      }
    }
  }
  else {
    local_14 = 0x40;
  }
  return local_14;
}

