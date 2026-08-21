
int uncompress(undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_90;
  int local_88;
  undefined8 local_78;
  undefined4 local_70;
  ulong local_68;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_88 = (int)param_4;
  if (((int)((ulong)param_4 >> 0x20) != 0) ||
     (local_70 = (undefined4)*param_2, (*param_2 & 0xffffffff00000000) != 0)) {
    return -5;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_90 = param_3;
  local_78 = param_1;
  iVar1 = inflateInit_(&local_90,"1.2.8",0x70);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = inflate(&local_90,4);
  if (iVar1 == 1) {
    *param_2 = local_68;
    iVar1 = inflateEnd(&local_90);
    return iVar1;
  }
  inflateEnd(&local_90);
  if (iVar1 != 2) {
    if (iVar1 != -5) {
      return iVar1;
    }
    if (local_88 != 0) {
      return -5;
    }
  }
  return -3;
}

