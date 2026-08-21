
void FUN_00f5661c(void)

{
  long *plVar1;
  float *pfVar2;
  ulong uVar3;
  long *unaff_x19;
  Camera *unaff_x21;
  Vec2 *unaff_x22;
  Size *unaff_x23;
  ulong unaff_x24;
  ulong uVar4;
  long unaff_x26;
  undefined1 unaff_w27;
  long lVar5;
  long in_stack_00000058;
  
  if ((unaff_x24 & 1) != 0) {
    if ((int)unaff_x19[0x84] < 1) {
      uVar4 = 0;
    }
    else {
      lVar5 = 0;
      uVar4 = 0;
      do {
                    /* try { // try from 00f56668 to 01056837 has its CatchHandler @ 00f562cc */
        if (((*(char *)(unaff_x19[0x7e] + lVar5 + 4) != '\0') &&
            (-1 < *(int *)(unaff_x19[0x7e] + lVar5 + 0x10))) &&
           (plVar1 = (long *)(**(code **)(*unaff_x19 + 0x5d0))(), plVar1 != (long *)0x0)) {
          pfVar2 = (float *)(**(code **)(*plVar1 + 0x168))();
          cocos2d::Size::Size((Size *)&stack0x00000018,*pfVar2,*(float *)((long)unaff_x19 + 0x424));
          cocos2d::Size::operator=(unaff_x23,(Size *)&stack0x00000018);
          (**(code **)(*plVar1 + 0x448))(&stack0x00000018,plVar1);
          uVar3 = cocos2d::isScreenPointInRect
                            (unaff_x22,unaff_x21,(Mat4 *)&stack0x00000018,&stack0x00000008,
                             (Vec3 *)0x0);
          cocos2d::Mat4::~Mat4((Mat4 *)&stack0x00000018);
          if ((uVar3 & 1) != 0) {
            if (((char)unaff_x19[0xe2] != '\0') && (uVar4 <= (ulong)unaff_x19[0xd6])) {
              unaff_x19[0xe3] = uVar4;
              *(undefined4 *)((long)unaff_x19 + 0x724) = 0x3f800000;
            }
            break;
          }
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x18;
                    /* try { // try from 00f56644 to 01056667 has its CatchHandler @ 00f567c8 */
      } while ((long)uVar4 < (long)(int)unaff_x19[0x84]);
    }
                    /* catch() { ... } // from try @ 00f564d8 with catch @ 00f56720 */
                    /* catch() { ... } // from try @ 00f564d0 with catch @ 00f56724 */
                    /* catch() { ... } // from try @ 00f564c8 with catch @ 00f5672c */
    if ((((int)uVar4 == (int)unaff_x19[0x84]) && ((char)unaff_x19[0xe2] != '\0')) &&
       ((uVar4 & 0xffffffff) <= (ulong)unaff_x19[0xd6])) {
      unaff_x19[0xe3] = uVar4 & 0xffffffff;
                    /* catch() { ... } // from try @ 00f564c0 with catch @ 00f56734 */
      *(undefined4 *)((long)unaff_x19 + 0x724) = 0x3f800000;
    }
  }
                    /* catch() { ... } // from try @ 00f564b8 with catch @ 00f5673c */
  *(undefined1 *)(unaff_x19 + 0xe5) = unaff_w27;
                    /* catch() { ... } // from try @ 00f56570 with catch @ 00f5674c */
  (**(code **)(*unaff_x19 + 0x588))();
                    /* catch() { ... } // from try @ 00f56564 with catch @ 00f5675c */
                    /* catch() { ... } // from try @ 00f56520 with catch @ 00f56760 */
  if (*(long *)(unaff_x26 + 0x28) == in_stack_00000058) {
                    /* catch() { ... } // from try @ 00f56518 with catch @ 00f56764 */
                    /* catch() { ... } // from try @ 00f56508 with catch @ 00f56774 */
                    /* catch() { ... } // from try @ 00f56484 with catch @ 00f56778 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

