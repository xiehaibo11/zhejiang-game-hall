
void cpShapeSetBody(long param_1,undefined8 param_2)

{
  if ((*(long *)(param_1 + 0x78) == 0) &&
     ((*(long *)(param_1 + 0x10) == 0 || (*(long *)(*(long *)(param_1 + 0x10) + 0x88) != param_1))))
  {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    return;
  }
  cpMessage("!cpShapeActive(shape)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpShape.c"
            ,0x5a,1,1,
            "You cannot change the body on an active shape. You must remove the shape from the space before changing the body."
           );
                    /* WARNING: Subroutine does not return */
  abort();
}

