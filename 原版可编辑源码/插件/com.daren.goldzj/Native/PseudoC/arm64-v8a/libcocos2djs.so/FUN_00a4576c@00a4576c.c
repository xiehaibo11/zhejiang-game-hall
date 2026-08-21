
void FUN_00a4576c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_448 [1024];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined4 *)(param_3 + 0x18) = 0;
  FUN_00a0e7c4(auStack_448,0x400,&DAT_01896e72,0,0,0,0,6,0x82,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
               &DAT_0189703a,&DAT_0189703a);
  FUN_00a19db8(0,auStack_448,0x20,param_4,param_5);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

