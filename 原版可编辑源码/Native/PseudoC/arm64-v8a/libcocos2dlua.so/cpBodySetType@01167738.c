
void cpBodySetType(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  
  uVar8 = 0x7f800000;
  if (*(float *)(param_1 + 0xb0) == INFINITY) {
    cVar3 = '\x02';
    if (param_2 == 2) {
      return;
    }
  }
  else {
    cVar3 = *(float *)(param_1 + 0x10) == INFINITY;
    if ((byte)cVar3 == param_2) {
      return;
    }
  }
  if (param_2 != 2) {
    uVar8 = 0;
  }
  *(undefined4 *)(param_1 + 0xb0) = uVar8;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0x7f80000000000000;
    *(undefined8 *)(param_1 + 0x10) = 0x7f80000000000000;
    cpBodyAccumulateMassFromShapes(param_1);
    lVar7 = *(long *)(param_1 + 0x80);
  }
  else {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0x7f800000;
    *(undefined8 *)(param_1 + 0x10) = 0x7f800000;
    lVar7 = *(long *)(param_1 + 0x80);
  }
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0xa0) != 0) {
      cpMessage("!space->locked",
                "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpBody.c"
                ,0xae,1,1,
                "This operation cannot be done safely during a call to cpSpaceStep() or during a query. Put these calls into a post-step callback."
               );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar4 = (long *)(lVar7 + 0x40);
    if (cVar3 != '\x02') {
      cpBodyActivate(param_1);
      plVar4 = (long *)(lVar7 + 0x38);
    }
    plVar6 = (long *)(lVar7 + 0x40);
    if (param_2 != 2) {
      plVar6 = (long *)(lVar7 + 0x38);
    }
    lVar5 = *plVar6;
    if (*plVar4 != lVar5) {
      cpArrayDeleteObj(*plVar4,param_1);
      cpArrayPush(lVar5,param_1);
    }
    puVar1 = (undefined8 *)(lVar7 + 0x60);
    if (cVar3 != '\x02') {
      puVar1 = (undefined8 *)(lVar7 + 0x68);
    }
    puVar2 = (undefined8 *)(lVar7 + 0x60);
    if (param_2 != 2) {
      puVar2 = (undefined8 *)(lVar7 + 0x68);
    }
    plVar4 = (long *)*puVar1;
    plVar6 = (long *)*puVar2;
    if (plVar4 != plVar6) {
      for (lVar7 = *(long *)(param_1 + 0x88); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x70)) {
        (**(code **)(*plVar4 + 0x28))(plVar4,lVar7,*(undefined8 *)(lVar7 + 0x80));
        (**(code **)(*plVar6 + 0x20))(plVar6,lVar7,*(undefined8 *)(lVar7 + 0x80));
      }
    }
  }
  return;
}

