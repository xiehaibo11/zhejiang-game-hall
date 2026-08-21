
void FUN_0116fb00(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  void *__dest;
  long lVar3;
  size_t __size;
  long local_60;
  long lStack_58;
  
  iVar2 = cpBodyGetType(param_2);
  if (iVar2 != 0) {
    cpMessage("cpBodyGetType(body) == CP_BODY_TYPE_DYNAMIC",
              "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSpaceComponent.c"
              ,0x55,1,1,"Internal error: Attempting to deactivate a non-dynamic body.");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  cpArrayDeleteObj(*(undefined8 *)(param_1 + 0x38),param_2);
  for (lVar3 = *(long *)(param_2 + 0x88); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x70)) {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x28))
              (*(long **)(param_1 + 0x68),lVar3,*(undefined8 *)(lVar3 + 0x80));
    (**(code **)(**(long **)(param_1 + 0x60) + 0x20))
              (*(long **)(param_1 + 0x60),lVar3,*(undefined8 *)(lVar3 + 0x80));
  }
  lVar3 = *(long *)(param_2 + 0x90);
  while (lVar3 != 0) {
    if ((*(long *)(lVar3 + 0x28) == param_2) || (iVar2 = cpBodyGetType(), iVar2 == 2)) {
      local_60 = *(long *)(lVar3 + 0x18);
      lStack_58 = *(long *)(lVar3 + 0x20);
      cpHashSetRemove(*(undefined8 *)(param_1 + 0x88),lStack_58 * 0xc75f71e1 ^ local_60 * 0xc75f71e1
                      ,&local_60);
      cpArrayDeleteObj(*(undefined8 *)(param_1 + 0x78),lVar3);
      __size = (long)*(int *)(lVar3 + 0x58) * 0x38;
      __dest = calloc(1,__size);
      memcpy(__dest,*(void **)(lVar3 + 0x60),__size);
      *(void **)(lVar3 + 0x60) = __dest;
    }
    plVar1 = (long *)(lVar3 + 0x38);
    if (*(long *)(lVar3 + 0x28) != param_2) {
      plVar1 = (long *)(lVar3 + 0x48);
    }
    lVar3 = *plVar1;
  }
  lVar3 = *(long *)(param_2 + 0x98);
  while (lVar3 != 0) {
    if ((*(long *)(lVar3 + 0x10) == param_2) || (iVar2 = cpBodyGetType(), iVar2 == 2)) {
      cpArrayDeleteObj(*(undefined8 *)(param_1 + 0x70),lVar3);
    }
    plVar1 = (long *)(lVar3 + 0x20);
    if (*(long *)(lVar3 + 0x10) != param_2) {
      plVar1 = (long *)(lVar3 + 0x28);
    }
    lVar3 = *plVar1;
  }
  return;
}

