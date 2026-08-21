
/* cocos2d::ui::ScrollView::jumpToBottomRight() */

void __thiscall cocos2d::ui::ScrollView::jumpToBottomRight(ScrollView *this)

{
  long lVar1;
  float *pfVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x7c0) == 3) {
    fVar5 = *(float *)(this + 0x80);
    pfVar2 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0x168))();
    fVar4 = *pfVar2;
    this[0x81d] = (ScrollView)0x0;
                    /* try { // try from 00dbd8f8 to 00ebd8fb has its CatchHandler @ 00dbd914 */
    puVar3 = (undefined8 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))(*(long **)(this + 0x7b8))
    ;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbd8f8 with catch @ 00dbd914
                        */
    local_40 = CONCAT44(0.0 - (float)((ulong)*puVar3 >> 0x20),(fVar5 - fVar4) - (float)*puVar3);
                    /* try { // try from 00dbd918 to 00ebd96b has its CatchHandler @ 00dbd918
                       catch() { ... } // from try @ 00dbd918 with catch @ 00dbd918
                       catch() { ... } // from try @ 00dbde00 with catch @ 00dbd918
                       catch() { ... } // from try @ 00dbe024 with catch @ 00dbd918
                       catch() { ... } // from try @ 00dbe1c8 with catch @ 00dbd918
                       catch() { ... } // from try @ 00dbe250 with catch @ 00dbd918 */
    (**(code **)(*(long *)this + 0x7c0))(this,&local_40,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

