
/* cocos2d::DrawPrimitives::free() */

void cocos2d::DrawPrimitives::free(void)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef6fa4 with catch @ 00ef6ff4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef7044 with catch @ 00ef6ff8
                        */
  if (DAT_0178f770 != (Ref *)0x0) {
    Ref::release(DAT_0178f770);
    DAT_0178f770 = (Ref *)0x0;
  }
  DAT_0178f778 = 0;
  return;
}

