
/* fairygui::GTree::setup_beforeAdd(fairygui::ByteBuffer*, int) */

void __thiscall fairygui::GTree::setup_beforeAdd(GTree *this,ByteBuffer *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  GList::setup_beforeAdd((GList *)this,param_1,param_2);
  ByteBuffer::seek(param_1,param_2,9);
  uVar2 = ByteBuffer::readInt(param_1);
  *(undefined4 *)(this + 0x3e0) = uVar2;
  cVar1 = ByteBuffer::readByte(param_1);
  *(int *)(this + 0x3f0) = (int)cVar1;
  return;
}

