
void cpSpaceActivateBody(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  void *__dest;
  long lVar4;
  void *__src;
  long local_60;
  long lStack_58;
  
  iVar3 = cpBodyGetType(param_2);
  if (iVar3 != 0) {
    cpMessage("cpBodyGetType(body) == CP_BODY_TYPE_DYNAMIC",
              "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSpaceComponent.c"
              ,0x1f,1,1,"Internal error: Attempting to activate a non-dynamic body.");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(int *)(param_1 + 0xa0) == 0) {
    cpArrayPush(*(undefined8 *)(param_1 + 0x38),param_2);
    for (lVar4 = *(long *)(param_2 + 0x88); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x70)) {
      (**(code **)(**(long **)(param_1 + 0x60) + 0x28))
                (*(long **)(param_1 + 0x60),lVar4,*(undefined8 *)(lVar4 + 0x80));
      (**(code **)(**(long **)(param_1 + 0x68) + 0x20))
                (*(long **)(param_1 + 0x68),lVar4,*(undefined8 *)(lVar4 + 0x80));
    }
    lVar4 = *(long *)(param_2 + 0x90);
    while (lVar4 != 0) {
      if ((*(long *)(lVar4 + 0x28) == param_2) || (iVar3 = cpBodyGetType(), iVar3 == 2)) {
        iVar3 = *(int *)(lVar4 + 0x58);
        __src = *(void **)(lVar4 + 0x60);
        __dest = (void *)cpContactBufferGetArray(param_1);
        *(void **)(lVar4 + 0x60) = __dest;
        memcpy(__dest,__src,(long)iVar3 * 0x38);
        cpSpacePushContacts(param_1,iVar3);
        local_60 = *(long *)(lVar4 + 0x18);
        lStack_58 = *(long *)(lVar4 + 0x20);
        cpHashSetInsert(*(undefined8 *)(param_1 + 0x88),
                        lStack_58 * 0xc75f71e1 ^ local_60 * 0xc75f71e1,&local_60,0,lVar4);
        *(undefined4 *)(lVar4 + 0x8c) = *(undefined4 *)(param_1 + 0x30);
        cpArrayPush(*(undefined8 *)(param_1 + 0x78),lVar4);
        free(__src);
      }
      plVar1 = (long *)(lVar4 + 0x38);
      if (*(long *)(lVar4 + 0x28) != param_2) {
        plVar1 = (long *)(lVar4 + 0x48);
      }
      lVar4 = *plVar1;
    }
    lVar4 = *(long *)(param_2 + 0x98);
    while (lVar4 != 0) {
      if ((*(long *)(lVar4 + 0x10) == param_2) || (iVar3 = cpBodyGetType(), iVar3 == 2)) {
        cpArrayPush(*(undefined8 *)(param_1 + 0x70),lVar4);
      }
      plVar1 = (long *)(lVar4 + 0x20);
      if (*(long *)(lVar4 + 0x10) != param_2) {
        plVar1 = (long *)(lVar4 + 0x28);
      }
      lVar4 = *plVar1;
    }
  }
  else {
    cVar2 = cpArrayContains(*(undefined8 *)(param_1 + 0x48),param_2);
    if (cVar2 == '\0') {
      cpArrayPush(*(undefined8 *)(param_1 + 0x48),param_2);
      return;
    }
  }
  return;
}

