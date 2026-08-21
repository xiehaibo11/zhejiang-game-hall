
/* fairygui::GPath::onCRSplineCurve(int, int, float) */

void fairygui::GPath::onCRSplineCurve(int param_1,int param_2,float param_3)

{
  long lVar1;
  Vec3 aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  cocos2d::Vec3::Vec3(aVStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00ac056c to 00bc05df has its CatchHandler @ 00ac056c
                       catch() { ... } // from try @ 00ac056c with catch @ 00ac056c
                       catch() { ... } // from try @ 00ac05ec with catch @ 00ac056c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

