
/* cocos2d::extension::TableView::create(cocos2d::extension::TableViewDataSource*, cocos2d::Size) */

void cocos2d::extension::TableView::create(undefined8 param_1,Size *param_2)

{
  long lVar1;
  Size aSStack_30 [8];
  long local_28;
  
                    /* catch() { ... } // from try @ 00e179b8 with catch @ 00e17a08
                       catch() { ... } // from try @ 00e17a00 with catch @ 00e17a08
                       try { // try from 00e17a08 to 00f17a27 has its CatchHandler @ 00e17980 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Size::Size(aSStack_30,param_2);
  create(param_1,aSStack_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

