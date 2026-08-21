
/* cocos2d::extension::TableView::initWithViewSize(cocos2d::Size, cocos2d::Node*) */

undefined4 __thiscall
cocos2d::extension::TableView::initWithViewSize(TableView *this,Size *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  __tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *this_00;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Size::Size(aSStack_40,param_2);
  uVar2 = ScrollView::initWithViewSize((ScrollView *)this,aSStack_40,param_3);
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    this_00 = *(__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> **)(this + 0x480);
    if (this_00 != (__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *)0x0) {
      std::__ndk1::__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>::destroy
                (this_00,*(__tree_node **)(this_00 + 8));
      operator_delete(this_00);
    }
    *(undefined8 *)(this + 0x480) = 0;
    puVar3 = operator_new(0x18,(nothrow_t *)&std::nothrow);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = puVar3 + 1;
    }
    uVar4 = 1;
    *(undefined8 **)(this + 0x480) = puVar3;
    *(undefined4 *)(this + 0x478) = 1;
                    /* try { // try from 00e17c1c to 00f17c63 has its CatchHandler @ 00e17c1c
                       catch() { ... } // from try @ 00e17c1c with catch @ 00e17c1c
                       catch() { ... } // from try @ 00e17c7c with catch @ 00e17c1c */
    (**(code **)(*(long *)this + 0x650))(this,1);
    *(TableView **)(this + 0x328) = this + 0x468;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00e17c64 to 00f17c6f has its CatchHandler @ 00e17cc4 */
  __stack_chk_fail();
}

