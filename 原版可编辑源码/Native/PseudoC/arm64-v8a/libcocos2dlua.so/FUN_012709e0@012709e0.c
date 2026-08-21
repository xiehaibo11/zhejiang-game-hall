
ulong * FUN_012709e0(byte param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong *local_8;
  
  if (param_1 == 0x50) {
    local_8 = (ulong *)((long)param_3 + 7U & 0xfffffffffffffff8);
    puVar1 = local_8 + 1;
    local_8 = (ulong *)*local_8;
  }
  else {
    switch(param_1 & 0xf) {
    case 0:
    case 4:
    case 0xc:
      puVar1 = param_3 + 1;
      local_8 = (ulong *)*param_3;
      break;
    case 1:
      puVar1 = (ulong *)FUN_01270978(param_3,&local_8);
      break;
    case 2:
      puVar1 = (ulong *)((long)param_3 + 2);
      local_8 = (ulong *)(ulong)(ushort)*param_3;
      break;
    case 3:
      puVar1 = (ulong *)((long)param_3 + 4);
      local_8 = (ulong *)(ulong)(uint)*param_3;
      break;
    default:
                    /* WARNING: Subroutine does not return */
      abort();
    case 9:
      puVar1 = (ulong *)FUN_012709a0(param_3,&local_8);
      break;
    case 10:
      puVar1 = (ulong *)((long)param_3 + 2);
      local_8 = (ulong *)(long)(short)*param_3;
      break;
    case 0xb:
      puVar1 = (ulong *)((long)param_3 + 4);
      local_8 = (ulong *)(long)(int)(uint)*param_3;
    }
    if (local_8 != (ulong *)0x0) {
      if ((param_1 & 0x70) != 0x10) {
        param_3 = param_2;
      }
      local_8 = (ulong *)((long)local_8 + (long)param_3);
      if ((char)param_1 < '\0') {
        local_8 = (ulong *)*local_8;
      }
    }
  }
  *param_4 = (ulong)local_8;
  return puVar1;
}

