
void cpBodyActivateStatic(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  iVar2 = cpBodyGetType();
  if (iVar2 != 2) {
    cpMessage("cpBodyGetType(body) == CP_BODY_TYPE_STATIC",
              "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSpaceComponent.c"
              ,0x9e,1,1,"cpBodyActivateStatic() called on a non-static body.");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = *(long *)(param_1 + 0x90);
  if (lVar3 != 0) {
    if (param_2 == 0) {
      do {
        plVar4 = (long *)(lVar3 + 0x28);
        plVar1 = (long *)(lVar3 + 0x30);
        if (*plVar4 != param_1) {
          plVar1 = plVar4;
        }
        cpBodyActivate(*plVar1);
        plVar1 = (long *)(lVar3 + 0x38);
        if (*plVar4 != param_1) {
          plVar1 = (long *)(lVar3 + 0x48);
        }
        lVar3 = *plVar1;
      } while (lVar3 != 0);
    }
    else {
      do {
        if ((*(long *)(lVar3 + 0x18) == param_2) || (*(long *)(lVar3 + 0x20) == param_2)) {
          plVar1 = (long *)(lVar3 + 0x30);
          if (*(long *)(lVar3 + 0x28) != param_1) {
            plVar1 = (long *)(lVar3 + 0x28);
          }
          cpBodyActivate(*plVar1);
        }
        plVar1 = (long *)(lVar3 + 0x38);
        if (*(long *)(lVar3 + 0x28) != param_1) {
          plVar1 = (long *)(lVar3 + 0x48);
        }
        lVar3 = *plVar1;
      } while (lVar3 != 0);
    }
  }
  return;
}

