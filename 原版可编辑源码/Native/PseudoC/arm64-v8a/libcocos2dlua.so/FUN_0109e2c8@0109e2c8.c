
void FUN_0109e2c8(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x330))(param_1,0x636d6170,param_2,(undefined8 *)(param_1 + 0x328))
  ;
  if ((iVar1 == 0) &&
     (iVar1 = FT_Stream_ExtractFrame(param_2,*(undefined8 *)(param_1 + 0x328),param_1 + 800),
     iVar1 != 0)) {
    *(undefined8 *)(param_1 + 0x328) = 0;
  }
  return;
}

