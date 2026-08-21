
void FUN_00ab5420(long param_1,int param_2,uint param_3)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = *(undefined4 *)(param_1 + 0x98);
  lVar4 = *(long *)(param_1 + 0xb8);
  local_24 = 0;
  if (param_2 < 0) {
    if (param_2 == -0xb) {
      return;
    }
    uVar2 = 0;
    uVar3 = 0x18;
  }
  else {
    bVar1 = (param_3 & 1) != 0;
    if (bVar1) {
      local_24 = 0x10001;
    }
    uVar2 = (ushort)bVar1;
    if ((param_3 >> 1 & 1) == 0) goto LAB_00ab5488;
    uVar3 = 4;
  }
  local_24 = CONCAT22(uVar3 | uVar2,uVar3 | uVar2);
LAB_00ab5488:
  lws_service_fd(lVar4,&local_28);
  uv_idle_start(lVar4 + (ulong)*(byte *)(param_1 + 0x19c) * 0x6f8 + 0x690,FUN_00ab5748);
  return;
}

