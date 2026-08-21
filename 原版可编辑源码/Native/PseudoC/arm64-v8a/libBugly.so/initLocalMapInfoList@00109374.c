
void initLocalMapInfoList(void)

{
  if (localMapInfoList != 0) {
    return;
  }
  localMapInfoList = initCurrentMapInfoList(0,1);
  return;
}

