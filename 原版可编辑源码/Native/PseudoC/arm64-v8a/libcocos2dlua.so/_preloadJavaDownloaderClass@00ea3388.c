
/* cocos2d::network::_preloadJavaDownloaderClass() */

void cocos2d::network::_preloadJavaDownloaderClass(void)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  if (DAT_0178f5d4 == '\0') {
    plVar3 = (long *)JniHelper::getEnv();
    lVar4 = (**(code **)(*plVar3 + 0x30))(plVar3,"org/cocos2dx/lib/Cocos2dxDownloader");
    if (lVar4 != 0) {
      iVar2 = (**(code **)(*plVar3 + 0x6b8))(plVar3,lVar4,&PTR_s_nativeOnProgress_017774f8,2);
      if (iVar2 == 0) {
        DAT_0178f5d4 = 1;
        return;
      }
      cVar1 = (**(code **)(*plVar3 + 0x720))(plVar3);
      if (cVar1 != '\0') {
        (**(code **)(*plVar3 + 0x88))(plVar3);
      }
    }
    DAT_0178f5d4 = '\0';
  }
  return;
}

