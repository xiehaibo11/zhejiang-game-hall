
void cpBodySleepWithGroup(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  
  iVar2 = cpBodyGetType();
  if (iVar2 == 0) {
    lVar6 = *(long *)(param_1 + 0x80);
    cVar1 = cpSpaceIsLocked(lVar6);
    if (cVar1 == '\0') {
      fVar8 = (float)cpSpaceGetSleepTimeThreshold(lVar6);
      if (INFINITY <= fVar8) {
        pcVar3 = "cpSpaceGetSleepTimeThreshold(space) < INFINITY";
        pcVar5 = 
        "Sleeping is not enabled on the space. You cannot sleep a body without setting a sleep time threshold on the space."
        ;
        uVar4 = 0x141;
      }
      else if ((param_2 == 0) || (cVar1 = cpBodyIsSleeping(param_2), cVar1 != '\0')) {
        cVar1 = cpBodyIsSleeping(param_1);
        if (cVar1 == '\0') {
          for (lVar7 = *(long *)(param_1 + 0x88); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x70)) {
            cpShapeCacheBB(lVar7);
          }
          FUN_0116fb00(lVar6,param_1);
          if (param_2 == 0) {
            *(long *)(param_1 + 0xa0) = param_1;
            *(undefined8 *)(param_1 + 0xa8) = 0;
            *(undefined4 *)(param_1 + 0xb0) = 0;
            cpArrayPush(*(undefined8 *)(lVar6 + 0x50),param_1);
          }
          else {
            lVar7 = *(long *)(param_2 + 0xa0);
            *(long *)(param_1 + 0xa0) = lVar7;
            uVar4 = *(undefined8 *)(lVar7 + 0xa8);
            *(undefined4 *)(param_1 + 0xb0) = 0;
            *(undefined8 *)(param_1 + 0xa8) = uVar4;
            *(long *)(lVar7 + 0xa8) = param_1;
          }
          cpArrayDeleteObj(*(undefined8 *)(lVar6 + 0x38),param_1);
          return;
        }
        if (param_2 == 0) {
          if (*(long *)(param_1 + 0xa0) == 0) {
            return;
          }
        }
        else if (*(long *)(param_1 + 0xa0) == *(long *)(param_2 + 0xa0)) {
          return;
        }
        pcVar3 = "ComponentRoot(body) == ComponentRoot(group)";
        pcVar5 = "The body is already sleeping and it\'s group cannot be reassigned.";
        uVar4 = 0x145;
      }
      else {
        pcVar3 = "group == NULL || cpBodyIsSleeping(group)";
        pcVar5 = "Cannot use a non-sleeping body as a group identifier.";
        uVar4 = 0x142;
      }
    }
    else {
      pcVar3 = "!cpSpaceIsLocked(space)";
      pcVar5 = 
      "Bodies cannot be put to sleep during a query or a call to cpSpaceStep(). Put these calls into a post-step callback."
      ;
      uVar4 = 0x140;
    }
  }
  else {
    pcVar3 = "cpBodyGetType(body) == CP_BODY_TYPE_DYNAMIC";
    pcVar5 = "Non-dynamic bodies cannot be put to sleep.";
    uVar4 = 0x13d;
  }
  cpMessage(pcVar3,
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSpaceComponent.c"
            ,uVar4,1,1,pcVar5);
                    /* WARNING: Subroutine does not return */
  abort();
}

