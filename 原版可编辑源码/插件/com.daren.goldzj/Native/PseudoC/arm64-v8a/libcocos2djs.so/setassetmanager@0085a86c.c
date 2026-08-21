
/* cocos2d::FileUtilsAndroid::setassetmanager(AAssetManager*) */

void cocos2d::FileUtilsAndroid::setassetmanager(AAssetManager *param_1)

{
  if (param_1 != (AAssetManager *)0x0) {
    assetmanager = param_1;
    return;
  }
  __android_log_print(3,"CCFileUtils-android.cpp",
                      "setassetmanager : received unexpected nullptr parameter");
  return;
}

