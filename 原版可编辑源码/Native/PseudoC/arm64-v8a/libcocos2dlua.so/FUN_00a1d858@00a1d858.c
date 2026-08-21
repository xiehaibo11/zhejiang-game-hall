
void FUN_00a1d858(long param_1,char *param_2,uint param_3,ulong param_4)

{
  char cVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  char local_4c;
  byte local_4b;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((*(uint *)(param_1 + 0x44) & 0xff) == 0) {
    uVar6 = 0;
    if (param_3 < 0x80) {
LAB_00a1d8e0:
      if (uVar6 < param_4) {
        *param_2 = (char)param_3;
        *(undefined4 *)(param_1 + 0x44) = 0;
        uVar4 = (ulong)((uint)uVar6 | 1);
        goto LAB_00a1d904;
      }
    }
    else {
LAB_00a1d944:
      iVar3 = FUN_00a208f0(&local_4c,param_3);
      if (iVar3 == -1) {
LAB_00a1d980:
        uVar4 = FUN_00a20bf4(&local_4c,param_3);
        if ((int)uVar4 == -1) goto LAB_00a1d904;
        if ((int)uVar4 != 2) {
LAB_00a1da0c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((param_3 & 0xffffffdf) == 0xca) {
          if ((local_4c == -0x78) && ((local_4b == 0x66 || (local_4b == 0xa7)))) {
            *(uint *)(param_1 + 0x44) = (uint)local_4b;
            uVar4 = uVar6;
            goto LAB_00a1d904;
          }
          goto LAB_00a1da0c;
        }
      }
      else {
        if (iVar3 != 2) goto LAB_00a1da0c;
        if ((local_4c == -0x39) || ((local_4c == -0x3a && (0xa0 < local_4b)))) goto LAB_00a1d980;
      }
      uVar4 = (ulong)((int)uVar6 + 2);
      if (uVar4 <= param_4) {
        *param_2 = local_4c;
        param_2[1] = local_4b;
        *(undefined4 *)(param_1 + 0x44) = 0;
        goto LAB_00a1d904;
      }
    }
  }
  else {
    cVar1 = (char)*(uint *)(param_1 + 0x44);
    if ((param_3 | 8) == 0x30c) {
      if (1 < param_4) {
        *param_2 = -0x78;
        param_2[1] = cVar1 + ((byte)(param_3 >> 2) & 6) + -4;
        *(undefined4 *)(param_1 + 0x44) = 0;
        uVar4 = 2;
        goto LAB_00a1d904;
      }
    }
    else if (1 < param_4) {
      param_2[1] = cVar1;
      pcVar5 = param_2 + 2;
      *param_2 = -0x78;
      uVar6 = 2;
      param_2 = pcVar5;
      if (param_3 < 0x80) goto LAB_00a1d8e0;
      goto LAB_00a1d944;
    }
  }
  uVar4 = 0xfffffffe;
LAB_00a1d904:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

