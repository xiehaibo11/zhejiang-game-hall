
void cpSpaceRemoveShape(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  long local_48;
  undefined8 uStack_40;
  long local_38;
  
  if (*(long *)(param_2 + 8) == param_1) {
    if (*(int *)(param_1 + 0xa0) == 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x10);
      iVar2 = cpBodyGetType(uVar5);
      if (iVar2 == 2) {
        cpBodyActivateStatic(uVar5,param_2);
      }
      else {
        cpBodyActivate(uVar5);
      }
      cpBodyRemoveShape(uVar5,param_2);
      cpSpaceLock(param_1);
      local_48 = param_1;
      uStack_40 = uVar5;
      local_38 = param_2;
      cpHashSetFilter(*(undefined8 *)(param_1 + 0x88),FUN_0116325c,&local_48);
      cpSpaceUnlock(param_1,1);
      puVar1 = (undefined8 *)(param_1 + 0x60);
      if (iVar2 != 2) {
        puVar1 = (undefined8 *)(param_1 + 0x68);
      }
      (**(code **)(*(long *)*puVar1 + 0x28))
                ((long *)*puVar1,param_2,*(undefined8 *)(param_2 + 0x80));
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x80) = 0;
      return;
    }
    pcVar3 = "!space->locked";
    pcVar4 = 
    "This operation cannot be done safely during a call to cpSpaceStep() or during a query. Put these calls into a post-step callback."
    ;
    uVar5 = 0x20e;
  }
  else {
    pcVar3 = "cpSpaceContainsShape(space, shape)";
    pcVar4 = "Cannot remove a shape that was not added to the space. (Removed twice maybe?)";
    uVar5 = 0x20d;
  }
  cpMessage(pcVar3,
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSpace.c"
            ,uVar5,1,1,pcVar4);
                    /* WARNING: Subroutine does not return */
  abort();
}

