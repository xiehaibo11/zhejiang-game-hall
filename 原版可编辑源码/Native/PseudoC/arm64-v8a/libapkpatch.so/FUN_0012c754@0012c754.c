
void FUN_0012c754(long param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = param_2 & 0xff;
  if (uVar1 < 0x29) {
    if (uVar1 == 0x28) {
      iVar4 = -1;
    }
    else {
      iVar4 = (param_2 & 1 | 2) << (ulong)((uVar1 >> 1) + 0xb & 0x1f);
    }
    local_2f = (undefined1)iVar4;
    local_30 = 4;
    local_2e = (undefined1)((uint)iVar4 >> 8);
    local_2d = (undefined1)((uint)iVar4 >> 0x10);
    local_2c = (undefined1)((uint)iVar4 >> 0x18);
    uVar3 = FUN_0012c644(param_1 + 0x10,&local_30,5,param_3);
  }
  else {
    uVar3 = 4;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

