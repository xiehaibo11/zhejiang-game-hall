
undefined4 FT_Get_First_Char(long param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined4 local_24;
  
  uVar2 = 0;
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0xa8);
    uVar2 = 0;
    if (lVar3 != 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar2 = (**(code **)(*(long *)(lVar3 + 0x10) + 0x18))(lVar3,0);
        if ((uVar2 != 0) && (uVar2 < *(uint *)(param_1 + 0x20))) goto LAB_0105f408;
        lVar3 = *(long *)(param_1 + 0xa8);
        if ((lVar3 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
          local_24 = 0;
          do {
            uVar2 = (**(code **)(*(long *)(lVar3 + 0x10) + 0x20))(lVar3,&local_24);
          } while (*(uint *)(param_1 + 0x20) <= uVar2);
          uVar1 = 0;
          if (uVar2 != 0) {
            uVar1 = local_24;
          }
          goto joined_r0x0105f484;
        }
      }
      uVar2 = 0;
      uVar1 = 0;
      goto joined_r0x0105f484;
    }
  }
LAB_0105f408:
  uVar1 = 0;
joined_r0x0105f484:
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar2;
  }
  return uVar1;
}

