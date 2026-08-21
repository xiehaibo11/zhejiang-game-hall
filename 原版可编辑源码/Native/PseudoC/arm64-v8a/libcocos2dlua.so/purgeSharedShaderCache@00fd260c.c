
/* cocos2d::GLProgramCache::purgeSharedShaderCache() */

void cocos2d::GLProgramCache::purgeSharedShaderCache(void)

{
                    /* try { // try from 00fd261c to 010d261f has its CatchHandler @ 00fd2630 */
  if (DAT_01792658 != (Ref *)0x0) {
    Ref::release(DAT_01792658);
    DAT_01792658 = (Ref *)0x0;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd261c with catch @ 00fd2630
                        */
  return;
}

