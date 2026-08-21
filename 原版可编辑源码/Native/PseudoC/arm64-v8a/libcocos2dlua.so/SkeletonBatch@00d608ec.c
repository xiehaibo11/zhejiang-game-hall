
/* spine::SkeletonBatch::SkeletonBatch() */

void __thiscall spine::SkeletonBatch::SkeletonBatch(SkeletonBatch *this)

{
  undefined8 *puVar1;
  long lVar2;
  TrianglesCommand *this_00;
  undefined4 *puVar3;
  long lVar4;
  code *pcVar5;
  EventDispatcher *this_01;
  int iVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  TrianglesCommand *local_80;
  SkeletonBatch *pSStack_78;
  TrianglesCommand **local_60;
  long local_48;
  
                    /* try { // try from 00d608fc to 00e60903 has its CatchHandler @ 00d60a3c */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(undefined ***)this = &PTR__SkeletonBatch_016d5e98;
  *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 00d60930 to 00e60937 has its CatchHandler @ 00d60a34 */
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  iVar6 = 10000;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  do {
    this_00 = operator_new(0x90);
    cocos2d::TrianglesCommand::TrianglesCommand(this_00);
    puVar1 = *(undefined8 **)(this + 0x10);
                    /* try { // try from 00d6096c to 00e6097b has its CatchHandler @ 00d60a5c */
    local_80 = this_00;
    if (puVar1 < *(undefined8 **)(this + 0x18)) {
      *puVar1 = this_00;
      *(undefined8 **)(this + 0x10) = puVar1 + 1;
    }
    else {
      std::__ndk1::
      vector<cocos2d::TrianglesCommand*,std::__ndk1::allocator<cocos2d::TrianglesCommand*>>::
      __push_back_slow_path<cocos2d::TrianglesCommand*>
                ((vector<cocos2d::TrianglesCommand*,std::__ndk1::allocator<cocos2d::TrianglesCommand*>>
                  *)(this + 8),&local_80);
    }
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar3 = (undefined4 *)spUnsignedShortArray_create(8);
                    /* try { // try from 00d6098c to 00e609bb has its CatchHandler @ 00d60a70 */
  *(undefined4 **)(this + 0x48) = puVar3;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *puVar3 = 0;
  lVar4 = cocos2d::Director::getInstance();
  this_01 = *(EventDispatcher **)(lVar4 + 0xb0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,"director_after_draw");
                    /* try { // try from 00d609bc to 00e60a27 has its CatchHandler @ 00d606a4 */
  local_80 = (TrianglesCommand *)&PTR_FUN_016d5ec8;
  pSStack_78 = this;
  local_60 = &local_80;
  cocos2d::EventDispatcher::addCustomEventListener
            (this_01,(basic_string *)local_98,(function *)&local_80);
  if (&local_80 == local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (TrianglesCommand **)0x0) goto LAB_00d60a00;
    pcVar5 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar5)();
LAB_00d60a00:
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 00d60a28 to 00e60a2f has its CatchHandler @ 00d60a60 */
                    /* try { // try from 00d60a30 to 00e60aaf has its CatchHandler @ 00d606a4 */
                    /* catch() { ... } // from try @ 00d60930 with catch @ 00d60a34 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00d608b4 with catch @ 00d60a38 */
  __stack_chk_fail();
}

