
/* fairygui::GList::setup_afterAdd(fairygui::ByteBuffer*, int) */

void __thiscall fairygui::GList::setup_afterAdd(GList *this,ByteBuffer *param_1,int param_2)

{
  short sVar1;
  undefined8 uVar2;
  
  GComponent::setup_afterAdd((GComponent *)this,param_1,param_2);
  ByteBuffer::seek(param_1,param_2,6);
  sVar1 = ByteBuffer::readShort(param_1);
  if (sVar1 != -1) {
    uVar2 = GComponent::getControllerAt(*(GComponent **)(this + 0xa0),(int)sVar1);
    *(undefined8 *)(this + 800) = uVar2;
  }
  return;
}

