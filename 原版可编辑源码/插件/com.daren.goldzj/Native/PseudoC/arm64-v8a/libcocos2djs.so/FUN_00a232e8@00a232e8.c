
/* WARNING: Removing unreachable block (ram,0x00a2333c) */
/* WARNING: Removing unreachable block (ram,0x00a23344) */

undefined4
FUN_00a232e8(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = (**(code **)(param_1 + (ulong)(*(int *)(param_1 + 0x264) == param_2) * 8 + 0x288))();
  uVar1 = 0;
  *param_5 = lVar2;
  if (lVar2 < 0) {
    uVar1 = 0x37;
  }
  return uVar1;
}

