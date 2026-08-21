
void FUN_00bf9628(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar4 = *(long *)(param_1 + -0xc0);
  if (lVar4 == 0) {
    uv_close(param_1 + -0x98,FUN_00bf95dc);
    uv_fs_req_cleanup(param_1);
    return;
  }
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 == 0) {
    if ((*(int *)(param_1 + -0xb8) != 0) &&
       (((((*(int *)(param_1 + -0xb8) < 0 ||
           (*(long *)(param_1 + 0x240) != *(long *)(param_1 + 0xf8))) ||
          (*(long *)(param_1 + 0x230) != *(long *)(param_1 + 0xe8))) ||
         (((*(long *)(param_1 + 0x250) != *(long *)(param_1 + 0x108) ||
           (*(long *)(param_1 + 0x238) != *(long *)(param_1 + 0xf0))) ||
          ((*(long *)(param_1 + 0x228) != *(long *)(param_1 + 0xe0) ||
           ((*(long *)(param_1 + 0x248) != *(long *)(param_1 + 0x100) ||
            (*(long *)(param_1 + 0x1f0) != *(long *)(param_1 + 0xa8))))))))) ||
        ((*(long *)(param_1 + 0x1c0) != *(long *)(param_1 + 0x78) ||
         (((((*(long *)(param_1 + 0x1d0) != *(long *)(param_1 + 0x88) ||
             (*(long *)(param_1 + 0x1d8) != *(long *)(param_1 + 0x90))) ||
            (*(long *)(param_1 + 0x1e8) != *(long *)(param_1 + 0xa0))) ||
           ((*(long *)(param_1 + 0x1b8) != *(long *)(param_1 + 0x70) ||
            (*(long *)(param_1 + 0x208) != *(long *)(param_1 + 0xc0))))) ||
          (*(long *)(param_1 + 0x210) != *(long *)(param_1 + 200))))))))) {
      (**(code **)(param_1 + -0xa0))(lVar4,0,(void *)(param_1 + 0x1b8),(void *)(param_1 + 0x70));
    }
    memcpy((void *)(param_1 + 0x1b8),(void *)(param_1 + 0x70),0xa0);
    *(undefined4 *)(param_1 + -0xb8) = 1;
  }
  else if (lVar3 != *(int *)(param_1 + -0xb8)) {
    (**(code **)(param_1 + -0xa0))(lVar4,lVar3,param_1 + 0x1b8,&DAT_01d3bcb0);
    *(int *)(param_1 + -0xb8) = (int)*(undefined8 *)(param_1 + 0x58);
  }
  uv_fs_req_cleanup(param_1);
  if (*(long *)(param_1 + -0xc0) == 0) {
    uv_close(param_1 + -0x98,FUN_00bf95dc);
    return;
  }
  uVar6 = (ulong)*(uint *)(param_1 + -0xb4);
  lVar4 = uv_now(*(undefined8 *)(param_1 + -0xa8));
  uVar5 = lVar4 - *(long *)(param_1 + -0xb0);
  uVar1 = 0;
  if (uVar6 != 0) {
    uVar1 = uVar5 / uVar6;
  }
  iVar2 = uv_timer_start(param_1 + -0x98,FUN_00bf95e4,uVar6 - (uVar5 - uVar1 * uVar6),0);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}

