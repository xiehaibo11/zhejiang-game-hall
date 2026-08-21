
undefined4 uv_try_write(long param_1,void *param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 ***local_c8;
  undefined8 ***local_c0;
  uint local_b8;
  undefined1 *local_b0;
  uint local_a8;
  undefined4 local_a4;
  undefined1 auStack_a0 [64];
  
  if ((*(long *)(param_1 + 0x78) == 0) && (*(long *)(param_1 + 0x60) == 0)) {
    lVar1 = param_1 + 0x88;
    iVar2 = FUN_011a393c(lVar1,4);
    if (*(int *)(param_1 + 0xb8) < 0) {
      uVar4 = 0xfffffff7;
    }
    else if (*(char *)(param_1 + 0x59) < '\0') {
      lVar5 = *(long *)(param_1 + 0x60);
      *(int *)(*(long *)(param_1 + 8) + 0x20) = *(int *)(*(long *)(param_1 + 8) + 0x20) + 1;
      local_a4 = 0;
      local_b0 = auStack_a0;
      local_c8 = &local_c8;
      local_c0 = &local_c8;
      if ((param_3 < 5) || (local_b0 = malloc((ulong)param_3 << 4), local_b0 != (undefined1 *)0x0))
      {
        memcpy(local_b0,param_2,(ulong)param_3 << 4);
        local_b8 = 0;
        local_a8 = param_3;
        lVar3 = FUN_011a1a9c(param_2,param_3);
        local_c8 = (undefined8 ***)(param_1 + 0xc0);
        *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + lVar3;
        local_c0 = *(undefined8 ****)(param_1 + 200);
        *local_c0 = &local_c8;
        *(undefined8 *****)(param_1 + 200) = &local_c8;
        if (*(long *)(param_1 + 0x78) == 0) {
          if (lVar5 == 0) {
            FUN_011a90dc(param_1);
          }
          else {
            FUN_011a3688(*(undefined8 *)(param_1 + 8),lVar1,4);
          }
        }
        lVar5 = FUN_011a1a9c(param_2,param_3);
        if (local_b0 == (undefined1 *)0x0) {
          lVar3 = 0;
        }
        else {
          lVar3 = FUN_011a1a9c(local_b0 + (ulong)local_b8 * 0x10,local_a8 - local_b8);
        }
        *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) - lVar3;
        *local_c0 = local_c8;
        local_c8[1] = local_c0;
        *(int *)(*(long *)(param_1 + 8) + 0x20) = *(int *)(*(long *)(param_1 + 8) + 0x20) + -1;
        if (local_b0 != auStack_a0) {
          FUN_0119f27c();
        }
        local_b0 = (undefined1 *)0x0;
        if (iVar2 == 0) {
          FUN_011a37d8(*(undefined8 *)(param_1 + 8),lVar1,4);
        }
        uVar4 = 0xfffffff5;
        if (lVar5 - lVar3 != 0 || lVar3 == 0) {
          uVar4 = (undefined4)(lVar5 - lVar3);
        }
      }
      else {
        uVar4 = 0xfffffff4;
      }
    }
    else {
      uVar4 = 0xffffffe0;
    }
  }
  else {
    uVar4 = 0xfffffff5;
  }
  return uVar4;
}

