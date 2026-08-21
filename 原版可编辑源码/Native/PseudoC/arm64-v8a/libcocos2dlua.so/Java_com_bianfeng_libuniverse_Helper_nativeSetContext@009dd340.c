
void Java_com_bianfeng_libuniverse_Helper_nativeSetContext
               (undefined8 param_1,undefined8 param_2,_jobject *param_3,undefined8 param_4)

{
  AAssetManager *pAVar1;
  
  universe::JniAssistant::setClassLoaderFrom(param_3);
  pAVar1 = (AAssetManager *)AAssetManager_fromJava(param_1,param_4);
  universe::FileSystemAndroid::setassetmanager(pAVar1);
  return;
}

