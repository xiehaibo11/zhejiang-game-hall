
undefined8 FT_Sfnt_Table_Info(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_38 [8];
  
  if ((param_1 == 0) || ((*(byte *)(param_1 + 0x10) >> 3 & 1) == 0)) {
    uVar1 = 0x23;
  }
  else {
    pcVar3 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
    if ((pcVar3 == (code *)0x0) ||
       (lVar2 = (*pcVar3)(*(long **)(param_1 + 0xb0),"sfnt-table"), lVar2 == 0)) {
      uVar1 = 7;
    }
    else {
      uVar1 = (**(code **)(lVar2 + 0x10))(param_1,param_2,param_3,auStack_38,param_4);
    }
  }
  return uVar1;
}

