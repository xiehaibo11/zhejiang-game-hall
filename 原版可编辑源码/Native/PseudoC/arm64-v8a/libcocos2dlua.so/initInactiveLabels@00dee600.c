
/* cocos2d::ui::EditBoxImplCommon::initInactiveLabels(cocos2d::Size const&) */

void __thiscall
cocos2d::ui::EditBoxImplCommon::initInactiveLabels(EditBoxImplCommon *this,Size *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dee628 to 00eee62b has its CatchHandler @ 00dee658 */
                    /* try { // try from 00dee62c to 00eee66b has its CatchHandler @ 00dee100 */
  uVar2 = (**(code **)(*(long *)this + 0x1a8))();
  plVar3 = (long *)Label::create();
  *(long **)(this + 0x18) = plVar3;
  local_50 = 0x3f80000000000000;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee628 with catch @ 00dee658
                        */
  (**(code **)(*plVar3 + 0x148))(plVar3,&local_50);
  Label::setOverflow(*(Label **)(this + 0x18),1);
                    /* catch() { ... } // from try @ 00dee6c4 with catch @ 00dee66c */
  (**(code **)(**(long **)(this + 0x18) + 0x170))(*(long **)(this + 0x18),0);
  (**(code **)(**(long **)(this + 0x10) + 0x210))
            (*(long **)(this + 0x10),*(undefined8 *)(this + 0x18),9999);
  plVar3 = (long *)Label::create();
  *(long **)(this + 0x20) = plVar3;
  local_50 = 0x3f80000000000000;
  (**(code **)(*plVar3 + 0x148))(plVar3,&local_50);
                    /* try { // try from 00dee6bc to 00eee6c3 has its CatchHandler @ 00dee738 */
                    /* try { // try from 00dee6c4 to 00eee753 has its CatchHandler @ 00dee66c */
  (**(code **)(**(long **)(this + 0x20) + 0x598))(*(long **)(this + 0x20),&Color4B::GRAY);
  Label::enableWrap(*(Label **)(this + 0x20),false);
  (**(code **)(**(long **)(this + 0x10) + 0x210))
            (*(long **)(this + 0x10),*(undefined8 *)(this + 0x20),9999);
  (**(code **)(*(long *)this + 0x18))
            (this,uVar2,(int)((*(float *)(param_1 + 4) + *(float *)(param_1 + 4)) / 3.0));
  (**(code **)(*(long *)this + 0x28))
            (this,uVar2,(int)((*(float *)(param_1 + 4) + *(float *)(param_1 + 4)) / 3.0));
                    /* catch() { ... } // from try @ 00dee6bc with catch @ 00dee738 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00dee754 to 00eee7bf has its CatchHandler @ 00dee754
                       catch(type#1 @ 00000000) { ... } // from try @ 00dee754 with catch @ 00dee754
                       catch(type#1 @ 00000000) { ... } // from try @ 00dee8f8 with catch @ 00dee754
                       catch(type#1 @ 00000000) { ... } // from try @ 00dee994 with catch @ 00dee754
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

