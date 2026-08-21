
void FUN_011ae670(long param_1)

{
  long *__src;
  long *__dest;
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar3 = *(long *)(param_1 + -0xc0);
  if (lVar3 == 0) {
    uv_close(param_1 + -0x98,FUN_011ae904);
    uv_fs_req_cleanup(param_1);
    return;
  }
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 == 0) {
    __src = (long *)(param_1 + 0x70);
    __dest = (long *)(param_1 + 0x1b8);
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
           ((*__dest != *__src || (*(long *)(param_1 + 0x208) != *(long *)(param_1 + 0xc0))))) ||
          (*(long *)(param_1 + 0x210) != *(long *)(param_1 + 200))))))))) {
      (**(code **)(param_1 + -0xa0))(lVar3,0,__dest,__src);
    }
    memcpy(__dest,__src,0xa0);
    uVar5 = 1;
  }
  else {
    if (lVar4 == *(int *)(param_1 + -0xb8)) goto LAB_011ae814;
    (**(code **)(param_1 + -0xa0))(lVar3,lVar4,param_1 + 0x1b8,&DAT_01793668);
    uVar5 = *(undefined4 *)(param_1 + 0x58);
  }
  *(undefined4 *)(param_1 + -0xb8) = uVar5;
LAB_011ae814:
  uv_fs_req_cleanup(param_1);
  if (*(long *)(param_1 + -0xc0) == 0) {
    uv_close(param_1 + -0x98,FUN_011ae904);
    return;
  }
  uVar7 = (ulong)*(uint *)(param_1 + -0xb4);
  lVar3 = uv_now(*(undefined8 *)(param_1 + -0xa8));
  uVar6 = lVar3 - *(long *)(param_1 + -0xb0);
  uVar1 = 0;
  if (uVar7 != 0) {
    uVar1 = uVar6 / uVar7;
  }
  iVar2 = uv_timer_start(param_1 + -0x98,FUN_011aea18,uVar7 - (uVar6 - uVar1 * uVar7),0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

