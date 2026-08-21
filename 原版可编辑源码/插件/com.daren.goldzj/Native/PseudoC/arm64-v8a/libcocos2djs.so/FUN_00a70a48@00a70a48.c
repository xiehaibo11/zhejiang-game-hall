
int FUN_00a70a48(byte *param_1,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  size_t __n;
  undefined8 uVar3;
  byte *pbVar4;
  void *__dest;
  ulong uVar5;
  ulong local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (cocos2d::FileUtilsAndroid::obbfile != 0) {
    pbVar4 = *(byte **)(param_1 + 0x10);
                    /* try { // try from 00a70a94 to 00b70aef has its CatchHandler @ 00a70324 */
    local_70 = 0;
    local_68 = 0;
    local_60 = (void *)0x0;
    if ((*param_1 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    __n = strlen((char *)pbVar4);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (__n < 0x17) {
      __dest = (void *)((ulong)&local_70 | 1);
      local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_00a70af8;
    }
    else {
      uVar5 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar5);
      local_70 = uVar5 | 1;
                    /* try { // try from 00a70af0 to 00b70afb has its CatchHandler @ 00a70dd0 */
      local_68 = __n;
      local_60 = __dest;
LAB_00a70af8:
      memcpy(__dest,pbVar4,__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
    iVar2 = getObbAssetFileDescriptorJNI((basic_string *)&local_70,param_2,param_3);
                    /* try { // try from 00a70b24 to 00b70b5f has its CatchHandler @ 00a70e40 */
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if (0 < iVar2) goto LAB_00a70bac;
  }
  pbVar4 = param_1 + 1;
  if ((*param_1 & 1) != 0) {
    pbVar4 = *(byte **)(param_1 + 0x10);
  }
  uVar3 = AAssetManager_open(cocos2d::FileUtilsAndroid::assetmanager,pbVar4,0);
                    /* try { // try from 00a70b60 to 00b70bb3 has its CatchHandler @ 00a70324 */
  iVar2 = AAsset_openFileDescriptor(uVar3,param_2,param_3);
  AAsset_close(uVar3);
  if (iVar2 < 1) {
    pbVar4 = param_1 + 1;
    if ((*param_1 & 1) != 0) {
      pbVar4 = *(byte **)(param_1 + 0x10);
    }
    __android_log_print(6,"AudioEngineImpl","Failed to open file descriptor for \'%s\'",pbVar4);
  }
LAB_00a70bac:
                    /* try { // try from 00a70bb4 to 00b70bef has its CatchHandler @ 00a70eb0 */
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}

