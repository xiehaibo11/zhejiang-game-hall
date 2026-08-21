
undefined8
log2Report(int param_1,ulong param_2,char *param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  size_t __n;
  long lVar2;
  undefined1 auStack_110 [8];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 *local_e0;
  undefined1 **ppuStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined1 **ppuStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  local_108 = param_4;
  local_100 = param_5;
  uStack_f8 = param_6;
  local_f0 = param_7;
  uStack_e8 = param_8;
  if (-1 < param_1) {
    uStack_a8 = 0xffffff80ffffffd8;
    local_c0 = (undefined1 *)register0x00000008;
    ppuStack_b8 = &local_e0;
    puStack_b0 = auStack_110;
    vsnprintf(&DAT_0013fe50,0x400,param_3,&local_c0);
    __n = strlen(&DAT_0013fe50);
    write(param_1,&DAT_0013fe50,__n);
  }
  if ((currentMode < 5) && ((param_2 & 1) == 0)) {
    uStack_c8 = 0xffffff80ffffffd8;
    local_e0 = (undefined1 *)register0x00000008;
    ppuStack_d8 = &local_e0;
    puStack_d0 = auStack_110;
    __android_log_vprint(4,"eup",param_3,&local_e0);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

