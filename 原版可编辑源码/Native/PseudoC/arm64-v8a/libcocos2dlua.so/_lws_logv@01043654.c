
void _lws_logv(uint param_1,char *param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  char acStack_148 [256];
  long local_48;
  
                    /* try { // try from 01043660 to 01143667 has its CatchHandler @ 0104371c */
                    /* try { // try from 01043668 to 01143737 has its CatchHandler @ 01043618 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_0177ece8 & param_1) != 0) {
    uStack_158 = param_3[3];
    local_160 = param_3[2];
    uStack_168 = param_3[1];
    local_170 = *param_3;
    uVar2 = vsnprintf(acStack_148,0xff,param_2,&local_170);
    if (0xfe < uVar2) {
      uVar2 = 0xff;
    }
    if (0 < (int)uVar2) {
      acStack_148[uVar2] = '\0';
    }
    (*(code *)PTR_lwsl_emit_stderr_0177ecf0)(param_1,acStack_148);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

