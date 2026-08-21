
void cpSpaceReindexShape(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0xa0) == 0) {
    cpShapeCacheBB(param_2);
    (**(code **)(**(long **)(param_1 + 0x68) + 0x38))
              (*(long **)(param_1 + 0x68),param_2,*(undefined8 *)(param_2 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x011637d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x60) + 0x38))
              (*(long **)(param_1 + 0x60),param_2,*(undefined8 *)(param_2 + 0x80));
    return;
  }
  cpMessage("!space->locked",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSpace.c"
            ,0x298,1,1,
            "You cannot manually reindex objects while the space is locked. Wait until the current query or step is complete."
           );
                    /* WARNING: Subroutine does not return */
  abort();
}

