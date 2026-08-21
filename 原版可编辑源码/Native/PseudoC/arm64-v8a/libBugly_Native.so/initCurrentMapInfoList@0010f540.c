
void initCurrentMapInfoList(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = gettid();
  initMapInfoList(uVar1,param_1 & 1,param_2 & 1);
  return;
}

