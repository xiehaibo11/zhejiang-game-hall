
long cpSpaceAddConstraint(long param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_2 + 8) == param_1) {
    pcVar1 = "constraint->space != space";
    pcVar3 = 
    "You have already added this constraint to this space. You must not add it a second time.";
    uVar2 = 0x1c7;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    if (*(int *)(param_1 + 0xa0) == 0) {
      lVar4 = *(long *)(param_2 + 0x10);
      if ((lVar4 != 0) && (lVar5 = *(long *)(param_2 + 0x18), lVar5 != 0)) {
        cpBodyActivate(lVar4);
        cpBodyActivate(lVar5);
        cpArrayPush(*(undefined8 *)(param_1 + 0x70),param_2);
        *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(lVar4 + 0x98);
        *(long *)(lVar4 + 0x98) = param_2;
        *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar5 + 0x98);
        *(long *)(lVar5 + 0x98) = param_2;
        *(long *)(param_2 + 8) = param_1;
        return param_2;
      }
      pcVar1 = "a != NULL && b != NULL";
      pcVar3 = "Constraint is attached to a NULL body.";
      uVar2 = 0x1cc;
    }
    else {
      pcVar1 = "!space->locked";
      pcVar3 = 
      "This operation cannot be done safely during a call to cpSpaceStep() or during a query. Put these calls into a post-step callback."
      ;
      uVar2 = 0x1c9;
    }
  }
  else {
    pcVar1 = "!constraint->space";
    pcVar3 = 
    "You have already added this constraint to another space. You cannot add it to a second.";
    uVar2 = 0x1c8;
  }
  cpMessage(pcVar1,
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSpace.c"
            ,uVar2,1,1,pcVar3);
                    /* WARNING: Subroutine does not return */
  abort();
}

