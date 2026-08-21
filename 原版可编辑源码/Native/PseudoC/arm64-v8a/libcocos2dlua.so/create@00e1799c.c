
/* cocos2d::extension::TableView::create() */

void cocos2d::extension::TableView::create(void)

{
  long lVar1;
  Size aSStack_38 [8];
  Size aSStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00e179b8 to 00f179bb has its CatchHandler @ 00e17a08 */
                    /* try { // try from 00e179bc to 00f179ff has its CatchHandler @ 00e17980 */
  Size::Size(aSStack_38,(Size *)&Size::ZERO);
  Size::Size(aSStack_30,aSStack_38);
  create(0,aSStack_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00e17a00 to 00f17a07 has its CatchHandler @ 00e17a08 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

