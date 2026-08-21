
void FUN_00a6a210(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                 uint *param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  time_t tVar4;
  undefined8 *__s;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  tVar4 = time((time_t *)0x0);
  uVar1 = *(int *)(param_3 + 0x18) + 0x30;
  __s = (undefined8 *)(*(code *)PTR_malloc_017699f8)((ulong)uVar1);
  if (__s != (undefined8 *)0x0) {
    memset(__s,0,(ulong)uVar1);
    FUN_00a241ac(__s + 2,*(int *)(param_3 + 0x18) + 0x20,&DAT_013cc00c,0,0,0,0);
    FUN_00a5a2ac(tVar4 * 10000000 + 0x19db1ded53e8000,__s + 3);
    __s[4] = *param_2;
    memcpy((void *)((long)__s + 0x2c),*(void **)(param_3 + 0x10),(ulong)*(uint *)(param_3 + 0x18));
    __s[1] = *(undefined8 *)(param_3 + 8);
    iVar2 = *(int *)(param_3 + 0x18);
    lVar5 = FUN_00a697fc(&PTR_MD5_Init_016a4cf0,param_1,0x10);
    if (lVar5 != 0) {
      FUN_00a69990(lVar5,__s + 1,iVar2 + 0x28);
      FUN_00a699b0(lVar5,&local_78);
      uVar6 = 0;
      __s[1] = uStack_70;
      *__s = local_78;
      *param_4 = __s;
      *param_5 = uVar1;
      goto LAB_00a6a36c;
    }
    (*(code *)PTR_free_01769a00)(__s);
  }
  uVar6 = 0x1b;
LAB_00a6a36c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

