
void strbuf_append_fmt_retry
               (long *param_1,char *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
               ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  long local_70;
  
                    /* try { // try from 009d0d58 to 00ad0dc3 has its CatchHandler @ 009d8160 */
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  bVar3 = false;
  local_e0 = param_3;
  uStack_d8 = param_4;
  local_d0 = param_5;
  uStack_c8 = param_6;
  local_c0 = param_7;
  uStack_b8 = param_8;
  while( true ) {
    lVar4 = param_1[1];
    uVar1 = *(uint *)((long)param_1 + 0xc);
    uStack_78 = 0xffffff80ffffffd0;
    local_90 = (undefined1 *)register0x00000008;
    puStack_88 = &stack0xffffffffffffff50;
    puStack_80 = &local_e0;
    iVar5 = vsnprintf((char *)(*param_1 + (long)(int)uVar1),(long)(int)((int)lVar4 - uVar1),param_2,
                      &local_90);
    if (iVar5 <= (int)((int)lVar4 + ~uVar1)) {
      *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + iVar5;
      if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 009d0e48 to 00ad0e5b has its CatchHandler @ 009d8048 */
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (bVar3) break;
    strbuf_resize(param_1,*(int *)((long)param_1 + 0xc) + iVar5);
    bVar3 = true;
  }
                    /* try { // try from 009d0e60 to 00ad0ecb has its CatchHandler @ 009d815c */
                    /* WARNING: Subroutine does not return */
  FUN_009d08d4("BUG: length of formatted string changed");
}

