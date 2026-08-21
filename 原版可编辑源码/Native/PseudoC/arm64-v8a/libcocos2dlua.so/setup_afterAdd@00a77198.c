
/* fairygui::GLabel::setup_afterAdd(fairygui::ByteBuffer*, int) */

void __thiscall fairygui::GLabel::setup_afterAdd(GLabel *this,ByteBuffer *param_1,int param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  GButton *this_00;
  GTextInput *this_01;
  basic_string *pbVar7;
  undefined4 local_54;
  Color3B aCStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a771b8 to 00b771eb has its CatchHandler @ 00a770c0 */
  GComponent::setup_afterAdd((GComponent *)this,param_1,param_2);
  uVar4 = ByteBuffer::seek(param_1,param_2,6);
                    /* try { // try from 00a771ec to 00b771ff has its CatchHandler @ 00a77258 */
  if (((uVar4 & 1) != 0) &&
     (cVar2 = ByteBuffer::readByte(param_1), *(int *)(*(long *)(this + 0xb0) + 0x34) == (int)cVar2))
  {
    lVar5 = ByteBuffer::readSP(param_1);
    if (lVar5 != 0) {
                    /* try { // try from 00a77204 to 00b77217 has its CatchHandler @ 00a7725c */
      (**(code **)(*(long *)this + 0x18))(this,lVar5);
    }
                    /* try { // try from 00a77218 to 00b77277 has its CatchHandler @ 00a770c0 */
    lVar5 = ByteBuffer::readSP(param_1);
    if (lVar5 != 0) {
      (**(code **)(*(long *)this + 0x28))(this,lVar5);
    }
    uVar4 = ByteBuffer::readBool(param_1);
    if ((uVar4 & 1) != 0) {
      local_54 = ByteBuffer::readColor(param_1);
                    /* catch() { ... } // from try @ 00a77114 with catch @ 00a77258
                       catch() { ... } // from try @ 00a771ec with catch @ 00a77258 */
      cocos2d::Color3B::Color3B(aCStack_50,(Color4B *)&local_54);
                    /* catch() { ... } // from try @ 00a7715c with catch @ 00a7725c
                       catch() { ... } // from try @ 00a77204 with catch @ 00a7725c */
      setTitleColor(this,aCStack_50);
    }
    iVar3 = ByteBuffer::readInt(param_1);
    if (iVar3 != 0) {
      setTitleFontSize(this,iVar3);
    }
    uVar4 = ByteBuffer::readBool(param_1);
    if ((uVar4 & 1) != 0) {
      lVar5 = *(long *)(this + 0x280);
      while (lVar5 != 0) {
        lVar6 = __dynamic_cast(lVar5,&GObject::typeinfo,&GTextField::typeinfo,0);
        if (lVar6 != 0) {
LAB_00a7730c:
          if ((lVar6 != 0) &&
             (this_01 = (GTextInput *)
                        __dynamic_cast(lVar6,&GTextField::typeinfo,&GTextInput::typeinfo,0),
             this_01 != (GTextInput *)0x0)) {
            pbVar7 = (basic_string *)ByteBuffer::readSP(param_1);
            if (pbVar7 != (basic_string *)0x0) {
              GTextInput::setPrompt(this_01,pbVar7);
            }
            lVar5 = ByteBuffer::readSP(param_1);
            if (lVar5 != 0) {
              GTextInput::setRestrict((basic_string *)this_01);
            }
            iVar3 = ByteBuffer::readInt(param_1);
            if (iVar3 != 0) {
              GTextInput::setMaxLength((int)this_01);
            }
            iVar3 = ByteBuffer::readInt(param_1);
            if (iVar3 != 0) {
              GTextInput::setKeyboardType((int)this_01);
            }
            uVar4 = ByteBuffer::readBool(param_1);
            if ((uVar4 & 1) != 0) {
              GTextInput::setPassword(this_01,true);
            }
            goto LAB_00a773b8;
          }
          break;
        }
        lVar6 = __dynamic_cast(lVar5,&GObject::typeinfo,&typeinfo,0);
        if (lVar6 == 0) {
          this_00 = (GButton *)__dynamic_cast(lVar5,&GObject::typeinfo,&GButton::typeinfo,0);
          if (this_00 != (GButton *)0x0) {
            lVar6 = GButton::getTextField(this_00);
            goto LAB_00a7730c;
          }
          break;
        }
        lVar5 = *(long *)(lVar6 + 0x280);
      }
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 0xd;
    }
  }
LAB_00a773b8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

