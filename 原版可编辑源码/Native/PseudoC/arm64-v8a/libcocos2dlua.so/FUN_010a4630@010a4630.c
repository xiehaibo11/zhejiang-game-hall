
undefined8 FUN_010a4630(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0xa8);
  *(uint *)(param_1 + 0x48) = (uint)*(ushort *)(param_2 + 0x88);
  iVar1 = FT_Select_Charmap(param_2,0x756e6963);
  if (iVar1 == 0) {
    FUN_010a6b50(param_1,param_2);
    FUN_010a6f18(param_1,param_2);
  }
  else {
    *(undefined8 *)(param_2 + 0xa8) = 0;
  }
  FT_Set_Charmap(param_2,uVar2);
  return 0;
}

