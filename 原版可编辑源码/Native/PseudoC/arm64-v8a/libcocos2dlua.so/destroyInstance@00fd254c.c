
/* cocos2d::GLProgramCache::destroyInstance() */

void cocos2d::GLProgramCache::destroyInstance(void)

{
                    /* try { // try from 00fd2558 to 010d255b has its CatchHandler @ 00fd2574 */
  if (DAT_01792658 != (Ref *)0x0) {
    Ref::release(DAT_01792658);
    DAT_01792658 = (Ref *)0x0;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2558 with catch @ 00fd2574
                        */
  return;
}

