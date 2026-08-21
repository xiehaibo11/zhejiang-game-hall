
void FUN_009fbfa0(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong local_38;
  
  local_38 = 0;
  lVar3 = FUN_009fb4dc(param_2,&local_38);
  uVar1 = local_38;
  if ((lVar3 == 0) || (0xffffffffffffff9b < local_38)) {
    luaL_error(param_1,"invalid bytes length: %d (at offset %d)",local_38 & 0xffffffff,
               ((int)*param_2 - (int)param_2[2]) + 1);
  }
  lVar3 = *param_2;
  bVar2 = uVar1 <= (ulong)(param_2[1] - lVar3);
  if (bVar2) {
    *param_3 = lVar3;
    lVar3 = *param_2 + uVar1;
    param_3[1] = lVar3;
    *param_2 = lVar3;
  }
  if ((uVar1 != 0) && (!bVar2 || uVar1 == 0)) {
    luaL_error(param_1,"un-finished bytes (len %d at offset %d)",uVar1 & 0xffffffff,
               ((int)lVar3 - (int)param_2[2]) + 1);
  }
  param_3[2] = param_2[2];
  return;
}

