
ulong log2File(FILE *param_1,char *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  local_c0 = param_3;
  uStack_b8 = param_4;
  local_b0 = param_5;
  uStack_a8 = param_6;
  local_a0 = param_7;
  uStack_98 = param_8;
  if (param_1 == (FILE *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    puStack_80 = &local_c0;
    ppuStack_88 = &local_90;
    uStack_78 = 0xffffff80ffffffd0;
    local_90 = (undefined1 *)register0x00000008;
    vsnprintf(&DAT_0013fe50,0x400,param_2,&local_90);
    sVar3 = strlen(&DAT_0013fe50);
    if (sVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        if ((byte)(&DAT_0013fe50)[uVar5] == 0) break;
        iVar2 = putc((uint)(byte)(&DAT_0013fe50)[uVar5],param_1);
        if (iVar2 == -1) {
          log2Console(6,"eup","write err at %d",uVar5 & 0xffffffff);
          uVar5 = 0xfffffffe;
          break;
        }
        uVar5 = uVar5 + 1;
        sVar3 = strlen(&DAT_0013fe50);
      } while (uVar5 < sVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5 & 0xffffffff;
}

