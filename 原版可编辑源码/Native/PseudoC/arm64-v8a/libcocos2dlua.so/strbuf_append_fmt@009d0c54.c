
void strbuf_append_fmt(long *param_1,int param_2,char *param_3,undefined8 param_4,undefined8 param_5
                      ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_b8 = param_4;
  uStack_b0 = param_5;
  local_a8 = param_6;
  uStack_a0 = param_7;
  local_98 = param_8;
  if ((int)((int)param_1[1] + ~*(uint *)((long)param_1 + 0xc)) < param_2) {
    strbuf_resize(param_1,*(uint *)((long)param_1 + 0xc) + param_2);
  }
  puStack_68 = &stack0xffffffffffffff70;
  puStack_60 = auStack_c0;
  uStack_58 = 0xffffff80ffffffd8;
  local_70 = (undefined1 *)register0x00000008;
  iVar2 = vsnprintf((char *)(*param_1 + (long)*(int *)((long)param_1 + 0xc)),(long)param_2,param_3,
                    &local_70);
  if (-1 < iVar2) {
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + iVar2;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_009d08d4("BUG: Unable to convert number");
}

