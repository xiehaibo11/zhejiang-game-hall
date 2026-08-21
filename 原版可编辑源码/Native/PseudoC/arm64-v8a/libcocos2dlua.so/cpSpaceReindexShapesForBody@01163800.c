
void cpSpaceReindexShapesForBody(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x88);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0xa0) != 0) break;
    cpShapeCacheBB(lVar1);
    (**(code **)(**(long **)(param_1 + 0x68) + 0x38))
              (*(long **)(param_1 + 0x68),lVar1,*(undefined8 *)(lVar1 + 0x80));
    (**(code **)(**(long **)(param_1 + 0x60) + 0x38))
              (*(long **)(param_1 + 0x60),lVar1,*(undefined8 *)(lVar1 + 0x80));
    lVar1 = *(long *)(lVar1 + 0x70);
  }
  cpMessage("!space->locked",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSpace.c"
            ,0x298,1,1,
            "You cannot manually reindex objects while the space is locked. Wait until the current query or step is complete."
           );
                    /* WARNING: Subroutine does not return */
  abort();
}

