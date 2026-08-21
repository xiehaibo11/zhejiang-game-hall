
void png_set_crc_action(long param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  switch(param_2) {
  case 2:
    png_warning(param_1,"Can\'t discard critical data on CRC error");
  default:
    uVar1 = *(uint *)(param_1 + 0x168) & 0xfffff3ff;
    break;
  case 3:
    uVar1 = *(uint *)(param_1 + 0x168) & 0xfffff3ff | 0x400;
    break;
  case 4:
    uVar1 = *(uint *)(param_1 + 0x168) | 0xc00;
    break;
  case 5:
    goto code_r0x00d6cf00;
  }
  *(uint *)(param_1 + 0x168) = uVar1;
code_r0x00d6cf00:
  switch(param_3) {
  case 1:
    uVar1 = *(uint *)(param_1 + 0x168) & 0xfffffcff | 0x200;
    break;
  default:
    uVar1 = *(uint *)(param_1 + 0x168) & 0xfffffcff;
    break;
  case 3:
    uVar1 = *(uint *)(param_1 + 0x168) & 0xfffffcff | 0x100;
    break;
  case 4:
    uVar1 = *(uint *)(param_1 + 0x168) | 0x300;
    break;
  case 5:
    goto switchD_00d6cf10_caseD_5;
  }
  *(uint *)(param_1 + 0x168) = uVar1;
switchD_00d6cf10_caseD_5:
  return;
}

