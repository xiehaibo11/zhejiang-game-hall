
int FUN_01067188(undefined8 *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FT_Outline_New(*param_1,(int)*(short *)((long)param_1 + 0x2a),
                         (long)*(short *)(param_1 + 5),param_2 + 0x28);
  if (iVar1 == 0) {
    FT_Outline_Copy(param_1 + 5,param_2 + 0x28);
  }
  return iVar1;
}

