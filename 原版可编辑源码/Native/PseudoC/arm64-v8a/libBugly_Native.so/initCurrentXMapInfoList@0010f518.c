
void initCurrentXMapInfoList(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = gettid();
  initMapInfoList(uVar1,1,param_1 & 1);
  return;
}

