
void _lws_log(uint param_1,char *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 *local_1b0;
  undefined1 **ppuStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined1 *local_170;
  undefined1 **ppuStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  char acStack_148 [256];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puStack_1a0 = &local_1e0;
  ppuStack_1a8 = &local_1b0;
  uStack_198 = 0xffffff80ffffffd0;
  local_1e0 = param_3;
  uStack_1d8 = param_4;
  local_1d0 = param_5;
  uStack_1c8 = param_6;
  local_1c0 = param_7;
  uStack_1b8 = param_8;
  local_1b0 = (undefined1 *)register0x00000008;
  if ((DAT_0177ece8 & param_1) != 0) {
    local_170 = (undefined1 *)register0x00000008;
    ppuStack_168 = ppuStack_1a8;
    puStack_160 = puStack_1a0;
    uStack_158 = uStack_198;
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

