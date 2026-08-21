
void cpSpaceRemoveConstraint(long param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (*(long *)(param_2 + 8) == param_1) {
    if (*(int *)(param_1 + 0xa0) == 0) {
      cpBodyActivate(*(undefined8 *)(param_2 + 0x10));
      cpBodyActivate(*(undefined8 *)(param_2 + 0x18));
      cpArrayDeleteObj(*(undefined8 *)(param_1 + 0x70),param_2);
      cpBodyRemoveConstraint(*(undefined8 *)(param_2 + 0x10),param_2);
      cpBodyRemoveConstraint(*(undefined8 *)(param_2 + 0x18),param_2);
      *(undefined8 *)(param_2 + 8) = 0;
      return;
    }
    pcVar1 = "!space->locked";
    pcVar3 = 
    "This operation cannot be done safely during a call to cpSpaceStep() or during a query. Put these calls into a post-step callback."
    ;
    uVar2 = 0x231;
  }
  else {
    pcVar1 = "cpSpaceContainsConstraint(space, constraint)";
    pcVar3 = "Cannot remove a constraint that was not added to the space. (Removed twice maybe?)";
    uVar2 = 0x230;
  }
  cpMessage(pcVar1,
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSpace.c"
            ,uVar2,1,1,pcVar3);
                    /* WARNING: Subroutine does not return */
  abort();
}

