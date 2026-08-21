
void cpSpaceRemoveBody(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if (*(long *)(param_1 + 0xf8) == param_2) {
    pcVar3 = "body != cpSpaceGetStaticBody(space)";
    pcVar5 = "Cannot remove the designated static body for the space.";
    uVar4 = 0x221;
  }
  else if (*(long *)(param_2 + 0x80) == param_1) {
    if (*(int *)(param_1 + 0xa0) == 0) {
      cpBodyActivate(param_2);
      iVar2 = cpBodyGetType(param_2);
      puVar1 = (undefined8 *)(param_1 + 0x40);
      if (iVar2 != 2) {
        puVar1 = (undefined8 *)(param_1 + 0x38);
      }
      cpArrayDeleteObj(*puVar1,param_2);
      *(undefined8 *)(param_2 + 0x80) = 0;
      return;
    }
    pcVar3 = "!space->locked";
    pcVar5 = 
    "This operation cannot be done safely during a call to cpSpaceStep() or during a query. Put these calls into a post-step callback."
    ;
    uVar4 = 0x225;
  }
  else {
    pcVar3 = "cpSpaceContainsBody(space, body)";
    pcVar5 = "Cannot remove a body that was not added to the space. (Removed twice maybe?)";
    uVar4 = 0x222;
  }
  cpMessage(pcVar3,
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSpace.c"
            ,uVar4,1,1,pcVar5);
                    /* WARNING: Subroutine does not return */
  abort();
}

