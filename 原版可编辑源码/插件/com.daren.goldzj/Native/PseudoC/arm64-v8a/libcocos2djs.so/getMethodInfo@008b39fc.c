
/* JavaScriptJavaBridge::CallInfo::getMethodInfo() */

undefined8 __thiscall JavaScriptJavaBridge::CallInfo::getMethodInfo(CallInfo *this)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  CallInfo *pCVar5;
  CallInfo *pCVar6;
  undefined4 uVar7;
  CallInfo *pCVar8;
  CallInfo *pCVar9;
  CallInfo *pCVar10;
  CallInfo *pCVar11;
  
  pCVar8 = this + 0x88;
  *(undefined8 *)pCVar8 = 0;
  *(undefined8 *)(this + 0x98) = 0;
  plVar2 = (long *)cocos2d::JniHelper::getJavaVM();
  iVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,pCVar8,0x10004);
  if (iVar1 != 0) {
    if (iVar1 != -2) {
      __android_log_print(3,"JavaScriptJavaBridge","%s",
                          "Failed to get the environment using GetEnv()");
      uVar7 = 0xfffffffa;
      goto LAB_008b3c44;
    }
    iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,pCVar8,0);
    if (iVar1 < 0) {
      __android_log_print(3,"JavaScriptJavaBridge","%s",
                          "Failed to get the environment using AttachCurrentThread()");
      uVar7 = 0xfffffffb;
      goto LAB_008b3c44;
    }
  }
  pCVar10 = this + 8;
  if (((byte)*pCVar10 & 1) == 0) {
    pCVar9 = this + 9;
  }
  else {
    pCVar9 = *(CallInfo **)(this + 0x18);
  }
  uVar3 = (**(code **)(**(long **)(this + 0x88) + 0x538))(*(long **)(this + 0x88),pCVar9);
  lVar4 = _JNIEnv::CallObjectMethod
                    (*(_jobject **)(this + 0x88),cocos2d::JniHelper::classloader,
                     cocos2d::JniHelper::loadclassMethod_methodID,uVar3);
  *(long *)(this + 0x90) = lVar4;
  if (lVar4 == 0) {
    if (((byte)*pCVar10 & 1) == 0) {
      pCVar10 = this + 9;
    }
    else {
      pCVar10 = *(CallInfo **)(this + 0x18);
    }
    __android_log_print(3,"JavaScriptJavaBridge","Classloader failed to find class of %s",pCVar10);
    (**(code **)(**(long **)pCVar8 + 0xb8))(*(long **)pCVar8,uVar3);
    (**(code **)(**(long **)pCVar8 + 0x88))();
    uVar7 = 0xfffffff9;
    goto LAB_008b3c44;
  }
  (**(code **)(**(long **)(this + 0x88) + 0xb8))(*(long **)(this + 0x88),uVar3);
  pCVar9 = this + 0x20;
  if (((byte)*pCVar9 & 1) == 0) {
    pCVar5 = this + 0x21;
  }
  else {
    pCVar5 = *(CallInfo **)(this + 0x30);
  }
  pCVar11 = this + 0x38;
  if (((byte)*pCVar11 & 1) == 0) {
    pCVar6 = this + 0x39;
  }
  else {
    pCVar6 = *(CallInfo **)(this + 0x48);
  }
  lVar4 = (**(code **)(**(long **)(this + 0x88) + 0x388))
                    (*(long **)(this + 0x88),*(undefined8 *)(this + 0x90),pCVar5,pCVar6);
  *(long *)(this + 0x98) = lVar4;
  if (lVar4 != 0) {
    return 1;
  }
  (**(code **)(**(long **)pCVar8 + 0x88))();
  if (((byte)*pCVar10 & 1) == 0) {
    pCVar8 = this + 9;
    if (((byte)*pCVar9 & 1) == 0) goto LAB_008b3c18;
LAB_008b3bb0:
    pCVar10 = *(CallInfo **)(this + 0x30);
    if (((byte)*pCVar11 & 1) == 0) goto LAB_008b3c24;
LAB_008b3bbc:
    pCVar9 = *(CallInfo **)(this + 0x48);
  }
  else {
    pCVar8 = *(CallInfo **)(this + 0x18);
    if (((byte)*pCVar9 & 1) != 0) goto LAB_008b3bb0;
LAB_008b3c18:
    pCVar10 = this + 0x21;
    if (((byte)*pCVar11 & 1) != 0) goto LAB_008b3bbc;
LAB_008b3c24:
    pCVar9 = this + 0x39;
  }
  __android_log_print(3,"JavaScriptJavaBridge","Failed to find method id of %s.%s %s",pCVar8,pCVar10
                      ,pCVar9);
  uVar7 = 0xfffffffd;
LAB_008b3c44:
  *(undefined4 *)(this + 4) = uVar7;
  return 0;
}

