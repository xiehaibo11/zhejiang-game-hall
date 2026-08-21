
void FUN_0011991c(long param_1,long param_2,ulong *param_3,uint *param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar8 = *param_3;
  *param_3 = uVar8 + 1;
  uVar5 = (**(code **)(param_2 + 0x18))(param_1,uVar8 & 0xfffffffffffffff8,&local_70,0);
  uVar4 = local_70;
  if (-1 < (int)uVar5) {
    uVar10 = *param_3;
    *param_3 = uVar10 + 1;
    uVar5 = (**(code **)(param_2 + 0x18))(param_1,uVar10 & 0xfffffffffffffff8,&local_70,0,param_5);
    if (-1 < (int)uVar5) {
      uVar9 = *param_3;
      uVar6 = (uint)(uVar4 >> ((uVar8 - (uVar8 & 0xfffffffffffffff8)) * 8 & 0x3f));
      uVar7 = (uint)(local_70 >> ((uVar10 - (uVar10 & 0xfffffffffffffff8)) * 8 & 0x3f));
      iVar2 = *(int *)(param_1 + 0x40);
      *param_3 = uVar9 + 1;
      uVar1 = uVar6 & 0xff | uVar7 << 8;
      if (iVar2 != 0) {
        uVar1 = uVar7 & 0xff | uVar6 << 8;
      }
      uVar5 = (**(code **)(param_2 + 0x18))(param_1,uVar9 & 0xfffffffffffffff8,&local_70,0,param_5);
      uVar4 = local_70;
      if (-1 < (int)uVar5) {
        uVar8 = *param_3;
        *param_3 = uVar8 + 1;
        uVar5 = (**(code **)(param_2 + 0x18))
                          (param_1,uVar8 & 0xfffffffffffffff8,&local_70,0,param_5);
        if (-1 < (int)uVar5) {
          uVar6 = (uint)(local_70 >> ((uVar8 - (uVar8 & 0xfffffffffffffff8)) * 8 & 0x3f));
          uVar7 = (uint)(uVar4 >> ((uVar9 - (uVar9 & 0xfffffffffffffff8)) * 8 & 0x3f));
          if (*(int *)(param_1 + 0x40) == 0) {
            uVar1 = uVar1 & 0xffff | (uVar7 & 0xff | uVar6 << 8) << 0x10;
          }
          else {
            uVar1 = uVar6 & 0xff | (uVar7 & 0xff) << 8 | uVar1 << 0x10;
          }
          uVar5 = 0;
          *param_4 = uVar1;
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

