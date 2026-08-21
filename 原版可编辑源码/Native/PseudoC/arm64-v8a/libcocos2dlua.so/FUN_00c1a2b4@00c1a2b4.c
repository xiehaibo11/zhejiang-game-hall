
void FUN_00c1a2b4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 0x18));
  if ((lVar1 == 0) && (param_4 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfac84(param_1);
  }
  *(long *)(lVar2 + 0x20) = (param_4 + *(long *)(lVar2 + 0x20)) - param_3;
  return;
}

