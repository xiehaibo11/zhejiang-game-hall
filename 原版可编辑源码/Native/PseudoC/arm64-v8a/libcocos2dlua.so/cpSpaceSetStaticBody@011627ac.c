
void cpSpaceSetStaticBody(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x88) != 0) {
      cpMessage("space->staticBody->shapeList == NULL",
                "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSpace.c"
                ,0x16e,1,1,
                "Internal Error: Changing the designated static body while the old one still had shapes attached."
               );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar1 + 0x80) = 0;
  }
  *(long *)(param_1 + 0xf8) = param_2;
  *(long *)(param_2 + 0x80) = param_1;
  return;
}

