
undefined8 FUN_0107fa8c(long param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x428);
  if (*(long *)(lVar2 + 0x1280) == 0) {
    return 0xb;
  }
  uVar1 = *(ushort *)(*(long *)(lVar2 + 0x4f0) + (param_2 & 0xffffffff) * 2);
  if (uVar1 != 0xffff) {
    if (uVar1 < 0x187) {
      lVar2 = (**(code **)(*(long *)(lVar2 + 0x1280) + 0x28))();
    }
    else {
      if (*(uint *)(lVar2 + 0x5f8) <= uVar1 - 0x187) {
        return 0;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0x600) + (ulong)(uVar1 - 0x187) * 8);
    }
    if (lVar2 != 0) {
      ft_mem_strcpyn(param_3,lVar2,param_4);
    }
  }
  return 0;
}

