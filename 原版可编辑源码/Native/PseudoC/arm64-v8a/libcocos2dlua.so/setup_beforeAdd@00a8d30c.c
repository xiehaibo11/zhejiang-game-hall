
/* fairygui::GTextInput::setup_beforeAdd(fairygui::ByteBuffer*, int) */

void __thiscall
fairygui::GTextInput::setup_beforeAdd(GTextInput *this,ByteBuffer *param_1,int param_2)

{
  int iVar1;
  basic_string *pbVar2;
  ulong uVar3;
  
  GTextField::setup_beforeAdd((GTextField *)this,param_1,param_2);
  ByteBuffer::seek(param_1,param_2,4);
  pbVar2 = (basic_string *)ByteBuffer::readSP(param_1);
  if (pbVar2 != (basic_string *)0x0) {
    setPrompt(this,pbVar2);
  }
  ByteBuffer::readSP(param_1);
  iVar1 = ByteBuffer::readInt(param_1);
  if (iVar1 != 0) {
    cocos2d::ui::EditBox::setMaxLength((int)*(undefined8 *)(this + 0x208));
  }
  iVar1 = ByteBuffer::readInt(param_1);
  if (iVar1 != 0) {
    FUIInput::setKeyboardType((int)*(undefined8 *)(this + 0x208));
  }
  uVar3 = ByteBuffer::readBool(param_1);
  if ((uVar3 & 1) != 0) {
    FUIInput::setPassword(*(FUIInput **)(this + 0x208),true);
    return;
  }
  return;
}

