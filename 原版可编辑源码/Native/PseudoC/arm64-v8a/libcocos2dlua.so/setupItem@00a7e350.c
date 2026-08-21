
/* fairygui::GList::setupItem(fairygui::ByteBuffer*, fairygui::GObject*) */

void __thiscall fairygui::GList::setupItem(GList *this,ByteBuffer *param_1,GObject *param_2)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long lVar3;
  short sVar4;
  GButton *this_00;
  long lVar5;
  basic_string *pbVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  GComponent *this_01;
  GController *this_02;
  long *plVar8;
  int iVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00a7e370 to 00b7e3cb has its CatchHandler @ 00a7e470 */
  if (param_2 == (GObject *)0x0) {
    this_00 = (GButton *)0x0;
  }
  else {
    this_00 = (GButton *)__dynamic_cast(param_2,&GObject::typeinfo,&GButton::typeinfo,0);
  }
  lVar5 = ByteBuffer::readSP(param_1);
  if (lVar5 != 0) {
    (**(code **)(*(long *)param_2 + 0x18))(param_2,lVar5);
  }
                    /* try { // try from 00a7e3cc to 00b7e3ff has its CatchHandler @ 00a7e2d4 */
  pbVar6 = (basic_string *)ByteBuffer::readSP(param_1);
  if ((this_00 != (GButton *)0x0) && (pbVar6 != (basic_string *)0x0)) {
    GButton::setSelectedTitle(this_00,pbVar6);
  }
  lVar5 = ByteBuffer::readSP(param_1);
  if (lVar5 != 0) {
                    /* try { // try from 00a7e400 to 00b7e413 has its CatchHandler @ 00a7e46c */
    (**(code **)(*(long *)param_2 + 0x28))(param_2,lVar5);
  }
  pbVar6 = (basic_string *)ByteBuffer::readSP(param_1);
  if ((this_00 != (GButton *)0x0) && (pbVar6 != (basic_string *)0x0)) {
                    /* try { // try from 00a7e418 to 00b7e42b has its CatchHandler @ 00a7e470 */
    GButton::setSelectedIcon(this_00,pbVar6);
  }
  pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ByteBuffer::readSP(param_1);
                    /* try { // try from 00a7e42c to 00b7e48b has its CatchHandler @ 00a7e2d4 */
  if ((pbVar7 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 0x0) &&
     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (param_2 + 0x60) != pbVar7)) {
    uVar1 = *(ulong *)(pbVar7 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (pbVar7 + 0x10);
    if (((byte)*pbVar7 & 1) == 0) {
      pbVar2 = pbVar7 + 1;
      uVar1 = (ulong)((byte)*pbVar7 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_2 + 0x60),(char *)pbVar2,uVar1);
  }
                    /* catch() { ... } // from try @ 00a7e328 with catch @ 00a7e46c
                       catch() { ... } // from try @ 00a7e400 with catch @ 00a7e46c */
                    /* catch() { ... } // from try @ 00a7e370 with catch @ 00a7e470
                       catch() { ... } // from try @ 00a7e418 with catch @ 00a7e470 */
  if ((param_2 != (GObject *)0x0) &&
     (this_01 = (GComponent *)__dynamic_cast(param_2,&GObject::typeinfo,&GComponent::typeinfo,0),
     this_01 != (GComponent *)0x0)) {
    sVar4 = ByteBuffer::readShort(param_1);
    iVar9 = (int)sVar4;
                    /* try { // try from 00a7e48c to 00b7e4df has its CatchHandler @ 00a7e48c
                       catch() { ... } // from try @ 00a7e48c with catch @ 00a7e48c
                       catch() { ... } // from try @ 00a7e584 with catch @ 00a7e48c
                       catch() { ... } // from try @ 00a7e5e4 with catch @ 00a7e48c */
    if (0 < iVar9) {
      do {
        pbVar6 = (basic_string *)ByteBuffer::readS(param_1);
        this_02 = (GController *)GComponent::getController(this_01,pbVar6);
        pbVar6 = (basic_string *)ByteBuffer::readS(param_1);
        GController::setSelectedPageId(this_02,pbVar6,true);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if (1 < *(int *)param_1) {
      sVar4 = ByteBuffer::readShort(param_1);
                    /* try { // try from 00a7e4e0 to 00b7e51b has its CatchHandler @ 00a7e624 */
      iVar9 = (int)sVar4;
      if (0 < iVar9) {
        do {
          pbVar6 = (basic_string *)ByteBuffer::readS(param_1);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(local_70,pbVar6);
          sVar4 = ByteBuffer::readShort(param_1);
          pbVar6 = (basic_string *)ByteBuffer::readS(param_1);
                    /* try { // try from 00a7e528 to 00b7e583 has its CatchHandler @ 00a7e628 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(local_88,pbVar6);
          plVar8 = (long *)GComponent::getChildByPath(this_01,(basic_string *)local_70);
          if (plVar8 != (long *)0x0) {
            cocos2d::Value::Value(aVStack_58,(basic_string *)local_88);
            (**(code **)(*plVar8 + 0x38))(plVar8,(int)sVar4,aVStack_58);
            cocos2d::Value::~Value(aVStack_58);
          }
          if (((byte)local_88[0] & 1) != 0) {
                    /* try { // try from 00a7e584 to 00b7e5b7 has its CatchHandler @ 00a7e48c */
            operator_delete(local_78);
          }
          if (((byte)local_70[0] & 1) != 0) {
            operator_delete(local_60);
          }
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00a7e5b8 to 00b7e5cb has its CatchHandler @ 00a7e624 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

