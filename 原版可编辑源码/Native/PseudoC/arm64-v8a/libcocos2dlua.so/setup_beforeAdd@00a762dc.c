
/* fairygui::GGroup::setup_beforeAdd(fairygui::ByteBuffer*, int) */

void __thiscall fairygui::GGroup::setup_beforeAdd(GGroup *this,ByteBuffer *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  
                    /* try { // try from 00a762f0 to 00b76323 has its CatchHandler @ 00a763f0 */
  GObject::setup_beforeAdd((GObject *)this,param_1,param_2);
  ByteBuffer::seek(param_1,param_2,5);
  cVar1 = ByteBuffer::readByte(param_1);
  *(int *)(this + 0x1dc) = (int)cVar1;
  uVar4 = ByteBuffer::readInt(param_1);
                    /* try { // try from 00a76324 to 00b76337 has its CatchHandler @ 00a763bc */
  *(undefined4 *)(this + 0x1e0) = uVar4;
  uVar4 = ByteBuffer::readInt(param_1);
  *(undefined4 *)(this + 0x1e4) = uVar4;
                    /* try { // try from 00a7633c to 00b7636f has its CatchHandler @ 00a763c0 */
  if (1 < *(int *)param_1) {
    bVar2 = ByteBuffer::readBool(param_1);
    this[0x1e8] = (GGroup)(bVar2 & 1);
    bVar2 = ByteBuffer::readBool(param_1);
    this[0x1e9] = (GGroup)(bVar2 & 1);
    sVar3 = ByteBuffer::readShort(param_1);
    *(int *)(this + 0x1ec) = (int)sVar3;
  }
                    /* try { // try from 00a76370 to 00b7640b has its CatchHandler @ 00a75ef0 */
  return;
}

