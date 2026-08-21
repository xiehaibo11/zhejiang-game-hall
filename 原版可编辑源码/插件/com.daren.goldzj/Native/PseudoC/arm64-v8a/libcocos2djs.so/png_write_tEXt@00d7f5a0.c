
void png_write_tEXt(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  size_t sVar5;
  int iVar6;
  undefined1 auStack_a0 [80];
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00d7e44c(param_1,param_2,auStack_a0);
  iVar6 = (int)uVar4;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"tEXt: invalid keyword");
  }
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    sVar5 = 0;
  }
  else {
    sVar5 = strlen(param_3);
    if (0x7ffffffe - iVar6 < sVar5) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"tEXt: text too long");
    }
  }
  if (param_1 != 0) {
    lVar1 = sVar5 + (uVar4 & 0xffffffff) + 1;
    *(undefined4 *)(param_1 + 0x4e4) = 0x22;
    local_50 = (undefined1)((ulong)lVar1 >> 0x18);
    local_4f = (undefined1)((ulong)lVar1 >> 0x10);
    local_4e = (undefined1)((ulong)lVar1 >> 8);
    local_4d = (undefined1)lVar1;
    iVar6 = iVar6 + 1;
    local_4c = 0x74584574;
    png_write_data(param_1,&local_50,8);
    *(undefined4 *)(param_1 + 0x250) = 0x74455874;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_4c,4);
    *(undefined4 *)(param_1 + 0x4e4) = 0x42;
    if (iVar6 != 0) {
      png_write_data(param_1,auStack_a0,iVar6);
      png_calculate_crc(param_1,auStack_a0,iVar6);
    }
    if ((sVar5 != 0) && (param_3 != (char *)0x0)) {
      png_write_data(param_1,param_3,sVar5);
      png_calculate_crc(param_1,param_3,sVar5);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x294);
    *(undefined4 *)(param_1 + 0x4e4) = 0x82;
    local_50 = (undefined1)((uint)uVar2 >> 0x18);
    local_4f = (undefined1)((uint)uVar2 >> 0x10);
    local_4e = (undefined1)((uint)uVar2 >> 8);
    local_4d = (undefined1)uVar2;
    png_write_data(param_1,&local_50,4);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

