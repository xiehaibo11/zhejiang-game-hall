
void cpSpaceReindexStatic(long param_1)

{
  if (*(int *)(param_1 + 0xa0) == 0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x10))
              (*(long **)(param_1 + 0x60),cpShapeUpdateFunc,0);
                    /* WARNING: Could not recover jumptable at 0x01163748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x60) + 0x30))();
    return;
  }
  cpMessage("!space->locked",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSpace.c"
            ,0x28f,1,1,
            "You cannot manually reindex objects while the space is locked. Wait until the current query or step is complete."
           );
                    /* WARNING: Subroutine does not return */
  abort();
}

