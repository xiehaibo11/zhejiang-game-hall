
int FUN_00e653d8(byte *param_1,long *param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  
  if (cocos2d::FileUtilsAndroid::obbfile == 0) {
    pbVar3 = *(byte **)(param_1 + 0x10);
    if ((*param_1 & 1) == 0) {
      pbVar3 = param_1 + 1;
    }
    uVar2 = AAssetManager_open(cocos2d::FileUtilsAndroid::assetmanager,pbVar3,0);
    iVar1 = AAsset_openFileDescriptor(uVar2,param_2,param_3);
    AAsset_close(uVar2);
  }
  else {
    pbVar3 = *(byte **)(param_1 + 0x10);
    if ((*param_1 & 1) == 0) {
      pbVar3 = param_1 + 1;
    }
    iVar1 = getObbAssetFileDescriptorJNI((char *)pbVar3,param_2,param_3);
  }
  if (iVar1 < 1) {
    pbVar3 = *(byte **)(param_1 + 0x10);
    if ((*param_1 & 1) == 0) {
      pbVar3 = param_1 + 1;
    }
    __android_log_print(6,"AudioEngineImpl","Failed to open file descriptor for \'%s\'",pbVar3);
  }
  return iVar1;
}

