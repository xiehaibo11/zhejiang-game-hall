
void cpSpacePushContacts(long param_1,int param_2)

{
  if (param_2 < 3) {
    *(int *)(*(long *)(param_1 + 0x80) + 0x10) =
         *(int *)(*(long *)(param_1 + 0x80) + 0x10) + param_2;
    return;
  }
  cpMessage("count <= CP_MAX_CONTACTS_PER_ARBITER",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpSpaceStep.c"
            ,0xb0,1,1,"Internal Error: Contact buffer overflow!");
                    /* WARNING: Subroutine does not return */
  abort();
}

