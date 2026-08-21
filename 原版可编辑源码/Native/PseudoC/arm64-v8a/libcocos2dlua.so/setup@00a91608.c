
/* fairygui::Relations::setup(fairygui::ByteBuffer*, bool) */

void __thiscall fairygui::Relations::setup(Relations *this,ByteBuffer *param_1,bool param_2)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  long lVar7;
  GComponent *this_00;
  GObject *pGVar8;
  RelationItem *this_01;
  int iVar9;
  int iVar10;
  RelationItem *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  cVar3 = ByteBuffer::readByte(param_1);
  if (0 < cVar3) {
    iVar9 = 0;
    do {
      sVar5 = ByteBuffer::readShort(param_1);
      lVar7 = *(long *)(this + 8);
      if (sVar5 == -1) {
        pGVar8 = *(GObject **)(lVar7 + 0xa0);
      }
      else {
                    /* try { // try from 00a91694 to 00b916ab has its CatchHandler @ 00a9198c */
        if (param_2) {
          this_00 = (GComponent *)0x0;
          if (lVar7 != 0) {
            this_00 = (GComponent *)__dynamic_cast(lVar7,&GObject::typeinfo,&GComponent::typeinfo,0)
            ;
                    /* try { // try from 00a916b0 to 00b916db has its CatchHandler @ 00a91984 */
          }
        }
        else {
          this_00 = *(GComponent **)(lVar7 + 0xa0);
        }
        pGVar8 = (GObject *)GComponent::getChildAt(this_00,(int)sVar5);
      }
      this_01 = operator_new(0x38);
      RelationItem::RelationItem(this_01,*(GObject **)(this + 8));
      local_70 = this_01;
                    /* try { // try from 00a916e8 to 00b916ff has its CatchHandler @ 00a919a4 */
      RelationItem::setTarget(this_01,pGVar8);
      puVar1 = *(undefined8 **)(this + 0x18);
      if (puVar1 == *(undefined8 **)(this + 0x20)) {
        std::__ndk1::vector<fairygui::RelationItem*,std::__ndk1::allocator<fairygui::RelationItem*>>
        ::__push_back_slow_path<fairygui::RelationItem*const&>
                  ((vector<fairygui::RelationItem*,std::__ndk1::allocator<fairygui::RelationItem*>>
                    *)(this + 0x10),&local_70);
      }
      else {
        *puVar1 = local_70;
                    /* try { // try from 00a91704 to 00b9172b has its CatchHandler @ 00a91998 */
        *(undefined8 **)(this + 0x18) = puVar1 + 1;
      }
      cVar4 = ByteBuffer::readByte(param_1);
      iVar10 = (int)cVar4;
      if (0 < iVar10) {
        do {
          cVar4 = ByteBuffer::readByte(param_1);
          uVar6 = ByteBuffer::readBool(param_1);
                    /* try { // try from 00a91748 to 00b9175f has its CatchHandler @ 00a919a0 */
          RelationItem::internalAdd(local_70,(int)cVar4,uVar6 & 1);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != cVar3);
  }
                    /* try { // try from 00a91764 to 00b91783 has its CatchHandler @ 00a9199c */
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00a91788 to 00b917a7 has its CatchHandler @ 00a91988 */
  return;
}

