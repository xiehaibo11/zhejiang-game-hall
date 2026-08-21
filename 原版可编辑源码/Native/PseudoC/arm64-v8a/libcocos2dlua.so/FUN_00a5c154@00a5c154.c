
void FUN_00a5c154(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_448 [1024];
  long local_48;
  
                    /* try { // try from 00a5c160 to 00b5c1af has its CatchHandler @ 00a5c5e4 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_3 + 0x10));
                    /* try { // try from 00a5c1bc to 00b5c1cb has its CatchHandler @ 00a5c5a0 */
  *(undefined8 *)(param_3 + 0x10) = 0;
                    /* try { // try from 00a5c1d4 to 00b5c1eb has its CatchHandler @ 00a5c59c */
  *(undefined4 *)(param_3 + 0x18) = 0;
                    /* try { // try from 00a5c204 to 00b5c223 has its CatchHandler @ 00a5c5b4 */
  FUN_00a241ac(auStack_448,0x400,&DAT_013c97a6,0,0,0,0,6,0x82,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
               &DAT_013c996e,&DAT_013c996e);
  FUN_00a2f7a0(0,auStack_448,0x20,param_4,param_5);
                    /* try { // try from 00a5c234 to 00b5c267 has its CatchHandler @ 00a5c5d4 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

