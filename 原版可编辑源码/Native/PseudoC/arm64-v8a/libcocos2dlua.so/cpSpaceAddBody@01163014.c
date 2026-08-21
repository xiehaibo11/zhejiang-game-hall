
long cpSpaceAddBody(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if (*(long *)(param_2 + 0x80) == param_1) {
    pcVar3 = "body->space != space";
    pcVar5 = "You have already added this body to this space. You must not add it a second time.";
    uVar4 = 0x1ba;
  }
  else if (*(long *)(param_2 + 0x80) == 0) {
    if (*(int *)(param_1 + 0xa0) == 0) {
      iVar2 = cpBodyGetType(param_2);
      puVar1 = (undefined8 *)(param_1 + 0x40);
      if (iVar2 != 2) {
        puVar1 = (undefined8 *)(param_1 + 0x38);
      }
      cpArrayPush(*puVar1,param_2);
      *(long *)(param_2 + 0x80) = param_1;
      return param_2;
    }
    pcVar3 = "!space->locked";
    pcVar5 = 
    "This operation cannot be done safely during a call to cpSpaceStep() or during a query. Put these calls into a post-step callback."
    ;
    uVar4 = 0x1bc;
  }
  else {
    pcVar3 = "!body->space";
    pcVar5 = "You have already added this body to another space. You cannot add it to a second.";
    uVar4 = 0x1bb;
  }
  cpMessage(pcVar3,
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSpace.c"
            ,uVar4,1,1,pcVar5);
                    /* WARNING: Subroutine does not return */
  abort();
}

