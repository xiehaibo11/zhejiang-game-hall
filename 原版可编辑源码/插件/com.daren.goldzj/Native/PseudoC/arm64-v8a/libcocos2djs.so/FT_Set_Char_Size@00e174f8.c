
void FT_Set_Char_Size(undefined8 param_1,long param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 local_30 [2];
  long local_28;
  long lStack_20;
  int local_18;
  int iStack_14;
  
  lVar2 = param_2;
  if (param_3 != 0) {
    lVar2 = param_3;
  }
  lStack_20 = param_3;
  local_28 = param_3;
  if (param_2 != 0) {
    lStack_20 = lVar2;
    local_28 = param_2;
  }
  iVar1 = param_4;
  if (param_5 != 0) {
    iVar1 = param_5;
  }
  iVar3 = param_5;
  if (param_4 != 0) {
    param_5 = iVar1;
    iVar3 = param_4;
  }
  if (local_28 < 0x41) {
    local_28 = 0x40;
  }
  if (lStack_20 < 0x41) {
    lStack_20 = 0x40;
  }
  iStack_14 = 0x48;
  local_18 = 0x48;
  if (iVar3 != 0) {
    iStack_14 = param_5;
    local_18 = iVar3;
  }
  local_30[0] = 0;
  FT_Request_Size(param_1,local_30);
  return;
}

