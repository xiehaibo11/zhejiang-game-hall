
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void log2File(FILE *param_1,char *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar2 = ___stack_chk_guard;
  local_30 = param_3;
  local_28 = param_4;
  local_20 = param_5;
  local_18 = param_6;
  local_10 = param_7;
  local_8 = param_8;
  if (param_1 == (FILE *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    local_f0 = &local_30;
    uStack_e8 = 0xffffff80ffffffd0;
    uVar5 = 0;
    local_100 = (undefined1 *)register0x00000008;
    puStack_f8 = (undefined1 *)register0x00000008;
    vsnprintf(&DAT_0013ee00,0x400,param_2,&local_100);
    do {
      uVar6 = uVar5 & 0xffffffff;
      sVar4 = strlen(&DAT_0013ee00);
      if ((sVar4 <= uVar5) || (pbVar1 = &DAT_0013ee00 + uVar5, *pbVar1 == 0)) {
        uVar5 = uVar5 & 0xffffffff;
        goto LAB_0010d9d4;
      }
      uVar5 = uVar5 + 1;
      iVar3 = putc((uint)*pbVar1,param_1);
    } while (iVar3 != -1);
    log2Console(6,"CrashReport-Native","write err at %d",uVar6);
    uVar5 = 0xfffffffe;
  }
LAB_0010d9d4:
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

