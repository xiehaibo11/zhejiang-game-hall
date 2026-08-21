
undefined4 * cpSpaceInit(undefined4 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[0x28] = 0;
  param_1[0xc] = 0;
  *param_1 = 10;
  param_1[3] = 0x3f800000;
  *(undefined8 *)(param_1 + 6) = 0x3aeb89903dcccccd;
  param_1[8] = 3;
  *(undefined8 *)(param_1 + 0x16) = 0;
  uVar1 = cpBBTreeNew(cpShapeGetBB,0);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = cpBBTreeNew(cpShapeGetBB,uVar1);
  *(undefined8 *)(param_1 + 0x1a) = uVar1;
  cpBBTreeSetVelocityFunc(uVar1,FUN_01162718);
  uVar1 = cpArrayNew(0);
  *(undefined8 *)(param_1 + 0x26) = uVar1;
  uVar1 = cpArrayNew(0);
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  uVar1 = cpArrayNew(0);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = cpArrayNew(0);
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  uVar1 = cpArrayNew(0);
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  *(undefined8 *)(param_1 + 4) = 0x7f80000000000000;
  uVar1 = cpArrayNew(0);
  *(undefined8 *)(param_1 + 0x1e) = uVar1;
  uVar1 = cpArrayNew(0);
  *(undefined8 *)(param_1 + 0x24) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar1 = cpHashSetNew(0,FUN_01162724);
  *(undefined8 *)(param_1 + 0x22) = uVar1;
  uVar1 = cpArrayNew(0);
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined8 *)(param_1 + 0x38) = cpCollisionHandlerDoNothing._48_8_;
  uVar1 = cpCollisionHandlerDoNothing._32_8_;
  *(undefined8 *)(param_1 + 0x36) = cpCollisionHandlerDoNothing._40_8_;
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  uVar1 = cpCollisionHandlerDoNothing._16_8_;
  *(undefined8 *)(param_1 + 0x32) = cpCollisionHandlerDoNothing._24_8_;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = cpCollisionHandlerDoNothing._0_8_;
  *(undefined8 *)(param_1 + 0x2e) = cpCollisionHandlerDoNothing._8_8_;
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  uVar1 = cpHashSetNew(0,FUN_01162768);
  *(undefined8 *)(param_1 + 0x2a) = uVar1;
  uVar1 = cpArrayNew(0);
  *(undefined8 *)(param_1 + 0x3c) = uVar1;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  lVar2 = cpBodyInit(0,0,param_1 + 0x40);
  cpBodySetType(lVar2,2);
  lVar3 = *(long *)(param_1 + 0x3e);
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x88) != 0) {
      cpMessage("space->staticBody->shapeList == NULL",
                "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSpace.c"
                ,0x16e,1,1,
                "Internal Error: Changing the designated static body while the old one still had shapes attached."
               );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + 0x80) = 0;
  }
  *(long *)(param_1 + 0x3e) = lVar2;
  *(undefined4 **)(lVar2 + 0x80) = param_1;
  return param_1;
}

