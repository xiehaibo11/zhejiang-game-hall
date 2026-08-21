
long * FUN_00914b68(long *param_1,long param_2,long param_3,long param_4,long param_5,int param_6)

{
  ulong __n;
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  ulong local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
                    /* try { // try from 00914b7c to 00a14bab has its CatchHandler @ 00914aec */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1 == (long *)0x0) goto LAB_00914cc4;
  lVar4 = param_3 - param_2;
                    /* try { // try from 00914bac to 00a14bbf has its CatchHandler @ 00914c00 */
  __n = *(long *)(param_5 + 0x18) - (param_4 - param_2);
  if (__n == 0 || *(long *)(param_5 + 0x18) < param_4 - param_2) {
    __n = 0;
  }
                    /* try { // try from 00914bc0 to 00a14c1b has its CatchHandler @ 00914aec */
  if ((lVar4 < 1) || (lVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2,lVar4), lVar2 == lVar4)
     ) {
    if (0 < (long)__n) {
      local_78 = 0;
      local_70 = (void *)0x0;
      local_80 = 0;
      if (__n < 0x17) {
                    /* catch() { ... } // from try @ 00914b3c with catch @ 00914c00
                       catch() { ... } // from try @ 00914bac with catch @ 00914c00 */
        pvVar5 = (void *)((ulong)&local_80 | 1);
        local_80 = (ulong)(byte)((int)__n << 1);
      }
      else {
        uVar3 = __n + 0x10 & 0xfffffffffffffff0;
        pvVar5 = operator_new(uVar3);
        local_80 = uVar3 | 1;
        local_78 = __n;
        local_70 = pvVar5;
      }
      memset(pvVar5,param_6,__n);
      *(undefined1 *)((long)pvVar5 + __n) = 0;
      pvVar5 = (void *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        pvVar5 = local_70;
      }
      uVar3 = (**(code **)(*param_1 + 0x60))(param_1,pvVar5,__n);
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if (uVar3 != __n) goto LAB_00914cc0;
    }
    param_4 = param_4 - param_3;
    if ((param_4 < 1) ||
       (lVar4 = (**(code **)(*param_1 + 0x60))(param_1,param_3,param_4), lVar4 == param_4)) {
      *(undefined8 *)(param_5 + 0x18) = 0;
      goto LAB_00914cc4;
    }
  }
LAB_00914cc0:
  param_1 = (long *)0x0;
LAB_00914cc4:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

