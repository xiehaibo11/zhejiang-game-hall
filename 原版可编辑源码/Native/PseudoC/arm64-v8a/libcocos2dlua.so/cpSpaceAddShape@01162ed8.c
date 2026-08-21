
long cpSpaceAddShape(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*(long *)(param_2 + 8) == param_1) {
    pcVar3 = "shape->space != space";
    pcVar5 = "You have already added this shape to this space. You must not add it a second time.";
    uVar4 = 0x1a6;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    if (*(int *)(param_1 + 0xa0) == 0) {
      lVar7 = *(long *)(param_2 + 0x10);
      iVar2 = cpBodyGetType(lVar7);
      if (iVar2 != 2) {
        cpBodyActivate(lVar7);
      }
      cpBodyAddShape(lVar7,param_2);
      lVar6 = *(long *)(param_1 + 0x58);
      *(long *)(param_1 + 0x58) = lVar6 + 1;
      *(long *)(param_2 + 0x80) = lVar6;
      local_40 = *(undefined8 *)(lVar7 + 0x5c);
      uStack_48 = *(undefined8 *)(lVar7 + 0x54);
      local_50 = *(undefined8 *)(lVar7 + 0x4c);
      cpShapeUpdate(param_2,&local_50);
      puVar1 = (undefined8 *)(param_1 + 0x60);
      if (iVar2 != 2) {
        puVar1 = (undefined8 *)(param_1 + 0x68);
      }
      (**(code **)(*(long *)*puVar1 + 0x20))
                ((long *)*puVar1,param_2,*(undefined8 *)(param_2 + 0x80));
      *(long *)(param_2 + 8) = param_1;
      return param_2;
    }
    pcVar3 = "!space->locked";
    pcVar5 = 
    "This operation cannot be done safely during a call to cpSpaceStep() or during a query. Put these calls into a post-step callback."
    ;
    uVar4 = 0x1a9;
  }
  else {
    pcVar3 = "!shape->space";
    pcVar5 = "You have already added this shape to another space. You cannot add it to a second.";
    uVar4 = 0x1a7;
  }
  cpMessage(pcVar3,
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSpace.c"
            ,uVar4,1,1,pcVar5);
                    /* WARNING: Subroutine does not return */
  abort();
}

