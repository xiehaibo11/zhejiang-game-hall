
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00119d44(long param_1,long param_2,ulong *param_3,undefined2 *param_4,undefined8 param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_10;
  long local_8;
  
  pcVar5 = *(code **)(param_2 + 0x18);
  uVar7 = *param_3;
  local_8 = ___stack_chk_guard;
  *param_3 = uVar7 + 1;
  uVar4 = (*pcVar5)(param_1,uVar7 & 0xfffffffffffffff8,&local_10,0);
  uVar3 = local_10;
  if (-1 < (int)uVar4) {
    uVar6 = *param_3;
    pcVar5 = *(code **)(param_2 + 0x18);
    *param_3 = uVar6 + 1;
    uVar4 = (*pcVar5)(param_1,uVar6 & 0xfffffffffffffff8,&local_10,0,param_5);
    uVar1 = (undefined1)
            (local_10 >>
            ((ulong)(uint)(((int)uVar6 - (int)(uVar6 & 0xfffffffffffffff8)) * 8) & 0x3f));
    if (-1 < (int)uVar4) {
      uVar2 = (undefined1)
              (uVar3 >> ((ulong)(uint)(((int)uVar7 - (int)(uVar7 & 0xfffffffffffffff8)) * 8) & 0x3f)
              );
      if (*(int *)(param_1 + 0x40) == 0) {
        *param_4 = CONCAT11(uVar1,uVar2);
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        *param_4 = CONCAT11(uVar2,uVar1);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

