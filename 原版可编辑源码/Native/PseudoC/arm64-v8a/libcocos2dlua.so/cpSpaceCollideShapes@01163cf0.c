
undefined4 cpSpaceCollideShapes(long param_1,long param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  undefined4 local_58;
  int local_4c;
  
  if (*(float *)(param_2 + 0x34) < *(float *)(param_1 + 0x2c)) {
    return param_3;
  }
  if (*(float *)(param_1 + 0x38) < *(float *)(param_2 + 0x30)) {
    return param_3;
  }
  if (*(float *)(param_1 + 0x34) < *(float *)(param_2 + 0x2c)) {
    return param_3;
  }
  if (*(float *)(param_2 + 0x38) < *(float *)(param_1 + 0x30)) {
    return param_3;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(param_2 + 0x10);
  if (lVar4 == lVar6) {
    return param_3;
  }
  if ((*(long *)(param_1 + 0x60) != 0) && (*(long *)(param_1 + 0x60) == *(long *)(param_2 + 0x60)))
  {
    return param_3;
  }
  if ((*(ulong *)(param_1 + 0x68) & *(ulong *)(param_2 + 0x68) >> 0x20) == 0) {
    return param_3;
  }
  if ((*(ulong *)(param_2 + 0x68) & *(ulong *)(param_1 + 0x68) >> 0x20) == 0) {
    return param_3;
  }
  lVar7 = *(long *)(lVar4 + 0x98);
  while (lVar7 != 0) {
    lVar8 = *(long *)(lVar7 + 0x10);
    if (*(char *)(lVar7 + 0x3c) == '\0') {
      if ((lVar8 == lVar4) && (*(long *)(lVar7 + 0x18) == lVar6)) {
        return param_3;
      }
      if ((lVar8 == lVar6) && (lVar8 = lVar6, *(long *)(lVar7 + 0x18) == lVar4)) {
        return param_3;
      }
    }
    plVar1 = (long *)(lVar7 + 0x20);
    if (lVar8 != lVar4) {
      plVar1 = (long *)(lVar7 + 0x28);
    }
    lVar7 = *plVar1;
  }
  lVar4 = *(long *)(param_4 + 0x80);
  uVar5 = *(uint *)(lVar4 + 0x10);
  if (0x248 < uVar5 + 2) {
    cpSpacePushFreshContactBuffer(param_4);
    lVar4 = *(long *)(param_4 + 0x80);
    uVar5 = *(uint *)(lVar4 + 0x10);
  }
  cpCollide(&local_68,param_1,param_2,param_3,lVar4 + (ulong)uVar5 * 0x38 + 0x18);
  if (local_4c == 0) {
    return local_58;
  }
  if (2 < local_4c) {
    cpMessage("count <= CP_MAX_CONTACTS_PER_ARBITER",
              "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSpaceStep.c"
              ,0xb0,1,1,"Internal Error: Contact buffer overflow!");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(int *)(*(long *)(param_4 + 0x80) + 0x10) = *(int *)(*(long *)(param_4 + 0x80) + 0x10) + local_4c
  ;
  local_78 = local_68;
  lStack_70 = lStack_60;
  lVar4 = cpHashSetInsert(*(undefined8 *)(param_4 + 0x88),
                          local_68 * 0xc75f71e1 ^ lStack_60 * 0xc75f71e1,&local_78,FUN_01163fc0,
                          param_4);
  cpArbiterUpdate(lVar4,&local_68,param_4);
  iVar3 = *(int *)(lVar4 + 0x90);
  lVar6 = *(long *)(lVar4 + 0x70);
  if (iVar3 == 0) {
    cVar2 = (**(code **)(lVar6 + 0x10))(lVar4,param_4,*(undefined8 *)(lVar6 + 0x30));
    if (cVar2 == '\0') {
      cpArbiterIgnore(lVar4);
    }
    iVar3 = *(int *)(lVar4 + 0x90);
  }
  if (iVar3 != 2) {
    cVar2 = (**(code **)(lVar6 + 0x18))(lVar4,param_4,*(undefined8 *)(lVar6 + 0x30));
    iVar3 = *(int *)(lVar4 + 0x90);
    if ((((cVar2 != '\0') && (iVar3 != 2)) && (*(char *)(param_1 + 0x3c) == '\0')) &&
       ((*(char *)(param_2 + 0x3c) == '\0' &&
        ((*(float *)(*(long *)(param_1 + 0x10) + 0x10) != INFINITY ||
         (*(float *)(*(long *)(param_2 + 0x10) + 0x10) != INFINITY)))))) {
      cpArrayPush(*(undefined8 *)(param_4 + 0x78),lVar4);
      goto LAB_01163f4c;
    }
  }
  *(int *)(*(long *)(param_4 + 0x80) + 0x10) = *(int *)(*(long *)(param_4 + 0x80) + 0x10) - local_4c
  ;
  *(undefined8 *)(lVar4 + 0x60) = 0;
  *(undefined4 *)(lVar4 + 0x58) = 0;
  if (iVar3 != 2) {
    *(undefined4 *)(lVar4 + 0x90) = 1;
  }
LAB_01163f4c:
  *(undefined4 *)(lVar4 + 0x8c) = *(undefined4 *)(param_4 + 0x30);
  return local_58;
}

