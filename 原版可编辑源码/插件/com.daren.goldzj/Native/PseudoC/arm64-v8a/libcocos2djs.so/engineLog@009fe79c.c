
/* WARNING: Removing unreachable block (ram,0x009fe87c) */
/* universe::Translated::engineLog(char const*, char const*) */

void __thiscall universe::Translated::engineLog(Translated *this,char *param_1,char *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined1 local_90;
  undefined7 uStack_8f;
  long local_88;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  buildContent(this,param_1,param_2);
  local_50 = (long *)0x0;
  local_50 = operator_new(0x38);
  local_50[3] = (long)this;
  *(undefined1 *)(local_50 + 4) = local_98;
  *local_50 = (long)&PTR____func_01c6c6d0;
  local_50[2] = 0;
  local_50[1] = (long)_log;
  local_50[5] = CONCAT71(uStack_8f,local_90);
  local_50[6] = local_88;
  *(ulong *)((long)local_50 + 0x21) = CONCAT17(local_90,uStack_97);
  core::Flags::post((Flags *)(this + 8),(function *)alStack_70);
  if (alStack_70 == local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_009fe874;
    pcVar2 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar2)();
LAB_009fe874:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

