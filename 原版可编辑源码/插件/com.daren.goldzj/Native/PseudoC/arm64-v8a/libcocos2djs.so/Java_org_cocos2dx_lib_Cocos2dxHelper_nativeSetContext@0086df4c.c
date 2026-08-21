
void Java_org_cocos2dx_lib_Cocos2dxHelper_nativeSetContext
               (undefined8 param_1,undefined8 param_2,_jobject *param_3,undefined8 param_4)

{
  AAssetManager *pAVar1;
  
  cocos2d::JniHelper::setClassLoaderFrom(param_3);
  pAVar1 = (AAssetManager *)AAssetManager_fromJava(param_1,param_4);
  cocos2d::FileUtilsAndroid::setassetmanager(pAVar1);
  return;
}

