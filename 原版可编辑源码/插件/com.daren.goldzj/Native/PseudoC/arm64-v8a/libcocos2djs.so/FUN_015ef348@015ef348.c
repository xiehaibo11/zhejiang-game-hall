
void FUN_015ef348(uchar *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  uchar *local_60;
  char local_58;
  char *local_50;
  long local_48;
  char *local_40;
  undefined7 uStack_38;
  undefined1 local_31;
  undefined7 uStack_30;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  local_50 = *(char **)(param_1 + 0x10);
  if ((uint)(*(int *)(param_1 + 0x18) - (int)local_50) < 8) {
    v8::internal::wasm::Decoder::errorf(param_1,local_50,"expected %u bytes, fell off end",8);
    local_50 = *(char **)(param_1 + 0x18);
  }
  else {
    local_50 = local_50 + 8;
  }
  *(char **)(param_1 + 0x10) = local_50;
  local_58 = '\0';
  local_60 = param_1;
  local_40 = local_50;
  FUN_015efa60(&local_60);
  uVar6 = (ulong)param_1[0x30];
  if ((param_1[0x30] & 1) == 0) goto LAB_015ef3ac;
LAB_015ef3a4:
  uVar7 = *(ulong *)(param_1 + 0x38);
  do {
    bVar3 = local_60[0x30];
    if (uVar7 != 0) {
LAB_015ef400:
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0) {
LAB_015ef418:
          if (*(ulong *)(local_60 + 0x10) < *(ulong *)(local_60 + 0x18)) {
            iVar1 = *(int *)(param_1 + 0x10);
            iVar2 = *(int *)(param_1 + 8);
            *(long *)(param_1 + 8) = local_48;
            *(long *)(param_1 + 0x10) = local_48;
            *(ulong *)(param_1 + 0x18) = local_48 + (ulong)(uint)((int)local_40 - (int)local_48);
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + (iVar1 - iVar2);
            uStack_30 = 0;
            uStack_38 = 0;
            local_31 = 0;
            param_1[0x28] = '\0';
            param_1[0x29] = '\0';
            param_1[0x2a] = '\0';
            param_1[0x2b] = '\0';
            if ((uVar6 & 1) == 0) {
              param_1[0x30] = '\0';
              param_1[0x31] = '\0';
            }
            else {
              **(undefined1 **)(param_1 + 0x40) = 0;
              param_1[0x38] = '\0';
              param_1[0x39] = '\0';
              param_1[0x3a] = '\0';
              param_1[0x3b] = '\0';
              param_1[0x3c] = '\0';
              param_1[0x3d] = '\0';
              param_1[0x3e] = '\0';
              param_1[0x3f] = '\0';
              if ((param_1[0x30] & 1) != 0) {
                operator_delete(*(void **)(param_1 + 0x40));
                param_1[0x30] = '\0';
                param_1[0x31] = '\0';
                param_1[0x32] = '\0';
                param_1[0x33] = '\0';
                param_1[0x34] = '\0';
                param_1[0x35] = '\0';
                param_1[0x36] = '\0';
                param_1[0x37] = '\0';
              }
            }
            param_1[0x30] = '\0';
            uVar5 = 1;
            *(ulong *)(param_1 + 0x38) = CONCAT71(uStack_30,local_31);
            param_1[0x40] = '\0';
            param_1[0x41] = '\0';
            param_1[0x42] = '\0';
            param_1[0x43] = '\0';
            param_1[0x44] = '\0';
            param_1[0x45] = '\0';
            param_1[0x46] = '\0';
            param_1[0x47] = '\0';
            *(ulong *)(param_1 + 0x31) = CONCAT17(local_31,uStack_38);
            goto LAB_015ef470;
          }
        }
      }
      else if (*(long *)(local_60 + 0x38) == 0) goto LAB_015ef418;
      uVar5 = 0;
LAB_015ef470:
      if (*(long *)(lVar4 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar5);
      }
      return;
    }
    if ((bVar3 & 1) != 0) {
      if (*(long *)(local_60 + 0x38) == 0) goto LAB_015ef3d4;
      goto LAB_015ef400;
    }
    if (bVar3 >> 1 != 0) goto LAB_015ef400;
LAB_015ef3d4:
    if ((*(ulong *)(local_60 + 0x18) <= *(ulong *)(local_60 + 0x10)) || (local_58 == '\x0e'))
    goto LAB_015ef400;
    FUN_015ef850(&local_60);
    uVar6 = (ulong)param_1[0x30];
    if ((param_1[0x30] & 1) != 0) goto LAB_015ef3a4;
LAB_015ef3ac:
    uVar7 = uVar6 >> 1;
  } while( true );
}

